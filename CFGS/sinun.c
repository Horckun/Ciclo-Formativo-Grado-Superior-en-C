void sinun(int tema) {
	if(tema == 1) {
		FILE *archivo;
		archivo = fopen("Unidades básicas.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n\n");
		}
		
		p("Unidades b%csicas:\n",160);
		p("=================\n\n");
		
		p("==========================================================\n");
		p("=                                  =           =         =\n");
		p("= Magnitud                         = Nombre    = S%cmbolo =\n",161);
		p("=                                  =           =         =\n");
		p("==========================================================\n");
		p("= Longitud                         = Metro     = m.      =\n");
		p("==========================================================\n");
		p("= Masa                             = Kilogramo = kg.     =\n");
		p("==========================================================\n");
		p("= Tiempo                           = Segundo   = s.      =\n");
		p("==========================================================\n");
		p("= Intensidad de corriente el%ctrica = Amperio   = A.      =\n",130);
		p("==========================================================\n");
		p("= Temperatura termodin%cmica        = Kelvin    = K.      =\n",160);
		p("==========================================================\n");
		p("= Cantidad de sustancia            = Mol       = mol     =\n");
		p("==========================================================\n");
		p("= Intensidad luminosa              = Candela   = cd.     =\n");
		p("==========================================================\n\n");
		
		fprintf(archivo,"Unidades básicas:\n");
		fprintf(archivo,"=================\n\n");		
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"=                                  =           =         =\n");
		fprintf(archivo,"= Magnitud                         = Nombre    = Símbolo =\n");
		fprintf(archivo,"=                                  =           =         =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Longitud                         = Metro     = m.      =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Masa                             = Kilogramo = kg.     =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Tiempo                           = Segundo   = s.      =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Intensidad de corriente elétrica = Amperio   = A.      =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Temperatura termodinámica        = Kelvin    = K.      =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Cantidad de sustancia            = Mol       = mol     =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Intensidad luminosa              = Candela   = cd.     =\n");
		fprintf(archivo,"==========================================================\n\n");
		
		system("pause");
		p("\n");
		
		p("Unidad de longitud: metro (m).\n");
		p("------------------------------\n");
		p("El metro es la longitud de trayecto recorrido en el vac%co por la luz durante un tiempo de 1/299 792 458 de segundo.\n\n",161);
		
		p("Unidad de masa.\n");
		p("---------------\n");
		p("El kilogramo (kg) es igual a la masa del prototipo internacional del kilogramo, adoptado por la tercera Conferencia General de Pesas y Medidas en 1901.\n\n");
		
		p("Unidad de tiempo.\n");
		p("-----------------\n");
		p("El segundo (s) es la duraci%cn de 9 192 631 770 periodos de la radiaci%cn correspondiente a la transici%cn entre los dos niveles hiperfinos del estado fundamental del %ctomo de cesio 133. Esta definici%cn se refiere al %ctomo de cesio en reposo, a una tempartaura de 0 K.\n\n",162,162,162,160,162,160);
		
		p("Unidad de intensidad de corriente el%cctrica.\n",130);
		p("--------------------------------------------\n");
		p("El amperio (A) es la intensidad de una corriente constante que, manteni%cndose en dos conductores paralelos, rectil%cneos, de longitud infinita, de secci%cn circular despreciable y situados a una distancia de un metro uno de otro en el vac%co, producir%ca entre estos conductores una fuerza igual a 2%c10-7 newton por metro de longitud.\n",130,161,162,161,161,248);
		p("De aqu%c resulta que la permeabilidad del vac%co es %c0=4p%c10-7H/m (henrio por metro).\n\n",161,161,230,248);
		
		fprintf(archivo,"Unidad de longitud: metro (m).\n");
		fprintf(archivo,"------------------------------\n");
		fprintf(archivo,"El metro es la longitud de trayecto recorrido en el vacío por la luz durante un tiempo de 1/299 792 458 de segundo.\n\n");		
		fprintf(archivo,"Unidad de masa.\n");
		fprintf(archivo,"---------------\n");
		fprintf(archivo,"El kilogramo (kg) es igual a la masa del prototipo internacional del kilogramo, adoptado por la tercera Conferencia General de Pesas y Medidas en 1901.\n\n");		
		fprintf(archivo,"Unidad de tiempo.\n");
		fprintf(archivo,"-----------------\n");
		fprintf(archivo,"El segundo (s) es la duración de 9 192 631 770 periodos de la radiación correspondiente a la transición entre los dos niveles hiperfinos del estado fundamental del átomo de cesio 133. Esta definición se refiere al átomo de cesio en reposo, a una tempartaura de 0 K.\n\n");		
		fprintf(archivo,"Unidad de intensidad de corriente eléctrica.\n");
		fprintf(archivo,"--------------------------------------------\n");
		fprintf(archivo,"El amperio (A) es la intensidad de una corriente constante que, manteniéndose en dos conductores paralelos, rectilíneos, de longitud infinita, de sección circular despreciable y situados a una distancia de un metro uno de otro en el vacío, produciría entre estos conductores una fuerza igual a 2°10-7 newton por metro de longitud.\n");
		fprintf(archivo,"De aquí resulta que la permeabilidad del vacío es µ0=4°c10-7H/m (henrio por metro).\n\n");
		
		system("pause");
		p("\n");
		
		p("Unidad de temperatura termodin%cmica.\n",160);
		p("------------------------------------\n");
		p("El kelvin (K), unidad de temperatura termodin%cmica, es la fracci%cn 1/273,16 de la temperatura termodin%cmica del punto triple del agua.\n",160,162,160);
		p("Esta definici%cn se refiere a un agua de una composici%cn isot%cpica definida por las siguientes relaciones de cantidad de sustancia: 0,000 155 76 moles de 2H por mol de 1H, 0,000 379 9 moles de 17O por mol de 16O y 0,0002 005 2 moles de de 18O por mol de 16O.\n",162,162,162);
		p("De aqu%c resulta que la temperatura termodin%cmica del punto triple del agua es igual a 273,16 kelvin exactamente Ttpw=273,16 K.\n\n",161,160);
		
		fprintf(archivo,"Unidad de temperatura termodinámica.\n");
		fprintf(archivo,"------------------------------------\n");
		fprintf(archivo,"El kelvin (K), unidad de temperatura termodinámica, es la fracción 1/273,16 de la temperatura termodinámica del punto triple del agua.\n");
		fprintf(archivo,"Esta definición se refiere a un agua de una composición isotópica definida por las siguientes relaciones de cantidad de sustancia: 0,000 155 76 moles de 2H por mol de 1H, 0,000 379 9 moles de 17O por mol de 16O y 0,0002 005 2 moles de de 18O por mol de 16O.\n");
		fprintf(archivo,"De aquí resulta que la temperatura termodinámica del punto triple del agua es igual a 273,16 kelvin exactamente Ttpw=273,16 K.\n\n");
		
		system("pause");
		p("\n");
		
		p("Unidad de cantidad de sustancia.\n");
		p("--------------------------------\n");
		p("El mol (mol) es la cantidad de sustancia de un sistema que contiene tantas entidades elementales como %ctomos hay en 0,012 kilogramos de carbono 12. Esta definici%cn se refiere a %ctomos de carbono 12 no ligados, en reposo y en su estado fundamental.\n",160,162,160);
		p("Cuando se emplee el mol, deben especificarse las unidades elementales, que pueden ser %ctomos, mol%cculas, iones, electrones u otras part%cculas o grupos especificados de tales part%cculas.\n",160,130,161,161);
		p("De aqu%c resulta que la masa molar del carbono 12 es igual a 12 g por mol, exactamente M(12C)=12 g/mol.\n\n",161);
		
		p("Unidad de intensidad luminosa.\n");
		p("------------------------------\n");
		p("La candela (cd) es la unidad luminosa, en una direcci%cn dada, de una fuente que emite una radiaci%cn monocrom%ctica de frecuencia 540%c1012 hercios y cuya intensidad energ%ctica en dicha direcci%cn es 1/683 vatios por estereorradi%cn.\n",162,162,160,248,130,162,162);
		p("De aqu%c resulta que la eficacia luminosa espectral de la radiaci%cn monocrom%ctica de frecuencia igual a 540%c1012 hercios es igual a 683 l%cmenes por vatio, exactamente K=683 lm/W=683 cd sr/W.\n\n",161,162,160,248,163);
		
		fprintf(archivo,"Unidad de cantidad de sustancia.\n");
		fprintf(archivo,"--------------------------------\n");
		fprintf(archivo,"El mol (mol) es la cantidad de sustancia de un sistema que contiene tantas entidades elementales como átomos hay en 0,012 kilogramos de carbono 12. Esta definición se refiere a átomos de carbono 12 no ligados, en reposo y en su estado fundamental.\n");
		fprintf(archivo,"Cuando se emplee el mol, deben especificarse las unidades elementales, que pueden ser átomos, moléculas, iones, electrones u otras partículas o grupos especificados de tales partículas.\n");
		fprintf(archivo,"De aquí resulta que la masa molar del carbono 12 es igual a 12 g por mol, exactamente M(12C)=12 g/mol.\n\n");		
		fprintf(archivo,"Unidad de intensidad luminosa.\n");
		fprintf(archivo,"------------------------------\n");
		fprintf(archivo,"La candela (cd) es la unidad luminosa, en una dirección dada, de una fuente que emite una radiación monocromática de frecuencia 540°1012 hercios y cuya intensidad energética en dicha dirección es 1/683 vatios por estereorradión.\n");
		fprintf(archivo,"De aquí resulta que la eficacia luminosa espectral de la radiación monocromática de frecuencia igual a 540°1012 hercios es igual a 683 lúmenes por vatio, exactamente K=683 lm/W=683 cd sr/W.\n\n");
		
		fclose(archivo);
	}
	if(tema == 2) {
		FILE *archivo;
		archivo = fopen("Unidades derivadas sin dimensión.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n\n");
		}
		p("Unidades derivadas sin dimensi%cn:\n",162);
		p("=================================\n\n");
		
		p("=====================================================================\n");
		p("=                                  =                      =         =\n");
		p("= Magnitud                         = Nombre               = S%cmbolo =\n",161);
		p("=                                  =                      =         =\n");
		p("=====================================================================\n");
		p("= %cngulo plano.                    = Radi%cn               = rad.    =\n",181,160);
		p("=====================================================================\n");
		p("= %cngulo s%clido.                   = Estereorradi%cn       = sr.     =\n",181,162,160);
		p("=====================================================================\n\n");
		
		fprintf(archivo,"Unidades derivadas sin dimensión:\n");
		fprintf(archivo,"=================================\n\n");		
		fprintf(archivo,"=============================================\n");
		fprintf(archivo,"=                =                =         =\n");
		fprintf(archivo,"= Magnitud       = Nombre         = Símbolo =\n");
		fprintf(archivo,"=                =                =         =\n");
		fprintf(archivo,"=                =                =         =\n");
		fprintf(archivo,"= Ángulo plano.  = Radián         = rad.    =\n");
		fprintf(archivo,"=                =                =         =\n");
		fprintf(archivo,"= Ángulo sólido. = Estereorradián = sr.     =\n");
		fprintf(archivo,"=============================================\n\n");
		
		fclose(archivo);
	}
	if(tema == 3) {
		FILE *archivo;
		archivo = fopen("Unidades derivadas.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n\n");
		}
		p("Unidades derivadas:\n");
		p("===================\n\n");
		
		p("Las unidades derivadas se definen de forma que sean coherentes con las unidades b%csicas y suplementarias, es decir, se definen por expresiones algebraicas bajo la forma de productos de potencias de las unidades b%csicas y/o suplementarias con un factor num%crico igual 1.\n\n",160,160,130);
		
		p("Varias de estas unidades derivadas se expresan simplemente a partir de las unidades b%csicas y suplementarias. Otras han recibido un nombre especial y un s%cmbolo particular.\n\n",160,161);
		
		fprintf(archivo,"Unidades derivadas:\n");
		fprintf(archivo,"===================\n\n");		
		fprintf(archivo,"Las unidades derivadas se definen de forma que sean coherentes con las unidades básicas y suplementarias, es decir, se definen por expresiones algebraicas bajo la forma de productos de potencias de las unidades básicas y/o suplementarias con un factor numérico igual 1.\n\n");		
		fprintf(archivo,"Varias de estas unidades derivadas se expresan simplemente a partir de las unidades básicas y suplementarias. Otras han recibido un nombre especial y un símbolo particular.\n\n");
		
		system("pause");
		p("\n");
		
		p("=====================================================================================================\n");
		p("=                                                        =                                =         =\n");
		p("= Magnitud                                               = Nombre                         = S%cmbolo =\n",161);
		p("=                                                        =                                =         =\n");
		p("=====================================================================================================\n");
		p("= %crea, superficie.                                      = Metro cuadrado.                = m%c.     =\n",181,253);
		p("=====================================================================================================\n");
		p("= Volumen.                                               = Metro c%cbico.                  = m%c.     =\n",163,252);
		p("=====================================================================================================\n");
		p("= Velocidad.                                             = Metro por segundo.             = m/s.    =\n");
		p("=====================================================================================================\n");
		p("= Aceleraci%cn.                                           = Metro por segundo cuadrado.    = m/s%c.   =\n",162,253);
		p("=====================================================================================================\n");
		p("= N%cmero de ondas.                                       = Metro a la potencia menos uno. = m-%c.    =\n",163,251);
		p("=====================================================================================================\n");
		p("= Densidad, masa en volumen.                             = Kilogramo por metro c%cbico.    = kg/m%c.  =\n",163,252);
		p("=====================================================================================================\n");
		p("= Velocidad angular.                                     = radi%cn por segundo.            = rad/s.  =\n",160);
		p("=====================================================================================================\n");
		p("= Aceleraci%cn angular.                                   = radi%cn por segundo cuadrado.   = rad/s%c. =\n",162,160,253);
		p("=====================================================================================================\n\n");
		
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"=                            =                                =         =\n");
		fprintf(archivo,"= Magnitud                   = Nombre                         = Símbolo =\n");
		fprintf(archivo,"=                            =                                =         =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Área, superficie.          = Metro cuadrado.                = m².     =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Volumen.                   = Metro cúbico.                  = m³.     =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Velocidad.                 = Metro por segundo.             = m/s.    =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Aceleración.               = Metro por segundo cuadrado.    = m/s².   =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Número de ondas.           = Metro a la potencia menos uno. = m-¹.    =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Densidad, masa en volumen. = Kilogramo por metro cúbico.    = kg/m³.  =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Velocidad angular.         = radián por segundo.            = rad/s.  =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Aceleración angular.       = radión por segundo cuadrado.   = rad/s². =\n");
		fprintf(archivo,"=========================================================================\n\n");
		
		system("pause");
		p("\n");
		
		p("Unidad de velocidad:\n");
		p("--------------------\n");
		p("Un metro por segundo (m/s o m*s-%c) es la velocidad de un cuerpo que, con movimiento uniforme, recorre una longitud de un metro en 1 segundo.\n\n",251);
		
		p("Unidad de aceleraci%cn:\n",162);
		p("----------------------\n");
		p("Un metro por segundo cuadrado (m/s%c o m*s-%c) es la aceleraci%cn de un cuerpo, animado de movimiento uniformemente variado, cuya velocidad var%ca cada segundo, 1 m/s.\n\n",253,253,162,161);
		
		p("Unidad de n%cmero de ondas:\n",163);
		p("--------------------------\n");
		p("Un metro a la potencia menos uno (m-%c) es el n%cmero de ondas de una radiaci%cn monocrom%ctica cuya longitud de onda es igual a 1 metro.\n\n",251,163,162,160);
		
		p("Unidad de velocidad angular:\n");
		p("----------------------------\n");
		p("Un radi%cn por segundo (rad/s o rad*s-%c) es la velocidad de un cuerpo que, con una rotaci%cn uniforme alrededor de un eje fijo, gira en 1 segundo, 1 radi%cn.\n\n",160,251,162,160);
		
		p("Unidad de aceleraci%cn angular:\n",162);
		p("------------------------------\n");
		p("Un radi%cn por segundo cuadrado (rad/s%c o rad*s-%c) es la aceleraci%cn angular de un cuerpo animado de una rotaci%cn uniformemente variada alrededor de un eje fijo, cuya velocidad angular, var%ca 1 radi%cn por segundo, en 1 segundo.\n\n",160,253,253,162,162,161,160);
		
		fprintf(archivo,"Unidad de velocidad:\n");
		fprintf(archivo,"--------------------\n");
		fprintf(archivo,"Un metro por segundo (m/s o m*s-¹) es la velocidad de un cuerpo que, con movimiento uniforme, recorre una longitud de un metro en 1 segundo.\n\n");		
		fprintf(archivo,"Unidad de aceleración:\n");
		fprintf(archivo,"----------------------\n");
		fprintf(archivo,"Un metro por segundo cuadrado (m/s² o m*s-²) es la aceleración de un cuerpo, animado de movimiento uniformemente variado, cuya velocidad varía cada segundo, 1 m/s.\n\n");		
		fprintf(archivo,"Unidad de número de ondas:\n");
		fprintf(archivo,"--------------------------\n");
		fprintf(archivo,"Un metro a la potencia menos uno (m-¹) es el número de ondas de una radiación monocromática cuya longitud de onda es igual a 1 metro.\n\n");		
		fprintf(archivo,"Unidad de velocidad angular:\n");
		fprintf(archivo,"----------------------------\n");
		fprintf(archivo,"Un radián por segundo (rad/s o rad*s-¹) es la velocidad de un cuerpo que, con una rotación uniforme alrededor de un eje fijo, gira en 1 segundo, 1 radián.\n\n");
		fprintf(archivo,"Unidad de aceleración angular:\n");
		fprintf(archivo,"------------------------------\n");
		fprintf(archivo,"Un radián por segundo cuadrado (rad/s² o rad*s-²) es la aceleración angular de un cuerpo animado de una rotación uniformemente variada alrededor de un eje fijo, cuya velocidad angular, varía 1 radián por segundo, en 1 segundo.\n\n");
		
		fclose(archivo);
	}
	if(tema == 4) {
		FILE *archivo;
		archivo = fopen("Unidades derivadas con nombres y símbolos especiales.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n\n");
		}
		p("Unidades derivadas con nombres y s%cmbolos especiales:\n",161);
		p("=====================================================\n\n");
		
		p("==========================================================================\n");
		p("=                                            =                 =         =\n");
		p("= Magnitud                                   = Nombre          = S%cmbolo =\n",161);
		p("=                                            =                 =         =\n");
		p("==========================================================================\n");
		p("= Frecuencia.                                = Hercio.         = Hz.     =\n");
		p("==========================================================================\n");
		p("= Fuerza.                                    = Newton.         = N.      =\n");
		p("==========================================================================\n");
		p("= Presi%cn, tensi%cn.                          = Pascal.         = Pa.     =\n",162,162);
		p("==========================================================================\n");
		p("= Energ%ca, trabajo, cantidad de calor.       = Julio.          = J.      =\n",161);
		p("==========================================================================\n");
		p("= Potencia, flujo energ%ctico.                = Vatio.          = W.      =\n",130);
		p("==========================================================================\n");
		p("= Carga el%cctrica, cantidad de electricidad. = Culombio.       = C.      =\n",130);
		p("==========================================================================\n");
		p("= Diferencia de potencial el%cctrico.         = Voltio.         = V.      =\n",130);
		p("==========================================================================\n");
		p("= Resistencia el%cctrica.                     = Ohmio.          =         =\n",130);
		p("==========================================================================\n");
		p("= Capacidad el%cctrica.                       = Faradio.        = F.      =\n",130);
		p("==========================================================================\n");
		p("= Flujo magn%ctico.                           = Weber.          = Wb.     =\n",130);
		p("==========================================================================\n");
		p("= Inducci%cn magn%ctica.                       = Tesla.          = T.      =\n",162,130);
		p("==========================================================================\n");
		p("= Inductancia.                               = Henrio.         = H.      =\n");
		p("==========================================================================\n\n");
		
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"=                                            =                 =         =\n");
		fprintf(archivo,"= Magnitud                                   = Nombre          = Símbolo =\n");
		fprintf(archivo,"=                                            =                 =         =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Frecuencia.                                = Hercio.         = Hz.     =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Fuerza.                                    = Newton.         = N.      =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Presión, tensión.                          = Pascal.         = Pa.     =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Energía, trabajo, cantidad de calor.       = Julio.          = J.      =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Potencia, flujo energético.                = Vatio.          = W.      =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Carga eléctrica, cantidad de electricidad. = Culombio.       = C.      =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Diferencia de potencial eléctrico.         = Voltio.         = V.      =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Resistencia eléctrica.                     = Ohmio.          =         =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Capacidad eléctrica.                       = Faradio.        = F.      =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Flujo magnético.                           = Weber.          = Wb.     =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Inducción magnética.                       = Tesla.          = T.      =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Inductancia.                               = Henrio.         = H.      =\n");
		fprintf(archivo,"==========================================================================\n\n");
		
		system("pause");
		p("\n");
		
		p("Unidad de frecuencia:\n");
		p("---------------------\n");
		p("Un Hercio (Hz) es la frecuencia de un fen%cmeno peri%cdico cuyo periodo es 1 segundo.\n\n",162,162);
		
		p("Unidad de fuerza:\n");
		p("-----------------\n");
		p("Un Newton (N) es la fuerza que, aplicada a un cuerpo que tiene una masa de 1 kilogramo, le comunica una aceleraci%cn de 1 metro por segundo cuadrado.\n\n",162);
		
		p("Unidad de presi%cn:\n",162);
		p("------------------\n");
		p("Un Pascal (Pa) es la presi%cn uniforme que, actuando sobre una superficie plana de 1 metro cuadrado, ejerce perpendicularmente a esta superficie una fuerza total de 1 newton.\n\n",162);
		
		p("Unidad de energ%ca, trabajo, cantidad de calor:\n",161);
		p("----------------------------------------------\n");
		p("Un Julio (J) es el trabajo producido por una fuerza de 1 newton, cuyo punto de aplicaci%cn se desplaza 1 metro en la direcci%cn de la fuerza.\n\n",162,162);
		
		p("Unidad de potencia, flujo radiante:\n");
		p("-----------------------------------\n");
		p("Un Vatio (W) es la potencia que da lugar a una producci%cn de energ%ca igual a 1 Julio por segundo.\n\n",162,161);
		
		fprintf(archivo,"Unidad de frecuencia:\n");
		fprintf(archivo,"---------------------\n");
		fprintf(archivo,"Un Hercio (Hz) es la frecuencia de un fenómeno periódico cuyo periodo es 1 segundo.\n\n");
		fprintf(archivo,"Unidad de fuerza:\n");
		fprintf(archivo,"-----------------\n");
		fprintf(archivo,"Un Newton (N) es la fuerza que, aplicada a un cuerpo que tiene una masa de 1 kilogramo, le comunica una aceleración de 1 metro por segundo cuadrado.\n\n");
		fprintf(archivo,"Unidad de presión:\n");
		fprintf(archivo,"------------------\n");
		fprintf(archivo,"Un Pascal (Pa) es la presión uniforme que, actuando sobre una superficie plana de 1 metro cuadrado, ejerce perpendicularmente a esta superficie una fuerza total de 1 newton.\n\n");
		fprintf(archivo,"Unidad de energía, trabajo, cantidad de calor:\n");
		fprintf(archivo,"----------------------------------------------\n");
		fprintf(archivo,"Un Julio (J) es el trabajo producido por una fuerza de 1 newton, cuyo punto de aplicación se desplaza 1 metro en la dirección de la fuerza.\n\n");
		fprintf(archivo,"Unidad de potencia, flujo radiante:\n");
		fprintf(archivo,"-----------------------------------\n");
		fprintf(archivo,"Un Vatio (W) es la potencia que da lugar a una producción de energía igual a 1 Julio por segundo.\n\n");
		
		system("pause");
		p("\n");
		
		p("Unidad de cantidad de electricidad, carga el%cctrica:\n",130);
		p("----------------------------------------------------\n");
		p("Un Culombio (C) es la cantidad de electricidad transportada en 1 segundo por una corriente de intensidad 1 amperio.\n\n");
		
		p("Unidad de potencial el%cctrico, fuerza electromotriz:\n",130);
		p("----------------------------------------------------\n");
		p("Un Voltio (V) es la diferencia de potencial el%cctrico que existe entre dos puntos de un hilo conductor que transporta una corriente de intensidad constante de 1 amperio cuando la potencia disipada entre estos puntos es igual a 1 vatio.\n\n",130);
		
		p("Unidad de resistencia el%cctrica:\n",130);
		p("--------------------------------\n");
		p("Un Ohmio es la resistencia el%cctrica que existe entre dos puntos de un conductor cuando una diferencia de potencial constante de 1 voltio aplicada entre estos dos puntos produce, en dicho conductor, una corriente de intensidad 1 amperio, cuando no haya fuerza electromotriz en el conductor.\n\n",130);
		
		p("Unidad de capacidad el%cctrica:\n",130);
		p("------------------------------\n");
		p("Un Faradio (F) es la capacidad de un condensador el%cctrico que entre sus armaduras aparece una diferencia de potencial el%cctrico de 1 voltio, cuando est%c cargado con una cantidad de electricidad igual a 1 culombio.\n\n",130,130,160);
		
		p("Unidad de flujo magn%ctico:\n",130);
		p("--------------------------\n");
		p("Un Weber (Wb) es el flujo magn%ctico que, al atravesar un circuito de una sola espira produce en la misma una fuerza electromotriz de 1 voltio si se anula dicho flujo en un segundo por decrecimiento uniforme.\n\n",130);
		
		fprintf(archivo,"Unidad de cantidad de electricidad, carga eléctrica:\n");
		fprintf(archivo,"----------------------------------------------------\n");
		fprintf(archivo,"Un Culombio (C) es la cantidad de electricidad transportada en 1 segundo por una corriente de intensidad 1 amperio.\n\n");
		fprintf(archivo,"Unidad de potencial eléctrico, fuerza electromotriz:\n");
		fprintf(archivo,"----------------------------------------------------\n");
		fprintf(archivo,"Un Voltio (V) es la diferencia de potencial eléctrico que existe entre dos puntos de un hilo conductor que transporta una corriente de intensidad constante de 1 amperio cuando la potencia disipada entre estos puntos es igual a 1 vatio.\n\n");
		fprintf(archivo,"Unidad de resistencia eléctrica:\n");
		fprintf(archivo,"--------------------------------\n");
		fprintf(archivo,"Un Ohmio es la resistencia eléctrica que existe entre dos puntos de un conductor cuando una diferencia de potencial constante de 1 voltio aplicada entre estos dos puntos produce, en dicho conductor, una corriente de intensidad 1 amperio, cuando no haya fuerza electromotriz en el conductor.\n\n");
		fprintf(archivo,"Unidad de capacidad eléctrica:\n");
		fprintf(archivo,"------------------------------\n");
		fprintf(archivo,"Un Faradio (F) es la capacidad de un condensador eléctrico que entre sus armaduras aparece una diferencia de potencial eléctrico de 1 voltio, cuando está cargado con una cantidad de electricidad igual a 1 culombio.\n\n");
		fprintf(archivo,"Unidad de flujo magnético:\n");
		fprintf(archivo,"--------------------------\n");
		fprintf(archivo,"Un Weber (Wb) es el flujo magnético que, al atravesar un circuito de una sola espira produce en la misma una fuerza electromotriz de 1 voltio si se anula dicho flujo en un segundo por decrecimiento uniforme.\n\n");
		
		system("pause");
		p("\n");
		
		p("Unidad de inducci%cn magn%ctica:\n",162,130);
		p("------------------------------\n");
		p("Una Tesla (T) es la inducci%cn magn%ctica uniforme que, repartida normalmente sobre una superficie de 1 metro cuadrado, produce a trav%cs de esta superficie un flujo magn%ctico total de 1 weber.\n\n",162,130,130,130);
		
		p("Unidad de inductancia:\n");
		p("----------------------\n");
		p("Un Henrio (H) es la inductancia el%cctrica de un circuito cerrado en el que se produce una fuerza electromotriz de 1 voltio, cuando la corriente el%cctrica que recorre el circuito var%ca uniformemente a raz%cn de un amperio por segundo.\n\n",130,130,161,162);
		
		fprintf(archivo,"Unidad de inducción magnética:\n");
		fprintf(archivo,"------------------------------\n");
		fprintf(archivo,"Una Tesla (T) es la inducción magnética uniforme que, repartida normalmente sobre una superficie de 1 metro cuadrado, produce a través de esta superficie un flujo magnético total de 1 weber.\n\n");
		fprintf(archivo,"Unidad de inductancia:\n");
		fprintf(archivo,"----------------------\n");
		fprintf(archivo,"Un Henrio (H) es la inductancia eléctrica de un circuito cerrado en el que se produce una fuerza electromotriz de 1 voltio, cuando la corriente eléctrica que recorre el circuito varía uniformemente a razón de un amperio por segundo.\n\n");
		
		fclose(archivo);
	}
	if(tema == 5) {
		FILE *archivo;
		archivo = fopen("Unidades derivadas expresadas a partir de las que tienen nombres especiales.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n\n");
		}
		p("Unidades derivadas expresadas a partir de las que tienen nombres especiales:\n");
		p("============================================================================\n\n");
		
		p("=================================================================================\n");
		p("=                                            =                       =          =\n");
		p("= Magnitud                                   = Nombre                = S%cmbolo  =\n",161);
		p("=                                            =                       =          =\n");
		p("=================================================================================\n");
		p("= Viscosidad din%cmica.                       = Pascal segundo.       = Pa*s.    =\n",160);
		p("=================================================================================\n");
		p("= Entrop%ca.                                  = Julio por Kelvin.     = J/K.     =\n",161);
		p("=================================================================================\n");
		p("= Capacidad t%crmica m%csica.                  = Julio por kg. Kelvin. = Pa.      =\n",130,160);
		p("=================================================================================\n");
		p("= Conductividad t%crmica.                     = Vatio por m. Kelvin.  = W/(m*K). =\n",130);
		p("=================================================================================\n");
		p("= Intensidad del campo el%cctrico.            = Vatio por m.          = V/m.     =\n",130);
		p("=================================================================================\n\n");
		
		fprintf(archivo,"======================================================================\n");
		fprintf(archivo,"=                                 =                       =          =\n");
		fprintf(archivo,"= Magnitud                        = Nombre                = Símbolo  =\n");
		fprintf(archivo,"=                                 =                       =          =\n");
		fprintf(archivo,"======================================================================\n");
		fprintf(archivo,"= Viscosidad dinámica.            = Pascal segundo.       = Pa*s.    =\n");
		fprintf(archivo,"======================================================================\n");
		fprintf(archivo,"= Entropía.                       = Julio por Kelvin.     = J/K.     =\n");
		fprintf(archivo,"======================================================================\n");
		fprintf(archivo,"= Capacidad térmica másica.       = Julio por kg. Kelvin. = Pa.      =\n");
		fprintf(archivo,"======================================================================\n");
		fprintf(archivo,"= Conductividad térmica.          = Vatio por m. Kelvin.  = W/(m*K). =\n");
		fprintf(archivo,"======================================================================\n");
		fprintf(archivo,"= Intensidad del campo eléctrico. = Vatio por m.          = V/m.     =\n");
		fprintf(archivo,"======================================================================\n\n");
		
		system("pause");
		p("\n");
		
		p("Unidad de viscosidad din%cmica:\n",160);
		p("------------------------------\n");
		p("Un Pascal segundo (Pa*s) es la viscosidad din%cmica de un fluido homog%cneo, en el cual, el movimiento rectil%cneo y uniforme de una superficie plana de 1 metro cuadrado, da lugar a una fuerza retardatriz de 1 newton, cuando hay una diferencia de velocidad de 1 metro por segundo entre dos planos paralelos separados por 1 metro de distancia.\n\n",160,130,161);
		
		p("Unidad de entrop%ca:\n",161);
		p("-------------------\n");
		p("Un Julio por Kelvin (J/K) es el aumento de entrop%ca de un sistema que recibe una cantidad de calor de 1 Julio, a la temperatura termodin%cmica constante de 1 Kelvin, siempre que en el sistema no tenga lugar ninguna transformaci%cn irreversible.\n\n",161,160,162);
		
		p("Unidad de capacidad t%crmica m%csica:\n",130,160);
		p("-----------------------------------\n");
		p("Un Julio por kg Kelvin (J/(kg*K) es la capacidad t%crmica m%csica de un cuerpo homog%cneo de una masa de 1 kilogramo, en el que el aporte de una cantidad de calor de un Julio, produce una elevaci%cn de temperatura termodin%cmica de 1 Kelvin.\n\n",130,160,130,162,160);
		
		p("Unidad de conductividad t%crmica:\n",130);
		p("--------------------------------\n");
		p("Un Vatio por metro Kelvin W/(m*K) es la conductividad t%crmica de un cuerpo homog%cneo is%ctropo, en la que una diferencia de temperatura de 1 Kelvin entre dos planos paralelos, de %crea 1 metro cuadrado y distantes 1 metro, produce entre estos planos un flujo t%crmico de 1 Vatio.\n\n",130,130,162,160,130);
		
		p("Unidad de intensidad del campo el%cctrico:\n",130);
		p("-----------------------------------------\n");
		p("Un Vatio por metro (V/m) es la intensidad de un campo el%cctrico, que ejerce una fuerza de 1 Newton sobre un cuerpo cargado con una cantidad de electricidad de 1 Culombio.\n\n",130);
		
		fprintf(archivo,"Unidad de viscosidad dinámica:\n");
		fprintf(archivo,"------------------------------\n");
		fprintf(archivo,"Un Pascal segundo (Pa*s) es la viscosidad dinámica de un fluido homogéneo, en el cual, el movimiento rectilíneo y uniforme de una superficie plana de 1 metro cuadrado, da lugar a una fuerza retardatriz de 1 newton, cuando hay una diferencia de velocidad de 1 metro por segundo entre dos planos paralelos separados por 1 metro de distancia.\n\n");
		fprintf(archivo,"Unidad de entropía:\n");
		fprintf(archivo,"-------------------\n");
		fprintf(archivo,"Un Julio por Kelvin (J/K) es el aumento de entropía de un sistema que recibe una cantidad de calor de 1 Julio, a la temperatura termodinámica constante de 1 Kelvin, siempre que en el sistema no tenga lugar ninguna transformación irreversible.\n\n");
		fprintf(archivo,"Unidad de capacidad térmica másica:\n");
		fprintf(archivo,"-----------------------------------\n");
		fprintf(archivo,"Un Julio por kg Kelvin (J/(kg*K) es la capacidad térmica másica de un cuerpo homogéneo de una masa de 1 kilogramo, en el que el aporte de una cantidad de calor de un Julio, produce una elevación de temperatura termodinámica de 1 Kelvin.\n\n");
		fprintf(archivo,"Unidad de conductividad térmica:\n");
		fprintf(archivo,"--------------------------------\n");
		fprintf(archivo,"Un Vatio por metro Kelvin W/(m*K) es la conductividad térmica de un cuerpo homogéneo isótropo, en la que una diferencia de temperatura de 1 Kelvin entre dos planos paralelos, de área 1 metro cuadrado y distantes 1 metro, produce entre estos planos un flujo térmico de 1 Vatio.\n\n");
		fprintf(archivo,"Unidad de intensidad del campo eléctrico:\n");
		fprintf(archivo,"-----------------------------------------\n");
		fprintf(archivo,"Un Vatio por metro (V/m) es la intensidad de un campo eléctrico, que ejerce una fuerza de 1 Newton sobre un cuerpo cargado con una cantidad de electricidad de 1 Culombio.\n\n");
		fclose(archivo);
	}
	if(tema == 6) {
		FILE *archivo;
		archivo = fopen("Nombres y símbolos especiales de múltiplos y submúltiplos decimales de unidades autorizados.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n\n");
		}
		p("Nombres y s%cmbolos especiales de m%cltiplos y subm%cltiplos decimales de unidades autorizados:\n",161,163,163);
		p("============================================================================================\n\n");
		
		p("==========================================================\n");
		p("=                             =              =           =\n");
		p("= Magnitud                    = Nombre       = S%cmbolo   =\n",161);
		p("=                             =              =           =\n");
		p("==========================================================\n");
		p("= Volumen.                    = litro.       = l o L.    =\n");
		p("==========================================================\n");
		p("= Masa.                       = tonelada.    = t.        =\n");
		p("==========================================================\n");
		p("= Presi%cn y tensi%cn.          = bar.         = Pa.       =\n",162,162);
		p("==========================================================\n\n");
		
		fprintf(archivo,"Nombres y símbolos especiales de múltiplos y submúltiplos decimales de unidades autorizados:\n");
		fprintf(archivo,"============================================================================================\n\n");		
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"=                             =              =           =\n");
		fprintf(archivo,"= Magnitud                    = Nombre       = Símbolo   =\n");
		fprintf(archivo,"=                             =              =           =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Volumen.                    = litro.       = l o L.    =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Masa.                       = tonelada.    = t.        =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Presión y tensión.          = bar.         = Pa.       =\n");
		fprintf(archivo,"==========================================================\n\n");
		
		fclose(archivo);
	}
	if(tema == 7) {
		FILE *archivo;
		archivo = fopen("Unidades definidas a partir de las unidades, pero que no son múltiplos o submúltiplos decimales de dichas unidades.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n\n");
		}
		p("Unidades definidas a partir de las unidades, pero que no son m%cltiplos o subm%cltiplos decimales de dichas unidades:\n",163,163);
		p("===================================================================================================================\n\n");
		
		p("================================================================\n");
		p("=                             =                    =           =\n");
		p("= Magnitud                    = Nombre             = S%cmbolo   =\n",161);
		p("=                             =                    =           =\n");
		p("================================================================\n");
		p("= %cngulo plano.               = vuelta.            = l o L.    =\n",181);
		p("================================================================\n");
		p("=                             = grado.             = %c.        =\n",248);
		p("================================================================\n");
		p("=                             = minuto de %cngulo.  = %c.        =\n",160,39);
		p("================================================================\n");
		p("=                             = segundo de %cngulo. = %c.        =\n",160,34);
		p("================================================================\n");
		p("= Tiempo.                     = minuto.            = min.      =\n");
		p("================================================================\n");
		p("=                             = hora.              = h.        =\n");
		p("================================================================\n");
		p("=                             = d%ca.               = d.        =\n",161);
		p("================================================================\n\n");
		
		fprintf(archivo,"Unidades definidas a partir de las unidades, pero que no son múltiplos o submúltiplos decimales de dichas unidades:\n");
		fprintf(archivo,"===================================================================================================================\n\n");		
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"=                             =                    =           =\n");
		fprintf(archivo,"= Magnitud                    = Nombre             = Símbolo   =\n");
		fprintf(archivo,"=                             =                    =           =\n");
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"= Ángulo plano.               = vuelta.            = l o L.    =\n");
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"=                             = grado.             = º.        =\n");
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"=                             = minuto de ángulo.  = '.        =\n");
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"=                             = segundo de ángulo. = %c.        =\n",34);
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"= Tiempo.                     = minuto.            = min.      =\n");
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"=                             = hora.              = h.        =\n");
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"=                             = día.               = d.        =\n");
		fprintf(archivo,"================================================================\n\n");
		
		fclose(archivo);
	}
	if(tema == 8) {
		FILE *archivo;
		archivo = fopen("Unidades en uso con el Sistema Internacional cuyo valor en unidades se ha obtenido experimentalmente.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n\n");
		}
		
		p("Unidades en uso con el Sistema Internacional cuyo valor en unidades se ha obtenido experimentalmente:\n");
		p("=====================================================================================================\n\n");
		
		p("=====================================================================\n");
		p("=                             =                         =           =\n");
		p("= Magnitud                    = Nombre                  = S%cmbolo   =\n",161);
		p("=                             =                         =           =\n");
		p("=====================================================================\n");
		p("= Masa.                       = Unidad de masa at%cmica. = u.        =\n",162);
		p("=====================================================================\n");
		p("= Energ%ca                     = Electronvoltio.         = eV.       =\n",161);
		p("=====================================================================\n\n");
		
		fprintf(archivo,"Unidades en uso con el Sistema Internacional cuyo valor en unidades se ha obtenido experimentalmente:\n");
		fprintf(archivo,"=====================================================================================================\n\n");		
		fprintf(archivo,"=====================================================================\n");
		fprintf(archivo,"=                             =                         =           =\n");
		fprintf(archivo,"= Magnitud                    = Nombre                  = Símbolo   =\n");
		fprintf(archivo,"=                             =                         =           =\n");
		fprintf(archivo,"=====================================================================\n");
		fprintf(archivo,"= Masa.                       = Unidad de masa atómica. = u.        =\n");
		fprintf(archivo,"=====================================================================\n");
		fprintf(archivo,"= Energía                     = Electronvoltio.         = eV.       =\n");
		fprintf(archivo,"=====================================================================\n\n");
		
		fclose(archivo);
	}
}
