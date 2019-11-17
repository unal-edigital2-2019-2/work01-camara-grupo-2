# Primera Entrega: Captura de datos con la cámara.
## Introducción:

Con base en el siguiente diagrama:

Se plantean los siguientes módulos:
### Captura_datos_downsampler


Este módulo busca hacer la captura del dato para pasarlo a la memoria DP_RAM y tiene el siguiente diagrama de caja negra:

Tiene 4 entradas href, pckl, vysnc y data; los tres primeros son clocks y el último es una cadena de 8 caracteres. Además tiene 3 salidas DP_RAM_addr_out, DP_RAM_data_out, DP_RAM_regW; el primero es una cadena de 15 caracteres, el segundo una cadenera de 8 caracteres y el tercero es un registro que autoriza la escritura en la DP_RAM. 

Cuenta también con 5 registros FSM_state, pixel_half, temp_rgb, widthimage y  lengthimage; el primero es una cadena de 2 caracteres y indica cuatro posibles estados WAIT_FRAME_STAR (00),DATA_OUT_RANGE(11), DONE (10) y ROW_CAPTURE (01); el segundo indica si se está almacenando medio pixel o uno completo, el tercero es una cadena de 16 caracteres en la cual se guarda el pixel completo asumiendo RGR565, el cuarto lleva el conteo del ancho de pixeles enviados y el último lleva el conteo de filas enviadas. 

#### Funcionamiento:

Funciona con un flanco de subida del reloj y tiene diferentes casos que depende de FSM_state: 
- Caso 1: DONE se encarga de enviar la imagen a la memoria y espera otra imagen. 
- Caso 2: DATA_OUT_RANGE evita que los datos que están fuera del rango de pantalla sean envíados a la memoría. 
- Caso 3: WAIT_FRAME_START espera por VSYNC
- Caso 4: ROW_CAPTURE  


### test_cam:
Los cambios aplicados al módulo son los siguientes:

- Se le agregó un divisor de frecuencias.
- Se le agregó el módulo del captura_datos_downsampler.
