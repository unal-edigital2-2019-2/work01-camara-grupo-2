# Primera Entrega: Captura de datos con la cámara.
## Introducción:

Para esta entrega se requiere que la cámara muestre una franja de colores en la pantalla con un tamaño de 176 y 144.

Adicional a los módulos que se plantean originalmente se plantean los siguientes módulos:
### Captura_datos_downsampler


Este módulo busca hacer la captura del dato para pasarlo a la memoria DP_RAM.

Tiene 4 entradas href, pckl, vysnc y data; los tres primeros son clocks y el último es una cadena de 8 caracteres. Además tiene 3 salidas DP_RAM_addr_out, DP_RAM_data_out, DP_RAM_regW; el primero es una cadena de 15 caracteres, el segundo una cadena de 8 caracteres y el tercero es un registro que autoriza la escritura en la DP_RAM. 

Cuenta también con 5 registros FSM_state, pixel_half, temp_rgb, widthimage y  lengthimage; el primero es una cadena de 2 caracteres y indica cuatro posibles estados WAIT_FRAME_STAR (00),DATA_OUT_RANGE(11), DONE (10) y ROW_CAPTURE (01); el segundo indica si se está almacenando medio pixel o uno completo, el tercero es una cadena de 16 caracteres en la cual se guarda el pixel completo asumiendo RGR565, el cuarto lleva el conteo del ancho de pixeles enviados y el último lleva el conteo de filas enviadas. 

#### Funcionamiento:

Funciona con un flanco de subida del reloj y tiene diferentes casos que depende de FSM_state: 
- Caso 1: DONE se encarga de enviar la imagen a la memoria y espera otra imagen. 
- Caso 2: DATA_OUT_RANGE evita que los datos que están fuera del rango de pantalla sean envíados a la memoría. 
- Caso 3: WAIT_FRAME_START espera por VSYNC
- Caso 4: ROW_CAPTURE guardar el dato

Para el primer caso (DONE) ya se ha llenado la memoria,  sin embargo como la cámara sigue tomando imagenes; por lo tanto, si vsync es igual a 0 se mantiene el valor de acabado, es decir no se ha iniciado el proceso de gardar en memoria una nueva imagen y si no se cumple esto si no que vsync es 1 se inicializan todos los valores de nuevo; se guarda en DP_RAM_regW, en DP_RAM_addr_out y en lengthimage 0; y se inicializa ROW_CAPTURE . 

En el segundo caso, si href es 1 se mantiene en caso de que los pixeles se hayan salido del rango; en el caso contrario en widthimage y DP_RAM_regW se guarda 0 inicializando ROW_CAPTURE.

El tercer estado se mantiene si href es 0. En caso contrario, se inicializa ROW_CAPTURE. 

La captura inicia cuando hay un flanco positivo en el pclk y href. Cuando esto pasa y pixel_half es 0 en temp_rgb se guardan los datos de data y en DP_RAM_regW se guarda 0, con lo cual no se autoriza. De lo contrario la dirección de salida se aumenta en 1, en temp_rgb se guarda data, en DP_RAM_data_out se guardan los tres posibiles registros de temp_rgb, se autoriza la escritura en buffer_dp_ram guardando 1 en DP_RAM_regW y se aumenta el ancho de la imagen. En caso de que se alcance el máximo tamaño se guarda en FSM_state DATA_OUT_RANGE. En caso contrario, se inicializa WAIT_FRAME_START.

Si href es 0 se aumenta el tamaño de la longitud de una pantalla; en caso de que se alcance el tamaño de longitud máxima se guarda en FSM_state DONE. 
 

Para el cambio de RGB565 a RBG332 se usa la siguiente línea: 
#### DP_RAM_data_out = {temp_rgb[15:13], temp_rgb[10:8],temp_rgb[4:3]}.
En este caso lo que se hace es tomar los bits más significativos de temp_rgb desde la posición 15 hasta la 11; después se toman los más significativos de la 10 a 5 y los más significativos de la 4 a la 1 y se concatenan en la saldia de ocho caracteres.  

### test_cam:

- Se le agregó el módulo del captura_datos_downsampler.
Esto se hace instanciado sus variables de entrada: data, vsync, href y pclk. Y sus variables de salida: DP_RAM_addr_out, DP_RAM_data_out y DP_RAM_regW. 
