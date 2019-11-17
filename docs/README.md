# Primera Entrega: Captura de datos con la cámara.
## Introducción:

Con base en el siguiente diagrama:

Se plantean los siguientes módulos:
### Captura_datos_downsampler


Este módulo busca hacer la captura del dato para pasarlo a la memoria DP_RAM y tiene el siguiente diagrama de caja negra:

Tiene 4 entradas href, pckl, vysnc y data; los tres primeros son clocks y el último es una cadema de 8 caracteres. Además tiene 3 salidas DP_RAM_addr_out, DP_RAM_data_out, DP_RAM_regW; el primero es una cadena de 15 caracteres, el segundo una cadenera de 8 caracteres y el tercero un registro que autoriza la escrtura en la DP_RAM_. Además se tienen 3 registros FSM_state, pixel_half, temp_rgb_; el primero es una cadena de 2 caracteres y indica dos posibles estados WAIT_FRAME_STAR y ROW_CAPTURE_, el segundo indica si se está almacenando medio pixel o uno completo y el tercero es una cadena de 16 caracteres en la cual se guarda el pixel completo asumiendo RGR565. Por último, tiene 3 parámetros locales que son MAX_CAPTURE; 


