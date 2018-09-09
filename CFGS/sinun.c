void sinun(int tema) {
	if(tema == 1) {
		FILE *archivo;
		archivo = fopen("Unidades b�sicas.doc","w");
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
		
		fprintf(archivo,"Unidades b�sicas:\n");
		fprintf(archivo,"=================\n\n");		
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"=                                  =           =         =\n");
		fprintf(archivo,"= Magnitud                         = Nombre    = S�mbolo =\n");
		fprintf(archivo,"=                                  =           =         =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Longitud                         = Metro     = m.      =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Masa                             = Kilogramo = kg.     =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Tiempo                           = Segundo   = s.      =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Intensidad de corriente el�trica = Amperio   = A.      =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Temperatura termodin�mica        = Kelvin    = K.      =\n");
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
		fprintf(archivo,"El metro es la longitud de trayecto recorrido en el vac�o por la luz durante un tiempo de 1/299 792 458 de segundo.\n\n");		
		fprintf(archivo,"Unidad de masa.\n");
		fprintf(archivo,"---------------\n");
		fprintf(archivo,"El kilogramo (kg) es igual a la masa del prototipo internacional del kilogramo, adoptado por la tercera Conferencia General de Pesas y Medidas en 1901.\n\n");		
		fprintf(archivo,"Unidad de tiempo.\n");
		fprintf(archivo,"-----------------\n");
		fprintf(archivo,"El segundo (s) es la duraci�n de 9 192 631 770 periodos de la radiaci�n correspondiente a la transici�n entre los dos niveles hiperfinos del estado fundamental del �tomo de cesio 133. Esta definici�n se refiere al �tomo de cesio en reposo, a una tempartaura de 0 K.\n\n");		
		fprintf(archivo,"Unidad de intensidad de corriente el�ctrica.\n");
		fprintf(archivo,"--------------------------------------------\n");
		fprintf(archivo,"El amperio (A) es la intensidad de una corriente constante que, manteni�ndose en dos conductores paralelos, rectil�neos, de longitud infinita, de secci�n circular despreciable y situados a una distancia de un metro uno de otro en el vac�o, producir�a entre estos conductores una fuerza igual a 2�10-7 newton por metro de longitud.\n");
		fprintf(archivo,"De aqu� resulta que la permeabilidad del vac�o es �0=4�c10-7H/m (henrio por metro).\n\n");
		
		system("pause");
		p("\n");
		
		p("Unidad de temperatura termodin%cmica.\n",160);
		p("------------------------------------\n");
		p("El kelvin (K), unidad de temperatura termodin%cmica, es la fracci%cn 1/273,16 de la temperatura termodin%cmica del punto triple del agua.\n",160,162,160);
		p("Esta definici%cn se refiere a un agua de una composici%cn isot%cpica definida por las siguientes relaciones de cantidad de sustancia: 0,000 155 76 moles de 2H por mol de 1H, 0,000 379 9 moles de 17O por mol de 16O y 0,0002 005 2 moles de de 18O por mol de 16O.\n",162,162,162);
		p("De aqu%c resulta que la temperatura termodin%cmica del punto triple del agua es igual a 273,16 kelvin exactamente Ttpw=273,16 K.\n\n",161,160);
		
		fprintf(archivo,"Unidad de temperatura termodin�mica.\n");
		fprintf(archivo,"------------------------------------\n");
		fprintf(archivo,"El kelvin (K), unidad de temperatura termodin�mica, es la fracci�n 1/273,16 de la temperatura termodin�mica del punto triple del agua.\n");
		fprintf(archivo,"Esta definici�n se refiere a un agua de una composici�n isot�pica definida por las siguientes relaciones de cantidad de sustancia: 0,000 155 76 moles de 2H por mol de 1H, 0,000 379 9 moles de 17O por mol de 16O y 0,0002 005 2 moles de de 18O por mol de 16O.\n");
		fprintf(archivo,"De aqu� resulta que la temperatura termodin�mica del punto triple del agua es igual a 273,16 kelvin exactamente Ttpw=273,16 K.\n\n");
		
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
		fprintf(archivo,"El mol (mol) es la cantidad de sustancia de un sistema que contiene tantas entidades elementales como �tomos hay en 0,012 kilogramos de carbono 12. Esta definici�n se refiere a �tomos de carbono 12 no ligados, en reposo y en su estado fundamental.\n");
		fprintf(archivo,"Cuando se emplee el mol, deben especificarse las unidades elementales, que pueden ser �tomos, mol�culas, iones, electrones u otras part�culas o grupos especificados de tales part�culas.\n");
		fprintf(archivo,"De aqu� resulta que la masa molar del carbono 12 es igual a 12 g por mol, exactamente M(12C)=12 g/mol.\n\n");		
		fprintf(archivo,"Unidad de intensidad luminosa.\n");
		fprintf(archivo,"------------------------------\n");
		fprintf(archivo,"La candela (cd) es la unidad luminosa, en una direcci�n dada, de una fuente que emite una radiaci�n monocrom�tica de frecuencia 540�1012 hercios y cuya intensidad energ�tica en dicha direcci�n es 1/683 vatios por estereorradi�n.\n");
		fprintf(archivo,"De aqu� resulta que la eficacia luminosa espectral de la radiaci�n monocrom�tica de frecuencia igual a 540�1012 hercios es igual a 683 l�menes por vatio, exactamente K=683 lm/W=683 cd sr/W.\n\n");
		
		fclose(archivo);
	}
	if(tema == 2) {
		FILE *archivo;
		archivo = fopen("Unidades derivadas sin dimensi�n.doc","w");
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
		
		fprintf(archivo,"Unidades derivadas sin dimensi�n:\n");
		fprintf(archivo,"=================================\n\n");		
		fprintf(archivo,"=============================================\n");
		fprintf(archivo,"=                =                =         =\n");
		fprintf(archivo,"= Magnitud       = Nombre         = S�mbolo =\n");
		fprintf(archivo,"=                =                =         =\n");
		fprintf(archivo,"=                =                =         =\n");
		fprintf(archivo,"= �ngulo plano.  = Radi�n         = rad.    =\n");
		fprintf(archivo,"=                =                =         =\n");
		fprintf(archivo,"= �ngulo s�lido. = Estereorradi�n = sr.     =\n");
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
		fprintf(archivo,"Las unidades derivadas se definen de forma que sean coherentes con las unidades b�sicas y suplementarias, es decir, se definen por expresiones algebraicas bajo la forma de productos de potencias de las unidades b�sicas y/o suplementarias con un factor num�rico igual 1.\n\n");		
		fprintf(archivo,"Varias de estas unidades derivadas se expresan simplemente a partir de las unidades b�sicas y suplementarias. Otras han recibido un nombre especial y un s�mbolo particular.\n\n");
		
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
		fprintf(archivo,"= Magnitud                   = Nombre                         = S�mbolo =\n");
		fprintf(archivo,"=                            =                                =         =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= �rea, superficie.          = Metro cuadrado.                = m�.     =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Volumen.                   = Metro c�bico.                  = m�.     =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Velocidad.                 = Metro por segundo.             = m/s.    =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Aceleraci�n.               = Metro por segundo cuadrado.    = m/s�.   =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= N�mero de ondas.           = Metro a la potencia menos uno. = m-�.    =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Densidad, masa en volumen. = Kilogramo por metro c�bico.    = kg/m�.  =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Velocidad angular.         = radi�n por segundo.            = rad/s.  =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= Aceleraci�n angular.       = radi�n por segundo cuadrado.   = rad/s�. =\n");
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
		fprintf(archivo,"Un metro por segundo (m/s o m*s-�) es la velocidad de un cuerpo que, con movimiento uniforme, recorre una longitud de un metro en 1 segundo.\n\n");		
		fprintf(archivo,"Unidad de aceleraci�n:\n");
		fprintf(archivo,"----------------------\n");
		fprintf(archivo,"Un metro por segundo cuadrado (m/s� o m*s-�) es la aceleraci�n de un cuerpo, animado de movimiento uniformemente variado, cuya velocidad var�a cada segundo, 1 m/s.\n\n");		
		fprintf(archivo,"Unidad de n�mero de ondas:\n");
		fprintf(archivo,"--------------------------\n");
		fprintf(archivo,"Un metro a la potencia menos uno (m-�) es el n�mero de ondas de una radiaci�n monocrom�tica cuya longitud de onda es igual a 1 metro.\n\n");		
		fprintf(archivo,"Unidad de velocidad angular:\n");
		fprintf(archivo,"----------------------------\n");
		fprintf(archivo,"Un radi�n por segundo (rad/s o rad*s-�) es la velocidad de un cuerpo que, con una rotaci�n uniforme alrededor de un eje fijo, gira en 1 segundo, 1 radi�n.\n\n");
		fprintf(archivo,"Unidad de aceleraci�n angular:\n");
		fprintf(archivo,"------------------------------\n");
		fprintf(archivo,"Un radi�n por segundo cuadrado (rad/s� o rad*s-�) es la aceleraci�n angular de un cuerpo animado de una rotaci�n uniformemente variada alrededor de un eje fijo, cuya velocidad angular, var�a 1 radi�n por segundo, en 1 segundo.\n\n");
		
		fclose(archivo);
	}
	if(tema == 4) {
		FILE *archivo;
		archivo = fopen("Unidades derivadas con nombres y s�mbolos especiales.doc","w");
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
		fprintf(archivo,"= Magnitud                                   = Nombre          = S�mbolo =\n");
		fprintf(archivo,"=                                            =                 =         =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Frecuencia.                                = Hercio.         = Hz.     =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Fuerza.                                    = Newton.         = N.      =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Presi�n, tensi�n.                          = Pascal.         = Pa.     =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Energ�a, trabajo, cantidad de calor.       = Julio.          = J.      =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Potencia, flujo energ�tico.                = Vatio.          = W.      =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Carga el�ctrica, cantidad de electricidad. = Culombio.       = C.      =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Diferencia de potencial el�ctrico.         = Voltio.         = V.      =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Resistencia el�ctrica.                     = Ohmio.          =         =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Capacidad el�ctrica.                       = Faradio.        = F.      =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Flujo magn�tico.                           = Weber.          = Wb.     =\n");
		fprintf(archivo,"==========================================================================\n");
		fprintf(archivo,"= Inducci�n magn�tica.                       = Tesla.          = T.      =\n");
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
		fprintf(archivo,"Un Hercio (Hz) es la frecuencia de un fen�meno peri�dico cuyo periodo es 1 segundo.\n\n");
		fprintf(archivo,"Unidad de fuerza:\n");
		fprintf(archivo,"-----------------\n");
		fprintf(archivo,"Un Newton (N) es la fuerza que, aplicada a un cuerpo que tiene una masa de 1 kilogramo, le comunica una aceleraci�n de 1 metro por segundo cuadrado.\n\n");
		fprintf(archivo,"Unidad de presi�n:\n");
		fprintf(archivo,"------------------\n");
		fprintf(archivo,"Un Pascal (Pa) es la presi�n uniforme que, actuando sobre una superficie plana de 1 metro cuadrado, ejerce perpendicularmente a esta superficie una fuerza total de 1 newton.\n\n");
		fprintf(archivo,"Unidad de energ�a, trabajo, cantidad de calor:\n");
		fprintf(archivo,"----------------------------------------------\n");
		fprintf(archivo,"Un Julio (J) es el trabajo producido por una fuerza de 1 newton, cuyo punto de aplicaci�n se desplaza 1 metro en la direcci�n de la fuerza.\n\n");
		fprintf(archivo,"Unidad de potencia, flujo radiante:\n");
		fprintf(archivo,"-----------------------------------\n");
		fprintf(archivo,"Un Vatio (W) es la potencia que da lugar a una producci�n de energ�a igual a 1 Julio por segundo.\n\n");
		
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
		
		fprintf(archivo,"Unidad de cantidad de electricidad, carga el�ctrica:\n");
		fprintf(archivo,"----------------------------------------------------\n");
		fprintf(archivo,"Un Culombio (C) es la cantidad de electricidad transportada en 1 segundo por una corriente de intensidad 1 amperio.\n\n");
		fprintf(archivo,"Unidad de potencial el�ctrico, fuerza electromotriz:\n");
		fprintf(archivo,"----------------------------------------------------\n");
		fprintf(archivo,"Un Voltio (V) es la diferencia de potencial el�ctrico que existe entre dos puntos de un hilo conductor que transporta una corriente de intensidad constante de 1 amperio cuando la potencia disipada entre estos puntos es igual a 1 vatio.\n\n");
		fprintf(archivo,"Unidad de resistencia el�ctrica:\n");
		fprintf(archivo,"--------------------------------\n");
		fprintf(archivo,"Un Ohmio es la resistencia el�ctrica que existe entre dos puntos de un conductor cuando una diferencia de potencial constante de 1 voltio aplicada entre estos dos puntos produce, en dicho conductor, una corriente de intensidad 1 amperio, cuando no haya fuerza electromotriz en el conductor.\n\n");
		fprintf(archivo,"Unidad de capacidad el�ctrica:\n");
		fprintf(archivo,"------------------------------\n");
		fprintf(archivo,"Un Faradio (F) es la capacidad de un condensador el�ctrico que entre sus armaduras aparece una diferencia de potencial el�ctrico de 1 voltio, cuando est� cargado con una cantidad de electricidad igual a 1 culombio.\n\n");
		fprintf(archivo,"Unidad de flujo magn�tico:\n");
		fprintf(archivo,"--------------------------\n");
		fprintf(archivo,"Un Weber (Wb) es el flujo magn�tico que, al atravesar un circuito de una sola espira produce en la misma una fuerza electromotriz de 1 voltio si se anula dicho flujo en un segundo por decrecimiento uniforme.\n\n");
		
		system("pause");
		p("\n");
		
		p("Unidad de inducci%cn magn%ctica:\n",162,130);
		p("------------------------------\n");
		p("Una Tesla (T) es la inducci%cn magn%ctica uniforme que, repartida normalmente sobre una superficie de 1 metro cuadrado, produce a trav%cs de esta superficie un flujo magn%ctico total de 1 weber.\n\n",162,130,130,130);
		
		p("Unidad de inductancia:\n");
		p("----------------------\n");
		p("Un Henrio (H) es la inductancia el%cctrica de un circuito cerrado en el que se produce una fuerza electromotriz de 1 voltio, cuando la corriente el%cctrica que recorre el circuito var%ca uniformemente a raz%cn de un amperio por segundo.\n\n",130,130,161,162);
		
		fprintf(archivo,"Unidad de inducci�n magn�tica:\n");
		fprintf(archivo,"------------------------------\n");
		fprintf(archivo,"Una Tesla (T) es la inducci�n magn�tica uniforme que, repartida normalmente sobre una superficie de 1 metro cuadrado, produce a trav�s de esta superficie un flujo magn�tico total de 1 weber.\n\n");
		fprintf(archivo,"Unidad de inductancia:\n");
		fprintf(archivo,"----------------------\n");
		fprintf(archivo,"Un Henrio (H) es la inductancia el�ctrica de un circuito cerrado en el que se produce una fuerza electromotriz de 1 voltio, cuando la corriente el�ctrica que recorre el circuito var�a uniformemente a raz�n de un amperio por segundo.\n\n");
		
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
		fprintf(archivo,"= Magnitud                        = Nombre                = S�mbolo  =\n");
		fprintf(archivo,"=                                 =                       =          =\n");
		fprintf(archivo,"======================================================================\n");
		fprintf(archivo,"= Viscosidad din�mica.            = Pascal segundo.       = Pa*s.    =\n");
		fprintf(archivo,"======================================================================\n");
		fprintf(archivo,"= Entrop�a.                       = Julio por Kelvin.     = J/K.     =\n");
		fprintf(archivo,"======================================================================\n");
		fprintf(archivo,"= Capacidad t�rmica m�sica.       = Julio por kg. Kelvin. = Pa.      =\n");
		fprintf(archivo,"======================================================================\n");
		fprintf(archivo,"= Conductividad t�rmica.          = Vatio por m. Kelvin.  = W/(m*K). =\n");
		fprintf(archivo,"======================================================================\n");
		fprintf(archivo,"= Intensidad del campo el�ctrico. = Vatio por m.          = V/m.     =\n");
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
		
		fprintf(archivo,"Unidad de viscosidad din�mica:\n");
		fprintf(archivo,"------------------------------\n");
		fprintf(archivo,"Un Pascal segundo (Pa*s) es la viscosidad din�mica de un fluido homog�neo, en el cual, el movimiento rectil�neo y uniforme de una superficie plana de 1 metro cuadrado, da lugar a una fuerza retardatriz de 1 newton, cuando hay una diferencia de velocidad de 1 metro por segundo entre dos planos paralelos separados por 1 metro de distancia.\n\n");
		fprintf(archivo,"Unidad de entrop�a:\n");
		fprintf(archivo,"-------------------\n");
		fprintf(archivo,"Un Julio por Kelvin (J/K) es el aumento de entrop�a de un sistema que recibe una cantidad de calor de 1 Julio, a la temperatura termodin�mica constante de 1 Kelvin, siempre que en el sistema no tenga lugar ninguna transformaci�n irreversible.\n\n");
		fprintf(archivo,"Unidad de capacidad t�rmica m�sica:\n");
		fprintf(archivo,"-----------------------------------\n");
		fprintf(archivo,"Un Julio por kg Kelvin (J/(kg*K) es la capacidad t�rmica m�sica de un cuerpo homog�neo de una masa de 1 kilogramo, en el que el aporte de una cantidad de calor de un Julio, produce una elevaci�n de temperatura termodin�mica de 1 Kelvin.\n\n");
		fprintf(archivo,"Unidad de conductividad t�rmica:\n");
		fprintf(archivo,"--------------------------------\n");
		fprintf(archivo,"Un Vatio por metro Kelvin W/(m*K) es la conductividad t�rmica de un cuerpo homog�neo is�tropo, en la que una diferencia de temperatura de 1 Kelvin entre dos planos paralelos, de �rea 1 metro cuadrado y distantes 1 metro, produce entre estos planos un flujo t�rmico de 1 Vatio.\n\n");
		fprintf(archivo,"Unidad de intensidad del campo el�ctrico:\n");
		fprintf(archivo,"-----------------------------------------\n");
		fprintf(archivo,"Un Vatio por metro (V/m) es la intensidad de un campo el�ctrico, que ejerce una fuerza de 1 Newton sobre un cuerpo cargado con una cantidad de electricidad de 1 Culombio.\n\n");
		fclose(archivo);
	}
	if(tema == 6) {
		FILE *archivo;
		archivo = fopen("Nombres y s�mbolos especiales de m�ltiplos y subm�ltiplos decimales de unidades autorizados.doc","w");
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
		
		fprintf(archivo,"Nombres y s�mbolos especiales de m�ltiplos y subm�ltiplos decimales de unidades autorizados:\n");
		fprintf(archivo,"============================================================================================\n\n");		
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"=                             =              =           =\n");
		fprintf(archivo,"= Magnitud                    = Nombre       = S�mbolo   =\n");
		fprintf(archivo,"=                             =              =           =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Volumen.                    = litro.       = l o L.    =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Masa.                       = tonelada.    = t.        =\n");
		fprintf(archivo,"==========================================================\n");
		fprintf(archivo,"= Presi�n y tensi�n.          = bar.         = Pa.       =\n");
		fprintf(archivo,"==========================================================\n\n");
		
		fclose(archivo);
	}
	if(tema == 7) {
		FILE *archivo;
		archivo = fopen("Unidades definidas a partir de las unidades, pero que no son m�ltiplos o subm�ltiplos decimales de dichas unidades.doc","w");
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
		
		fprintf(archivo,"Unidades definidas a partir de las unidades, pero que no son m�ltiplos o subm�ltiplos decimales de dichas unidades:\n");
		fprintf(archivo,"===================================================================================================================\n\n");		
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"=                             =                    =           =\n");
		fprintf(archivo,"= Magnitud                    = Nombre             = S�mbolo   =\n");
		fprintf(archivo,"=                             =                    =           =\n");
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"= �ngulo plano.               = vuelta.            = l o L.    =\n");
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"=                             = grado.             = �.        =\n");
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"=                             = minuto de �ngulo.  = '.        =\n");
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"=                             = segundo de �ngulo. = %c.        =\n",34);
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"= Tiempo.                     = minuto.            = min.      =\n");
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"=                             = hora.              = h.        =\n");
		fprintf(archivo,"================================================================\n");
		fprintf(archivo,"=                             = d�a.               = d.        =\n");
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
		fprintf(archivo,"= Magnitud                    = Nombre                  = S�mbolo   =\n");
		fprintf(archivo,"=                             =                         =           =\n");
		fprintf(archivo,"=====================================================================\n");
		fprintf(archivo,"= Masa.                       = Unidad de masa at�mica. = u.        =\n");
		fprintf(archivo,"=====================================================================\n");
		fprintf(archivo,"= Energ�a                     = Electronvoltio.         = eV.       =\n");
		fprintf(archivo,"=====================================================================\n\n");
		
		fclose(archivo);
	}
}
