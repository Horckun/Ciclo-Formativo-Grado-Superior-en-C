void unco() {
	FILE *archivo;
	archivo = fopen("Conversiones de unidades con factores de conversión. Unidades compuestas.doc","w");
	if(archivo == NULL) {
		p("No se ha podido abrir el archivo.\n\n");
	}
	
	p("Conversiones de unidades con factores de conversi%cn. Unidades compuestas:\n",162);
	p("=========================================================================\n\n");
	
	p("La conversi%cn de unidades es la transformaci%cn de una cantidad expresada en una cierta unidad de medida, que puede ser del mismo sistema de unidades o no.\n",162,162);
	p("Frecuentemente basta multiplicar por una fracci%cn y el resultado es otra medida equivalente, en la que han cambiado las unidades. Cuando el cambio de unidades implica la transformaci%cn de varias unidades, se pueden utilizar varios factores de conversi%cn uno tras otro, de forma que el resultado final ser%c la medida equivalente en las unidades que buscamos.\n\n",162,162,162,160);
	p("Por ejemplo: si queremos pasar 8 metros a yardas, lo %cnico que tenemos que hacer es multiplicar 8 x (0.914) = 7.312 yardas.\n\n",163);
		
	fprintf(archivo,"Conversiones de unidades con factores de conversión. Unidades compuestas:\n");
	fprintf(archivo,"=========================================================================\n\n");
	
	fprintf(archivo,"La conversión de unidades es la transformación de una cantidad expresada en una cierta unidad de medida, que puede ser del mismo sistema de unidades o no.\n");
	fprintf(archivo,"Frecuentemente basta multiplicar por una fracción y el resultado es otra medida equivalente, en la que han cambiado las unidades. Cuando el cambio de unidades implica la transformación de varias unidades, se pueden utilizar varios factores de conversión uno tras otro, de forma que el resultado final será la medida equivalente en las unidades que buscamos.\n\n");
	fprintf(archivo,"Por ejemplo: si queremos pasar 8 metros a yardas, lo único que tenemos que hacer es multiplicar 8 x (0.914) = 7.312 yardas.\n\n");
	
	system("pause");
	p("\n");
	
	p("Algunas equivalencias:\n");
	p("----------------------\n\n");
	
	p("1 m.      = 100 cm.\n");
	p("1 m.      = 1000 mm.\n");
	p("1 cm.     = 10 mm.\n");
	p("1 km.     = 1000 m.\n");
	p("1 m.      = 3.28 pies.\n");
	p("1 m.      = 0.914 yardas.\n");
	p("1 pie     = 30.48 cm.\n");
	p("1 pie     = 12 pulgadas.\n");
	p("1 pulgada = 2.54 cm.\n");
	p("1 milla   = 1.609 km.\n");
	p("1 libra   = 454 gramos.\n");
	p("1 kg.     = 2.2 libras.\n");
	p("1 litro   = 1000 cm%c.\n",252);
	p("1 hora    = 60 minutos.\n");
	p("1 hora    = 3600 segundos.\n\n");
	
	fprintf(archivo,"1 m.      = 100 cm.\n");
	fprintf(archivo,"1 m.      = 1000 mm.\n");
	fprintf(archivo,"1 cm.     = 10 mm.\n");
	fprintf(archivo,"1 km.     = 1000 m.\n");
	fprintf(archivo,"1 m.      = 3.28 pies.\n");
	fprintf(archivo,"1 m.      = 0.914 yardas.\n");
	fprintf(archivo,"1 pie     = 30.48 cm.\n");
	fprintf(archivo,"1 pie     = 12 pulgadas.\n");
	fprintf(archivo,"1 pulgada = 2.54 cm.\n");
	fprintf(archivo,"1 milla   = 1.609 km.\n");
	fprintf(archivo,"1 libra   = 454 gramos.\n");
	fprintf(archivo,"1 kg.     = 2.2 libras.\n");
	fprintf(archivo,"1 litro   = 1000 cm%c.\n",252);
	fprintf(archivo,"1 hora    = 60 minutos.\n");
	fprintf(archivo,"1 hora    = 3600 segundos.\n\n");
	
	system("pause");
	p("\n");
	
	p("Factor de conversi%cn.\n",162);
	p("---------------------\n\n");
	
	p("Un factor de conversi%cn es una operaci%cn matem%ctica, para hacer cambios de unidades de la misma magnitud, o para calcular la equivalencia entre los m%cltiplos y subm%cltiplos de una determinada unidad de medida.\n\n",162,162,160,163,163);
	
	p("Ejemplos frecuentes de utilizaci%cn de los factores de conversi%cn:\n",162,162);
	p("-----------------------------------------------------------------\n\n");
	
	p("Cambios monetarios: euros, d%clares, libras, pesos, escudos, etc...\n",162);
	p("Medidas de distancias: kil%cmetros, metros, millas, leguas, yardas, etc...\n",162);
	p("Medidas de tiempo: horas, minutos, segundos, siglos, a%cos, d%cas, etc...\n",164,161);
	p("Cambios en velocidades: kil%cmetro/hora, nudos, a%cos-luz, metros/segundo, etc...\n\n",162,164);
	
	
	fprintf(archivo,"Factor de conversión.\n");
	fprintf(archivo,"---------------------\n\n");
	
	fprintf(archivo,"Un factor de conversión es una operación matemática, para hacer cambios de unidades de la misma magnitud, o para calcular la equivalencia entre los múltiplos y submúltiplos de una determinada unidad de medida.\n\n");
	
	fprintf(archivo,"Ejemplos frecuentes de utilización de los factores de conversión:\n");
	fprintf(archivo,"-----------------------------------------------------------------\n\n");
	
	fprintf(archivo,"Cambios monetarios: euros, dólares, libras, pesos, escudos, etc...\n");
	fprintf(archivo,"Medidas de distancias: kilómetros, metros, millas, leguas, yardas, etc...\n");
	fprintf(archivo,"Medidas de tiempo: horas, minutos, segundos, siglos, años, días, etc...\n");
	fprintf(archivo,"Cambios en velocidades: kilómetro/hora, nudos, años-luz, metros/segundo, etc...\n\n");
	
	system("pause");
	p("\n");
	
	p("Otros ejemplos:\n");
	p("---------------\n\n");
	
	p("Queremos pasar 2 horas a minutos.\n\n");
	p("===============================================\n");
	p("= 2 horas * (60 min. / 1 hora) = 120 minutos. =\n");
	p("===============================================\n\n");
	
	p("Para convertir esta cantidad, lo que hacemos es poner la unidad que queremos eliminar en el denominador y la unidad a la que queremos convertir en el numerador, para asi poder multiplicar el 2 con el numerador que es 60 y asi obtener el valor de 120 minutos.\n\n");
	
	p("Queremos pasar 30 cm. a m.\n\n");
	p("======================================\n");
	p("= 30 cm. * (1 m. / 100 cm.) = 0.3 m. =\n");
	p("======================================\n\n");
	
	p("Queremos pasar 120 km/h. a m/s.\n\n");
	p("===================================================================\n");
	p("= 120 km/h. * (1000 m. / 1 km.) * (1 hora / 3600 s.) = 33.33 m/s. =\n");
	p("===================================================================\n\n");
		
	fprintf(archivo,"Conversiones de unidades con factores de conversión. Unidades compuestas:\n");
	fprintf(archivo,"=========================================================================\n\n");
	
	fprintf(archivo,"La conversión de unidades es la transformación de una cantidad expresada en una cierta unidad de medida, que puede ser del mismo sistema de unidades o no.\n");
	fprintf(archivo,"Frecuentemente basta multiplicar por una fracción y el resultado es otra medida equivalente, en la que han cambiado las unidades. Cuando el cambio de unidades implica la transformación de varias unidades, se pueden utilizar varios factores de conversión uno tras otro, de forma que el resultado final será la medida equivalente en las unidades que buscamos.\n\n");
	fprintf(archivo,"Por ejemplo: si queremos pasar 8 metros a yardas, lo único que tenemos que hacer es multiplicar 8 x (0.914) = 7.312 yardas.\n\n");
	
	fprintf(archivo,"1 m.      = 100 cm.\n");
	fprintf(archivo,"1 m.      = 1000 mm.\n");
	fprintf(archivo,"1 cm.     = 10 mm.\n");
	fprintf(archivo,"1 km.     = 1000 m.\n");
	fprintf(archivo,"1 m.      = 3.28 pies.\n");
	fprintf(archivo,"1 m.      = 0.914 yardas.\n");
	fprintf(archivo,"1 pie     = 30.48 cm.\n");
	fprintf(archivo,"1 pie     = 12 pulgadas.\n");
	fprintf(archivo,"1 pulgada = 2.54 cm.\n");
	fprintf(archivo,"1 milla   = 1.609 km.\n");
	fprintf(archivo,"1 libra   = 454 gramos.\n");
	fprintf(archivo,"1 kg.     = 2.2 libras.\n");
	fprintf(archivo,"1 litro   = 1000 cm%c.\n",252);
	fprintf(archivo,"1 hora    = 60 minutos.\n");
	fprintf(archivo,"1 hora    = 3600 segundos.\n\n");
	
	fprintf(archivo,"Factor de conversión.\n");
	fprintf(archivo,"---------------------\n\n");
	
	fprintf(archivo,"Un factor de conversión es una operación matemática, para hacer cambios de unidades de la misma magnitud, o para calcular la equivalencia entre los múltiplos y submúltiplos de una determinada unidad de medida.\n\n");
	
	fprintf(archivo,"Ejemplos frecuentes de utilización de los factores de conversión:\n");
	fprintf(archivo,"-----------------------------------------------------------------\n\n");
	
	fprintf(archivo,"Cambios monetarios: euros, dólares, libras, pesos, escudos, etc...\n");
	fprintf(archivo,"Medidas de distancias: kilómetros, metros, millas, leguas, yardas, etc...\n");
	fprintf(archivo,"Medidas de tiempo: horas, minutos, segundos, siglos, años, días, etc...\n");
	fprintf(archivo,"Cambios en velocidades: kilómetro/hora, nudos, años-luz, metros/segundo, etc...\n\n");
	
	fprintf(archivo,"Otros ejemplos:\n");
	fprintf(archivo,"---------------\n\n");
	
	fprintf(archivo,"Queremos pasar 2 horas a minutos.\n\n");
	fprintf(archivo,"===============================================\n");
	fprintf(archivo,"= 2 horas * (60 min. / 1 hora) = 120 minutos. =\n");
	fprintf(archivo,"===============================================\n\n");
	
	fprintf(archivo,"Para convertir esta cantidad, lo que hacemos es poner la unidad que queremos eliminar en el denominador y la unidad a la que queremos convertir en el numerador, para asi poder multiplicar el 2 con el numerador que es 60 y asi obtener el valor de 120 minutos.\n\n");
	
	fprintf(archivo,"Queremos pasar 30 cm. a m.\n\n");
	fprintf(archivo,"======================================\n");
	fprintf(archivo,"= 30 cm. * (1 m. / 100 cm.) = 0.3 m. =\n");
	fprintf(archivo,"======================================\n\n");
	
	fprintf(archivo,"Queremos pasar 120 km/h. a m/s.\n\n");
	fprintf(archivo,"===================================================================\n");
	fprintf(archivo,"= 120 km/h. * (1000 m. / 1 km.) * (1 hora / 3600 s.) = 33.33 m/s. =\n");
	fprintf(archivo,"===================================================================\n\n");
	
	system("pause");
	p("\n");
	
	p("Ejercicios:\n");
	p("-----------\n\n");
	
	fprintf(archivo,"Ejercicios:\n");
	fprintf(archivo,"-----------\n\n");
	
	float opcionf,comprobar;
	int opcion;
	
	p("Pasa de 8 km/h. a m/s.\n\n");
	p("Respuesta: ");
	fflush(stdin);
	s("%f",&opcionf);
	p("\n");	
	
	fprintf(archivo,"Pasa de 8 km/h. a m/s.\n\n");
	fprintf(archivo,"Respuesta: %f.\n\n",opcionf);
	
	comprobar = 2.22;
	
	if(opcionf == comprobar) {
		p("============\n");
		p("= Correcto =\n");
		p("============\n\n");
		
		fprintf(archivo,"============\n");
		fprintf(archivo,"= Correcto =\n");
		fprintf(archivo,"============\n\n");
	} else {
		p("==============\n");
		p("= Incorrecto =\n");
		p("==============\n\n");
		
		fprintf(archivo,"==============\n");
		fprintf(archivo,"= Incorrecto =\n");
		fprintf(archivo,"==============\n\n");
		
		p("=========================================================================\n");
		p("=                km.          1000 m.         1 h.                      =\n");
		p("= 8 km/h. =    8 -----    *   -------    *    -------    =    2.22 m/s. =\n");
		p("=                h.           1 km.           3600 s.                   =\n");
		p("=========================================================================\n");
		p("= 8 km. * (1000 m. / 1 km.) = 8000 m. =\n");
		p("= 1 h.  * (3600 s. / 1 h. ) = 3600 s. =\n");
		p("=======================================\n");
		p("= 8000 m. / 3600 s. = 2.22 m/s. =\n");
		p("=================================\n\n");
		
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"=                km.          1000 m.         1 h.                      =\n");
		fprintf(archivo,"= 8 km/h. =    8 -----    *   -------    *    -------    =    2.22 m/s. =\n");
		fprintf(archivo,"=                h.           1 km.           3600 s.                   =\n");
		fprintf(archivo,"=========================================================================\n");
		fprintf(archivo,"= 8 km. * (1000 m. / 1 km.) = 8000 m.  =\n");
		fprintf(archivo,"= 1 h.  * (3600 s. / 1 h. )  = 3600 s. =\n");
		fprintf(archivo,"========================================\n");
		fprintf(archivo,"= 8000 m. / 3600 s. = 2.22 m/s. =\n");
		fprintf(archivo,"=================================\n\n");
	}
	
	p("Pasa de 4 m. a pies.\n\n");
	p("Respuesta: ");
	fflush(stdin);
	s("%f",&opcionf);
	p("\n");	
	
	fprintf(archivo,"Pasa de 4 m. a pies.\n\n");
	fprintf(archivo,"Respuesta: %f.\n\n",opcionf);
	
	comprobar = 13.12;
	
	if(opcionf == comprobar) {
		p("============\n");
		p("= Correcto =\n");
		p("============\n\n");
		
		fprintf(archivo,"============\n");
		fprintf(archivo,"= Correcto =\n");
		fprintf(archivo,"============\n\n");
	} else {
		p("==============\n");
		p("= Incorrecto =\n");
		p("==============\n\n");
		
		fprintf(archivo,"==============\n");
		fprintf(archivo,"= Incorrecto =\n");
		fprintf(archivo,"==============\n\n");
		
		p("======================================================\n");
		p("=                       3.28 pies                    =\n");
		p("= 4 m. =    4 m.    *   ---------    =    13.12 pies =\n");
		p("=                       1 m.                         =\n");
		p("======================================================\n");
		p("= 4 m. * (3.28 pies / 1 m.) = 4 m. * 3.28 pies =\n");
		p("= 4 m. * 3.28 pies = 13.12 s.                  =\n");
		p("================================================\n\n");
		
		fprintf(archivo,"======================================================\n");
		fprintf(archivo,"=                       3.28 pies                    =\n");
		fprintf(archivo,"= 4 m. =    4 m.    *   ---------    =    13.12 pies =\n");
		fprintf(archivo,"=                       1 m.                         =\n");
		fprintf(archivo,"======================================================\n");
		fprintf(archivo,"= 4 m. * (3.28 pies / 1 m.) = 4 m. * 3.28 pies =\n");
		fprintf(archivo,"= 4 m. * 3.28 pies          = 13.12 pies       =\n");
		fprintf(archivo,"================================================\n\n");
	}
	
	p("Pasa de 12 m. a yardas.\n\n");
	p("Respuesta: ");
	fflush(stdin);
	s("%f",&opcionf);
	p("\n");
	
	fprintf(archivo,"Pasa de 12 m. a pies.\n\n");
	fprintf(archivo,"Respuesta: %f.\n\n",opcionf);
	
	comprobar = 10.968;
	
	if(opcionf == comprobar) {
		p("============\n");
		p("= Correcto =\n");
		p("============\n\n");
		
		fprintf(archivo,"============\n");
		fprintf(archivo,"= Correcto =\n");
		fprintf(archivo,"============\n\n");
	} else {
		p("==============\n");
		p("= Incorrecto =\n");
		p("==============\n\n");
		
		fprintf(archivo,"==============\n");
		fprintf(archivo,"= Incorrecto =\n");
		fprintf(archivo,"==============\n\n");
		
		p("==============================================================\n");
		p("=                         0.914 yardas                       =\n");
		p("= 12 m. =    12 m.    *   ------------    =    10.968 yardas =\n");
		p("=                         1 m.                               =\n");
		p("==============================================================\n");
		p("= 12 m. * (0.914 yardas / 1 m.) = 12 m. * 0.914 yardas =\n");
		p("= 12 m. * 0.914 yardas = 13.12 pies                    =\n");
		p("========================================================\n\n");
		
		fprintf(archivo,"==============================================================\n");
		fprintf(archivo,"=                         0.914 yardas                       =\n");
		fprintf(archivo,"= 12 m. =    12 m.    *   ------------    =    10.968 yardas =\n");
		fprintf(archivo,"=                         1 m.                               =\n");
		fprintf(archivo,"==============================================================\n");
		fprintf(archivo,"= 12 m. * (0.914 yardas / 1 m.) = 12 m. * 0.914 yardas =\n");
		fprintf(archivo,"= 12 m. * 0.914 yardas = 13.12 pies                    =\n");
		fprintf(archivo,"========================================================\n\n");
	}
	
	p("Pasa de 10 pies a cm.\n\n");
	p("Respuesta: ");
	fflush(stdin);
	s("%f",&opcionf);
	p("\n");
	
	fprintf(archivo,"Pasa de 10 pies a cm.\n\n");
	fprintf(archivo,"Respuesta: %f.\n\n",opcionf);
	
	comprobar = 304.8;
	
	if(opcionf == comprobar) {
		p("============\n");
		p("= Correcto =\n");
		p("============\n\n");
		
		fprintf(archivo,"============\n");
		fprintf(archivo,"= Correcto =\n");
		fprintf(archivo,"============\n\n");
	} else {
		p("==============\n");
		p("= Incorrecto =\n");
		p("==============\n\n");
		
		fprintf(archivo,"==============\n");
		fprintf(archivo,"= Incorrecto =\n");
		fprintf(archivo,"==============\n\n");
		
		p("===========================================================\n");
		p("=                             30.48 cm.                   =\n");
		p("= 10 pies =    10 pies    *   ---------    =    304.8 cm. =\n");
		p("=                             1 pie                       =\n");
		p("===========================================================\n");
		p("= 10 pies * (30.48 cm. / 1 pie) = 10 pies * 30.48 cm. =\n");
		p("= 10 pies * 30.48 cm.           = 304.8 cm.           =\n");
		p("=======================================================\n\n");
		
		fprintf(archivo,"===========================================================\n");
		fprintf(archivo,"=                             30.48 cm.                   =\n");
		fprintf(archivo,"= 10 pies =    10 pies    *   ---------    =    304.8 cm. =\n");
		fprintf(archivo,"=                             1 pie                       =\n");
		fprintf(archivo,"===========================================================\n");
		fprintf(archivo,"= 10 pies * (30.48 cm. / 1 pie) = 10 pies * 30.48 cm. =\n");
		fprintf(archivo,"= 10 pies * 30.48 cm.           = 304.8 cm.           =\n");
		fprintf(archivo,"=======================================================\n\n");
	}
	
	p("Pasa de 8 pies a pulgadas.\n\n");
	p("Respuesta: ");
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Pasa de 8 pies a pulgadas.\n\n");
	fprintf(archivo,"Respuesta: %i.\n\n",opcion);
	
	if(opcion == 96) {
		p("============\n");
		p("= Correcto =\n");
		p("============\n\n");
		
		fprintf(archivo,"============\n");
		fprintf(archivo,"= Correcto =\n");
		fprintf(archivo,"============\n\n");
	} else {
		p("==============\n");
		p("= Incorrecto =\n");
		p("==============\n\n");
		
		fprintf(archivo,"==============\n");
		fprintf(archivo,"= Incorrecto =\n");
		fprintf(archivo,"==============\n\n");
		
		p("=============================================================\n");
		p("=                           12 pulgadas                     =\n");
		p("= 8 pies =    8 pies    *   -----------    =    96 pulgadas =\n");
		p("=                           1 pie                           =\n");
		p("=============================================================\n");
		p("= 8 pies * (12 pulgadas / 1 pie) = 8 pies * 12 pulgadas =\n");
		p("= 8 pies * 12 pulgadas           = 96 pulgadas          =\n");
		p("=========================================================\n\n");
		
		fprintf(archivo,"=============================================================\n");
		fprintf(archivo,"=                           12 pulgadas                     =\n");
		fprintf(archivo,"= 8 pies =    8 pies    *   -----------    =    96 pulgadas =\n");
		fprintf(archivo,"=                           1 pie                           =\n");
		fprintf(archivo,"=============================================================\n");
		fprintf(archivo,"= 8 pies * (12 pulgadas / 1 pie) = 8 pies * 12 pulgadas =\n");
		fprintf(archivo,"= 8 pies * 12 pulgadas           = 96 pulgadas          =\n");
		fprintf(archivo,"=========================================================\n\n");
	}
	
	p("Pasa de 100 pulgadas a cm.\n\n");
	p("Respuesta: ");
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Pasa de 100 pulgadas a cm.\n\n");
	fprintf(archivo,"Respuesta: %i.\n\n",opcion);
	
	if(opcion == 254) {
		p("============\n");
		p("= Correcto =\n");
		p("============\n\n");
		
		fprintf(archivo,"============\n");
		fprintf(archivo,"= Correcto =\n");
		fprintf(archivo,"============\n\n");
	} else {
		p("==============\n");
		p("= Incorrecto =\n");
		p("==============\n\n");
		
		fprintf(archivo,"==============\n");
		fprintf(archivo,"= Incorrecto =\n");
		fprintf(archivo,"==============\n\n");
		
		p("===================================================================\n");
		p("=                                       2.54 cm.                  =\n");
		p("= 100 pulgadas =    100 pulgadas    *   ---------    =    254 cm. =\n");
		p("=                                       1 pulgada                 =\n");
		p("===================================================================\n");
		p("= 100 pulgadas * (2.54 cm. / 1 pulgada) = 100 pulgadas * 2.54 cm. =\n");
		p("= 100 pulgadas * 2.54 cm.               = 254 cm.                 =\n");
		p("===================================================================\n\n");
		
		fprintf(archivo,"===================================================================\n");
		fprintf(archivo,"=                                       2.54 cm.                  =\n");
		fprintf(archivo,"= 100 pulgadas =    100 pulgadas    *   ---------    =    254 cm. =\n");
		fprintf(archivo,"=                                       1 pulgada                 =\n");
		fprintf(archivo,"===================================================================\n");
		fprintf(archivo,"= 100 pulgadas * (2.54 cm. / 1 pulgada) = 100 pulgadas * 2.54 cm. =\n");
		fprintf(archivo,"= 100 pulgadas * 2.54 cm.               = 254 cm.                 =\n");
		fprintf(archivo,"===================================================================\n\n");
	}
	
	p("Pasa de 50 millas a km.\n\n");
	p("Respuesta: ");
	fflush(stdin);
	s("%f",&opcionf);
	p("\n");
	
	fprintf(archivo,"Pasa de 50 millas a km.\n\n");
	fprintf(archivo,"Respuesta: %f.\n\n",opcionf);
	
	comprobar = 80.45;
	
	if(opcion == comprobar) {
		p("============\n");
		p("= Correcto =\n");
		p("============\n\n");
		
		fprintf(archivo,"============\n");
		fprintf(archivo,"= Correcto =\n");
		fprintf(archivo,"============\n\n");
	} else {
		p("==============\n");
		p("= Incorrecto =\n");
		p("==============\n\n");
		
		fprintf(archivo,"==============\n");
		fprintf(archivo,"= Incorrecto =\n");
		fprintf(archivo,"==============\n\n");
		
		p("===============================================================\n");
		p("=                                 1.609 km.                   =\n");
		p("= 50 millas =    50 millas    *   ---------    =    80.45 km. =\n");
		p("=                                 1 milla                     =\n");
		p("===============================================================\n");
		p("= 50 millas * (1.609 km. / 1 milla) = 50 millas * 1.609 km. =\n");
		p("= 50 millas * 1.609 km.             = 80.45 km.             =\n");
		p("=============================================================\n\n");
		
		fprintf(archivo,"===============================================================\n");
		fprintf(archivo,"=                                 1.609 km.                   =\n");
		fprintf(archivo,"= 50 millas =    50 millas    *   ---------    =    80.45 km. =\n");
		fprintf(archivo,"=                                 1 milla                     =\n");
		fprintf(archivo,"===============================================================\n");
		fprintf(archivo,"= 50 millas * (1.609 km. / 1 milla) = 50 millas * 1.609 km. =\n");
		fprintf(archivo,"= 50 millas * 1.609 km.             = 80.45 km.             =\n");
		fprintf(archivo,"=============================================================\n\n");
	}
	
	p("Pasa de 70 libras a gramos.\n\n");
	p("Respuesta: ");
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Pasa de 70 libras a gramos.\n\n");
	fprintf(archivo,"Respuesta: %i.\n\n",opcion);
	
	if(opcion == 31780) {
		p("============\n");
		p("= Correcto =\n");
		p("============\n\n");
		
		fprintf(archivo,"============\n");
		fprintf(archivo,"= Correcto =\n");
		fprintf(archivo,"============\n\n");
	} else {
		p("==============\n");
		p("= Incorrecto =\n");
		p("==============\n\n");
		
		fprintf(archivo,"==============\n");
		fprintf(archivo,"= Incorrecto =\n");
		fprintf(archivo,"==============\n\n");
		
		p("===================================================================\n");
		p("=                                 454 gramos                      =\n");
		p("= 70 libras =    70 libras    *   ----------    =    31780 gramos =\n");
		p("=                                 1 libra                         =\n");
		p("===================================================================\n");
		p("= 70 libras * (454 gramos / 1 libra) = 70 libras * 454 gramos =\n");
		p("= 70 libras * 454 gramos             = 31780 gramos           =\n");
		p("===============================================================\n\n");
		
		fprintf(archivo,"===================================================================\n");
		fprintf(archivo,"=                                 454 gramos                      =\n");
		fprintf(archivo,"= 70 libras =    70 libras    *   ----------    =    31780 gramos =\n");
		fprintf(archivo,"=                                 1 libra                         =\n");
		fprintf(archivo,"===================================================================\n");
		fprintf(archivo,"= 70 libras * (454 gramos / 1 libra) = 70 libras * 454 gramos =\n");
		fprintf(archivo,"= 70 libras * 454 gramos             = 31780 gramos           =\n");
		fprintf(archivo,"===============================================================\n\n");
	}
	
	fclose(archivo);
}
