void simedet(int tema) {
	int opcion;
	float opcionf,comprobar;
	
	if(tema == 1) {
		FILE *archivo;
		archivo = fopen("Medidas complejas.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n\n");
		}
			
		p("Medidas complejas:\n");
		p("==================\n\n");
		
		p("Una unidad est%c en forma compleja cuando se expresa en varias unidades.\n\n",160);
		
		p("Ejemplo:\n");
		p("--------\n\n");
		
		p("Vivo a 6 kil%cmetros y 400 metros.\n\n",162);
			
		fprintf(archivo,"Medidas complejas:\n");
		fprintf(archivo,"==================\n\n");		
		fprintf(archivo,"Una unidad está en forma compleja cuando se expresa en varias unidades.\n\n");		
		fprintf(archivo,"Ejemplo:\n");
		fprintf(archivo,"--------\n\n");		
		fprintf(archivo,"Vivo a 6 kilómetros y 400 metros.\n\n");
		
		system("pause");
		p("\n");
		
		p("Medida incompleja o simple.\n");
		p("---------------------------\n\n");
		
		p("Una unidad est%c en forma incompleja o simple cuando se expresa totalmente en una unidad.\n\n",160);
		
		p("Ejemplo:\n");
		p("--------\n\n");
		
		p("Vivo a 6.400 metros.\n\n");
		
		fprintf(archivo,"Medida incompleja o simple.\n");
		fprintf(archivo,"---------------------------\n\n");		
		fprintf(archivo,"Una unidad está en forma incompleja o simple cuando se expresa totalmente en una unidad.\n\n");		
		fprintf(archivo,"Ejemplo:\n");
		fprintf(archivo,"--------\n\n");		
		fprintf(archivo,"Vivo a 6.400 metros.\n\n");
		
		system("pause");
		p("\n");
		
		p("Pasar de medida compleja a incompleja.\n");
		p("---------------------------\n\n");
		
		p("Para pasar de medida compleja a incompleja se debe transformar cada una de las unidades que tenemos en la que queramos obtener.\n\n");
		
		p("=========================\n");
		p("= km.           ==> x10 =\n");
		p("=    hm.                =\n");
		p("=       dam.            =\n");
		p("=           m.          =\n");
		p("=             dm.       =\n");
		p("=                cm.    =\n");
		p("= <== :10           mm. =\n");
		p("=========================\n\n");
		
		p("Ejemplo:\n");
		p("--------\n\n");
		
		p("=======================================\n");
		p("= Pasar a cm 6 kil%cmetros 400 metros. =\n",162);
		p("= 6 km = 6 x 100000 = 600000.         =\n");
		p("= 400 m = 4 x 100 = 400.              =\n");
		p("=======================================\n\n");
		
		fprintf(archivo,"Pasar de medida compleja a incompleja.\n");
		fprintf(archivo,"--------------------------------------\n\n");		
		fprintf(archivo,"Para pasar de medida compleja a incompleja se debe transformar cada una de las unidades que tenemos en la que queramos obtener.\n\n");		
		fprintf(archivo,"=========================\n");
		fprintf(archivo,"= km.           ==> x10 =\n");
		fprintf(archivo,"=    hm.                =\n");
		fprintf(archivo,"=       dam.            =\n");
		fprintf(archivo,"=           m.          =\n");
		fprintf(archivo,"=             dm.       =\n");
		fprintf(archivo,"=                cm.    =\n");
		fprintf(archivo,"= <== :10           mm. =\n");
		fprintf(archivo,"=========================\n\n");		
		fprintf(archivo,"Ejemplo:\n");
		fprintf(archivo,"--------\n\n");		
		fprintf(archivo,"=======================================\n");
		fprintf(archivo,"= Pasar a cm 6 kilómetros 400 metros. =\n");
		fprintf(archivo,"= 6 km = 6 x 100000 = 600000.         =\n");
		fprintf(archivo,"= 400 m = 4 x 100 = 400.              =\n");
		fprintf(archivo,"=======================================\n\n");
				
		system("pause");
		p("\n");
		
		p("Elige la opci%cn correcta.\n",162);
		p("-------------------------\n\n");
		
		p("30 km. 5 hm. 30 dm.\n\n");
		p("Opciones.\n");
		p("[1] - 30530 dm.\n");
		p("[2] - 305030 dm.\n");
		p("[3] - 305300 dm.\n\n");
		p("Opci%cn: ",162);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"Elige la opción correcta.\n");
		fprintf(archivo,"-------------------------\n\n");		
		fprintf(archivo,"30 km. 5 hm. 30 dm.\n\n");
		fprintf(archivo,"Opciones.\n");
		fprintf(archivo,"[1] - 30530 dm.\n");
		fprintf(archivo,"[2] - 305030 dm.\n");
		fprintf(archivo,"[3] - 305300 dm.\n\n");
		fprintf(archivo,"Opción: %i.\n\n",opcion);
		if(opcion == 2) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("----------------------\n");
			p("-                    -\n");
			p("- Incorrecto.        -\n");
			p("-                    -\n");
			p("- 30 km = 300000 dm. -\n");
			p("-  5 hm =   5000 dm. -\n");
			p("- 30 dm =     30 dm. -\n");
			p("- ================== -\n");
			p("-         305030 dm. -\n");
			p("-                    -\n");
			p("----------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n\n");
			fprintf(archivo,"----------------------\n");
			fprintf(archivo,"-                    -\n");
			fprintf(archivo,"- 30 km = 300000 dm. -\n");
			fprintf(archivo,"-  5 hm =   5000 dm. -\n");
			fprintf(archivo,"- 30 dm =     30 dm. -\n");
			fprintf(archivo,"- ================== -\n");
			fprintf(archivo,"-         305030 dm. -\n");
			fprintf(archivo,"-                    -\n");
			fprintf(archivo,"----------------------\n\n");
		}		
		p("30 kg. 20 dag. 5 dg.\n\n");
		p("Opciones.\n");
		p("[1] - 30250 cg.\n");
		p("[2] - 3020050 cg.\n");
		p("[3] - 302500 cg.\n\n");
		p("Opci%cn: ",162);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"30 kg. 20 dag. 5 dg.\n\n");
		fprintf(archivo,"Opciones.\n");
		fprintf(archivo,"[1] - 30250 cg.\n");
		fprintf(archivo,"[2] - 3020050 cg.\n");
		fprintf(archivo,"[3] - 302500 cg.\n\n");
		fprintf(archivo,"Opción: %i.\n\n",opcion);
		if(opcion == 2) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------\n");
			p("-                      -\n");
			p("- Incorrecto.          -\n");
			p("-                      -\n");
			p("- 30 kg  = 3000000 cg. -\n");
			p("- 20 dag =   20000 cg. -\n");
			p("-  5 dg  =      50 cg. -\n");
			p("- ==================== -\n");
			p("-          3020050 cg. -\n");
			p("-                      -\n");
			p("------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n\n");
			fprintf(archivo,"------------------------\n");
			fprintf(archivo,"-                      -\n");
			fprintf(archivo,"- 30 kg  = 3000000 cg. -\n");
			fprintf(archivo,"- 20 dag =   20000 cg. -\n");
			fprintf(archivo,"-  5 dg  =      50 cg. -\n");
			fprintf(archivo,"- ==================== -\n");
			fprintf(archivo,"-          3020050 cg. -\n");
			fprintf(archivo,"-                      -\n");
			fprintf(archivo,"------------------------\n\n");
		}
		p("100 dal. 900 ml. 350 cl.\n\n");
		p("Opciones.\n");
		p("[1] - 1004,4 l.\n");
		p("[2] - 10400,40 l.\n");
		p("[3] - 104400 l.\n\n");
		p("Opci%cn: ",162);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"100 dal. 900 ml. 350 cl.\n\n");
		fprintf(archivo,"Opciones.\n");
		fprintf(archivo,"[1] - 1004,4 l.\n");
		fprintf(archivo,"[2] - 10400,40 l.\n");
		fprintf(archivo,"[3] - 104400 l.\n\n");
		fprintf(archivo,"Opción: %i.\n\n",opcion);
		if(opcion == 1) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------\n");
			p("-                      -\n");
			p("- Incorrecto.          -\n");
			p("-                      -\n");
			p("- 100 dal = 1000   l.  -\n");
			p("- 900 ml  =    0,9 l.  -\n");
			p("- 350 cl  =    3,5 l.  -\n");
			p("- ===================  -\n");
			p("-           1004,4 l.  -\n");
			p("-                      -\n");
			p("------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n\n");
			fprintf(archivo,"------------------------\n");
			fprintf(archivo,"-                      -\n");
			fprintf(archivo,"- 100 dal = 1000   l.  -\n");
			fprintf(archivo,"- 900 ml  =    0,9 l.  -\n");
			fprintf(archivo,"- 350 cl  =    3,5 l.  -\n");
			fprintf(archivo,"- ===================  -\n");
			fprintf(archivo,"-           1004,4 l.  -\n");
			fprintf(archivo,"-                      -\n");
			fprintf(archivo,"------------------------\n\n");
		}
		p("70580 cm.\n\n");
		p("Opciones.\n");
		p("[1] - 7058 dm.\n");
		p("[2] - 70500,80 dm.\n");
		p("[3] - 705800 dm.\n\n");
		p("Opci%cn: ",162);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"70580 cm.\n\n");
		fprintf(archivo,"Opciones.\n");
		fprintf(archivo,"[1] - 7058 dm.\n");
		fprintf(archivo,"[2] - 70500,80 dm.\n");
		fprintf(archivo,"[3] - 705800 dm.\n\n");
		fprintf(archivo,"Opción: %i.\n\n",opcion);
		if(opcion == 1) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("-----------------------\n");
			p("-                     -\n");
			p("- Incorrecto.         -\n");
			p("-                     -\n");
			p("- 70580 cm = 7058 dm. -\n");
			p("-                     -\n");
			p("-----------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n\n");
			fprintf(archivo,"-----------------------\n");
			fprintf(archivo,"-                     -\n");
			fprintf(archivo,"- 70580 cm = 7058 dm. -\n");
			fprintf(archivo,"-                     -\n");
			fprintf(archivo,"-----------------------\n\n");
		}
		p("7,05 dl.\n\n");
		p("Opciones.\n");
		p("[1] - 0.705 l.\n");
		p("[2] - 70.500 l.\n");
		p("[3] - 750000 l.\n\n");
		p("Opci%cn: ",162);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"7,05 dl.\n\n");
		fprintf(archivo,"Opciones.\n");
		fprintf(archivo,"[1] - 0.705 l.\n");
		fprintf(archivo,"[2] - 70.500 l.\n");
		fprintf(archivo,"[3] - 750000 l.\n\n");
		fprintf(archivo,"Opción: %i.\n\n",opcion);
		if(opcion == 1) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("-----------------------\n");
			p("-                     -\n");
			p("- Incorrecto.         -\n");
			p("-                     -\n");
			p("- 7,05 dl. = 0,705 l. -\n");
			p("-                     -\n");
			p("-----------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n\n");
			fprintf(archivo,"-----------------------\n");
			fprintf(archivo,"-                     -\n");
			fprintf(archivo,"- 7,05 dl. = 0,705 l. -\n");
			fprintf(archivo,"-                     -\n");
			fprintf(archivo,"-----------------------\n\n");
		}
		fclose(archivo);
	}
	if(tema == 2) {
		FILE *archivo;
		archivo = fopen("Medidas de longitud.doc","w");
		if(archivo == NULL) {
			p("No se ha podido crear el archivo.\n\n");
		}
		
		p("Medidas de longitud:\n");
		p("====================\n\n");
		
		p("La unidad principal para medir longitudes es el metro.\n\n");
		
		p("=========================\n");
		p("= km.           ==> x10 =\n");
		p("=    hm.                =\n");
		p("=       dam.            =\n");
		p("=           m.          =\n");
		p("=             dm.       =\n");
		p("=                cm.    =\n");
		p("= <== :10           mm. =\n");
		p("=========================\n\n");
		
		p("25 m. en mm. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		
		fprintf(archivo,"Medidas de longitud:\n");
		fprintf(archivo,"====================\n\n");		
		fprintf(archivo,"La unidad principal para medir longitudes es el metro.\n\n");		
		fprintf(archivo,"=========================\n");
		fprintf(archivo,"= km.           ==> x10 =\n");
		fprintf(archivo,"=    hm.                =\n");
		fprintf(archivo,"=       dam.            =\n");
		fprintf(archivo,"=           m.          =\n");
		fprintf(archivo,"=             dm.       =\n");
		fprintf(archivo,"=                cm.    =\n");
		fprintf(archivo,"= <== :10           mm. =\n");
		fprintf(archivo,"=========================\n\n");
		
		fprintf(archivo,"25 m. en mm. son: %i.\n\n",opcion);
		if(opcion == 25000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------\n");
			p("-                                  -\n");
			p("- Incorrecto.                      -\n");
			p("-                                  -\n");
			p("- 25 m. = 25000 mm.                -\n");
			p("-                                  -\n");
			p("- 25 m, 250 dm, 2500 cm, 25000 mm. -\n");
			p("-                                  -\n");
			p("------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------------\n");
			fprintf(archivo,"-                                  -\n");
			fprintf(archivo,"- 25 m. = 25000 mm.                -\n");
			fprintf(archivo,"-                                  -\n");
			fprintf(archivo,"- 25 m, 250 dm, 2500 cm, 25000 mm. -\n");
			fprintf(archivo,"-                                  -\n");
			fprintf(archivo,"------------------------------------\n\n");
		}
		p("80 hm. en cm. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"80 hm. en cm. son: %i.\n\n",opcion);
		if(opcion == 800000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------------------\n");
			p("-                                              -\n");
			p("- Incorrecto.                                  -\n");
			p("-                                              -\n");
			p("- 80 hm. = 800000 cm.                          -\n");
			p("-                                              -\n");
			p("- 80 hm, 800 dam, 8000 m, 80000 dm, 800000 cm. -\n");
			p("-                                              -\n");
			p("------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------------------------\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"- 80 hm. = 800000 cm.                          -\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"- 80 hm, 800 dam, 8000 m, 80000 dm, 800000 cm. -\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"------------------------------------------------\n\n");
		}
		p("0.6 km. en dm. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"0.6 km. en dm. son: %i.\n\n",opcion);
		if(opcion == 6000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("-----------------------------------------\n");
			p("-                                       -\n");
			p("- Incorrecto.                           -\n");
			p("-                                       -\n");
			p("- 0.6 km. = 6000 dm.                    -\n");
			p("-                                       -\n");
			p("- 0.6 km, 6 hm, 60 dam, 600 m, 6000 dm. -\n");
			p("-                                       -\n");
			p("-----------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"-----------------------------------------\n");
			fprintf(archivo,"-                                       -\n");
			fprintf(archivo,"- 0.6 km. = 6000 dm.                    -\n");
			fprintf(archivo,"-                                       -\n");
			fprintf(archivo,"- 0.6 km, 6 hm, 60 dam, 600 m, 6000 dm. -\n");
			fprintf(archivo,"-                                       -\n");
			fprintf(archivo,"-----------------------------------------\n\n");
		}
		p("37.5 dm. en hm. son: ");
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		comprobar = 0.0375;
		
		fprintf(archivo,"37.5 dm. en hm. son: %f.\n\n",opcionf);
		if(opcionf == comprobar) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------------\n");
			p("-                                        -\n");
			p("- Incorrecto.                            -\n");
			p("-                                        -\n");
			p("- 37.5 dm. = 0.0375 hm.                  -\n");
			p("-                                        -\n");
			p("- 37.5 dm, 3.75 m, 0.375 dam, 0.0375 hm. -\n");
			p("-                                        -\n");
			p("------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------------------\n");
			fprintf(archivo,"-                                        -\n");
			fprintf(archivo,"- 37.5 dm. = 0.0375 hm.                  -\n");
			fprintf(archivo,"-                                        -\n");
			fprintf(archivo,"- 37.5 dm, 3.75 m, 0.375 dam, 0.0375 hm. -\n");
			fprintf(archivo,"-                                        -\n");
			fprintf(archivo,"------------------------------------------\n\n");
		}
		p("0.1 m. en cm. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"0.1 m. en cm. son: %i.\n\n",opcion);
		if(opcion == 10) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("-----------------------\n");
			p("-                     -\n");
			p("- Incorrecto.         -\n");
			p("-                     -\n");
			p("- 0.1 m. = 10 cm.     -\n");
			p("-                     -\n");
			p("- 0.1 m, 1 dm, 10 cm. -\n");
			p("-                     -\n");
			p("-----------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"-----------------------\n");
			fprintf(archivo,"-                     -\n");
			fprintf(archivo,"- 0.1 m. = 10 cm.     -\n");
			fprintf(archivo,"-                     -\n");
			fprintf(archivo,"- 0.1 m, 1 dm, 10 cm. -\n");
			fprintf(archivo,"-                     -\n");
			fprintf(archivo,"-----------------------\n\n");
		}
		p("24 km. en dm. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"24 km. en dm. son: %i.\n\n",opcion);
		if(opcion == 240000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------------------\n");
			p("-                                              -\n");
			p("- Incorrecto.                                  -\n");
			p("-                                              -\n");
			p("- 24 km. = 240000 dm.                          -\n");
			p("-                                              -\n");
			p("- 24 km, 240 hm, 2400 dam, 24000 m, 240000 dm. -\n");
			p("-                                              -\n");
			p("------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------------------------\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"- 24 km. = 240000 dm.                          -\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"- 24 km, 240 hm, 2400 dam, 24000 m, 240000 dm. -\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"------------------------------------------------\n\n");
		}
		fclose(archivo);
	}
	if(tema == 3) {
		FILE *archivo;
		archivo = fopen("Medidas de masa.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n");
		}
		
		p("Medidas de masa:\n");
		p("================\n\n");
		
		p("La unidad principal para medir masa es el gramo.\n\n");
		
		p("=========================\n");
		p("= kg.           ==> x10 =\n");
		p("=    hg.                =\n");
		p("=       dag.            =\n");
		p("=          g.           =\n");
		p("=             dg.       =\n");
		p("=                cg.    =\n");
		p("= <== :10           mg. =\n");
		p("=========================\n\n");
		
		p("===================\n");
		p("=   Toneladas:    =\n");
		p("===================\n");
		p("= 1 t. = 1000 kg. =\n");
		p("===================\n\n");
		
		p("=================\n");
		p("=   Quintal:    =\n");
		p("=================\n");
		p("= 1 q = 100 kg. =\n");
		p("= 1 t = 10 q.   =\n");
		p("=================\n\n");
		
		fprintf(archivo,"Medidas de masa:\n");
		fprintf(archivo,"================\n\n");		
		fprintf(archivo,"La unidad principal para medir masa es el gramo.\n\n");		
		fprintf(archivo,"=========================\n");
		fprintf(archivo,"= kg.           ==> x10 =\n");
		fprintf(archivo,"=    hg.                =\n");
		fprintf(archivo,"=       dag.            =\n");
		fprintf(archivo,"=          g.           =\n");
		fprintf(archivo,"=             dg.       =\n");
		fprintf(archivo,"=                cg.    =\n");
		fprintf(archivo,"= <== :10           mg. =\n");
		fprintf(archivo,"=========================\n\n");		
		fprintf(archivo,"===================\n");
		fprintf(archivo,"=   Toneladas:    =\n");
		fprintf(archivo,"===================\n");
		fprintf(archivo,"= 1 t. = 1000 kg. =\n");
		fprintf(archivo,"===================\n\n");		
		fprintf(archivo,"=================\n");
		fprintf(archivo,"=   Quintal:    =\n");
		fprintf(archivo,"=================\n");
		fprintf(archivo,"= 1 q = 100 kg. =\n");
		fprintf(archivo,"= 1 t = 10 q.   =\n");
		fprintf(archivo,"=================\n\n");
				
		p("25 g. en mg. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
				
		fprintf(archivo,"25 g. en mg. son: %i.\n\n",opcion);
		if(opcion == 25000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------\n");
			p("-                                  -\n");
			p("- Incorrecto.                      -\n");
			p("-                                  -\n");
			p("- 25 g. = 25000 mg.                -\n");
			p("-                                  -\n");
			p("- 25 g, 250 dg, 2500 cg, 25000 mg. -\n");
			p("-                                  -\n");
			p("------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------------\n");
			fprintf(archivo,"-                                  -\n");
			fprintf(archivo,"- 25 g. = 25000 mg.                -\n");
			fprintf(archivo,"-                                  -\n");
			fprintf(archivo,"- 25 g, 250 dg, 2500 cg, 25000 mg. -\n");
			fprintf(archivo,"-                                  -\n");
			fprintf(archivo,"------------------------------------\n\n");
		}
		p("80 hg. en cg. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"80 hg. en cg. son: %i.\n\n",opcion);
		if(opcion == 800000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------------------\n");
			p("-                                              -\n");
			p("- Incorrecto.                                  -\n");
			p("-                                              -\n");
			p("- 80 hg. = 800000 cg.                          -\n");
			p("-                                              -\n");
			p("- 80 hg, 800 dag, 8000 g, 80000 dg, 800000 cg. -\n");
			p("-                                              -\n");
			p("------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------------------------\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"- 80 hg. = 800000 cg.                          -\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"- 80 hg, 800 dag, 8000 g, 80000 dg, 800000 cg. -\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"------------------------------------------------\n\n");
		}
		p("0.6 kg. en dg. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"0.6 kg. en dg. son: %i.\n\n",opcion);
		if(opcion == 6000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("-----------------------------------------\n");
			p("-                                       -\n");
			p("- Incorrecto.                           -\n");
			p("-                                       -\n");
			p("- 0.6 kg. = 6000 dg.                    -\n");
			p("-                                       -\n");
			p("- 0.6 kg, 6 hg, 60 dag, 600 g, 6000 dg. -\n");
			p("-                                       -\n");
			p("-----------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"-----------------------------------------\n");
			fprintf(archivo,"-                                       -\n");
			fprintf(archivo,"- 0.6 kg. = 6000 dg.                    -\n");
			fprintf(archivo,"-                                       -\n");
			fprintf(archivo,"- 0.6 kg, 6 hg, 60 dag, 600 g, 6000 dg. -\n");
			fprintf(archivo,"-                                       -\n");
			fprintf(archivo,"-----------------------------------------\n\n");
		}
		p("37.5 dg. en hg. son: ");
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		comprobar = 0.0375;
		
		fprintf(archivo,"37.5 dg. en hg. son: %f.\n\n",opcionf);
		if(opcionf == comprobar) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------------\n");
			p("-                                        -\n");
			p("- Incorrecto.                            -\n");
			p("-                                        -\n");
			p("- 37.5 dg. = 0.0375 hg.                  -\n");
			p("-                                        -\n");
			p("- 37.5 dg, 3.75 g, 0.375 dag, 0.0375 hg. -\n");
			p("-                                        -\n");
			p("------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------------------\n");
			fprintf(archivo,"-                                        -\n");
			fprintf(archivo,"- 37.5 dg. = 0.0375 hg.                  -\n");
			fprintf(archivo,"-                                        -\n");
			fprintf(archivo,"- 37.5 dg, 3.75 g, 0.375 dag, 0.0375 hg. -\n");
			fprintf(archivo,"-                                        -\n");
			fprintf(archivo,"------------------------------------------\n\n");
		}
		p("0.1 g. en cg. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"0.1 g. en cg. son: %i.\n\n",opcion);
		if(opcion == 10) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("-----------------------\n");
			p("-                     -\n");
			p("- Incorrecto.         -\n");
			p("-                     -\n");
			p("- 0.1 g. = 10 cg.     -\n");
			p("-                     -\n");
			p("- 0.1 g, 1 dg, 10 cg. -\n");
			p("-                     -\n");
			p("-----------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"-----------------------\n");
			fprintf(archivo,"-                     -\n");
			fprintf(archivo,"- 0.1 g. = 10 cg.     -\n");
			fprintf(archivo,"-                     -\n");
			fprintf(archivo,"- 0.1 g, 1 dg, 10 cg. -\n");
			fprintf(archivo,"-                     -\n");
			fprintf(archivo,"-----------------------\n\n");
		}
		p("24 kg. en dg. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"24 kg. en dg. son: %i.\n\n",opcion);
		if(opcion == 240000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------------------\n");
			p("-                                              -\n");
			p("- Incorrecto.                                  -\n");
			p("-                                              -\n");
			p("- 24 kg. = 240000 dg.                          -\n");
			p("-                                              -\n");
			p("- 24 kg, 240 hg, 2400 dag, 24000 g, 240000 dg. -\n");
			p("-                                              -\n");
			p("------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------------------------\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"- 24 kg. = 240000 dg.                          -\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"- 24 kg, 240 hg, 2400 dag, 24000 g, 240000 dg. -\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"------------------------------------------------\n\n");
		}
		p("1300 dag. en t. son: ");
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		comprobar = 0.013;
		
		fprintf(archivo,"1300 dag. en t. son: %f.\n\n",opcionf);
		if(opcionf == comprobar) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("---------------------------------------------\n");
			p("-                                           -\n");
			p("- Incorrecto.                               -\n");
			p("-                                           -\n");
			p("- 1300 dag. = 0.013 t.                      -\n");
			p("-                                           -\n");
			p("- 1300 dag, 130 hg, 13 kg, 0.13 q, 0.013 t. -\n");
			p("-                                           -\n");
			p("---------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"---------------------------------------------\n");
			fprintf(archivo,"-                                           -\n");
			fprintf(archivo,"- 1300 dag. = 0.013 t.                      -\n");
			fprintf(archivo,"-                                           -\n");
			fprintf(archivo,"- 1300 dag, 130 hg, 13 kg, 0.13 q, 0.013 t. -\n");
			fprintf(archivo,"-                                           -\n");
			fprintf(archivo,"---------------------------------------------\n\n");
		}
		p("64 q. en g. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"64 q. en g. son: %i.\n\n",opcion);
		if(opcion == 6400000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("---------------------------------------------------\n");
			p("-                                                 -\n");
			p("- Incorrecto.                                     -\n");
			p("-                                                 -\n");
			p("- 64 q. = 6400000 g.                              -\n");
			p("-                                                 -\n");
			p("- 64 q, 6400 kg, 64000 hg, 640000 dag, 6400000 g. -\n");
			p("-                                                 -\n");
			p("---------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"---------------------------------------------------\n");
			fprintf(archivo,"-                                                 -\n");
			fprintf(archivo,"- 64 q. = 6400000 g.                              -\n");
			fprintf(archivo,"-                                                 -\n");
			fprintf(archivo,"- 64 q, 6400 kg, 64000 hg, 640000 dag, 6400000 g. -\n");
			fprintf(archivo,"-                                                 -\n");
			fprintf(archivo,"---------------------------------------------------\n\n");
		}
		fclose(archivo);
	}
	if(tema == 4) {
		FILE *archivo;
		archivo = fopen("Medidas de capacidad.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n\n");
		}
		p("Medidas de capacidad:\n");
		p("=====================\n\n");
		
		p("La unidad principal para medir capacidades es el litro.\n\n");
		
		p("=========================\n");
		p("= kl.           ==> x10 =\n");
		p("=    hl.                =\n");
		p("=       dal.            =\n");
		p("=           l.          =\n");
		p("=             dl.       =\n");
		p("=                cl.    =\n");
		p("= <== :10           ml. =\n");
		p("=========================\n\n");
		
		p("25 l. en ml. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"Medidas de capacidad:\n");
		fprintf(archivo,"=====================\n\n");		
		fprintf(archivo,"La unidad principal para medir capacidades es el litro.\n\n");		
		fprintf(archivo,"=========================\n");
		fprintf(archivo,"= kl.           ==> x10 =\n");
		fprintf(archivo,"=    hl.                =\n");
		fprintf(archivo,"=       dal.            =\n");
		fprintf(archivo,"=           l.          =\n");
		fprintf(archivo,"=             dl.       =\n");
		fprintf(archivo,"=                cl.    =\n");
		fprintf(archivo,"= <== :10           ml. =\n");
		fprintf(archivo,"=========================\n\n");	
			
		fprintf(archivo,"25 l. en ml. son: %i.\n\n",opcion);
		if(opcion == 25000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------\n");
			p("-                                  -\n");
			p("- Incorrecto.                      -\n");
			p("-                                  -\n");
			p("- 25 l. = 25000 ml.                -\n");
			p("-                                  -\n");
			p("- 25 l, 250 dl, 2500 cl, 25000 ml. -\n");
			p("-                                  -\n");
			p("------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------------\n");
			fprintf(archivo,"-                                  -\n");
			fprintf(archivo,"- 25 l. = 25000 ml.                -\n");
			fprintf(archivo,"-                                  -\n");
			fprintf(archivo,"- 25 l, 250 dl, 2500 cl, 25000 ml. -\n");
			fprintf(archivo,"-                                  -\n");
			fprintf(archivo,"------------------------------------\n\n");
		}
		p("80 hl. en cl. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"80 hl. en cl. son: %i.\n\n",opcion);
		if(opcion == 800000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------------------\n");
			p("-                                              -\n");
			p("- Incorrecto.                                  -\n");
			p("-                                              -\n");
			p("- 80 hl. = 800000 cl.                          -\n");
			p("-                                              -\n");
			p("- 80 hl, 800 dal, 8000 l, 80000 dl, 800000 cl. -\n");
			p("-                                              -\n");
			p("------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------------------------\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"- 80 hl. = 800000 cl.                          -\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"- 80 hl, 800 dal, 8000 l, 80000 dl, 800000 cl. -\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"------------------------------------------------\n\n");
		}
		p("0.6 kl. en dl. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"0.6 kl. en dl. son: %i.\n\n",opcion);
		if(opcion == 6000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("-----------------------------------------\n");
			p("-                                       -\n");
			p("- Incorrecto.                           -\n");
			p("-                                       -\n");
			p("- 0.6 kl. = 6000 dl.                    -\n");
			p("-                                       -\n");
			p("- 0.6 kl, 6 hl, 60 dal, 600 l, 6000 dl. -\n");
			p("-                                       -\n");
			p("-----------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"-----------------------------------------\n");
			fprintf(archivo,"-                                       -\n");
			fprintf(archivo,"- 0.6 kl. = 6000 dl.                    -\n");
			fprintf(archivo,"-                                       -\n");
			fprintf(archivo,"- 0.6 kl, 6 hl, 60 dal, 600 l, 6000 dl. -\n");
			fprintf(archivo,"-                                       -\n");
			fprintf(archivo,"-----------------------------------------\n\n");
		}
		p("37.5 dl. en hl. son: ");
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		comprobar = 0.0375;
		
		fprintf(archivo,"37.5 dl. en hl. son: %f.\n\n",opcionf);
		if(opcionf == comprobar) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------------\n");
			p("-                                        -\n");
			p("- Incorrecto.                            -\n");
			p("-                                        -\n");
			p("- 37.5 dl. = 0,0375 hl.                  -\n");
			p("-                                        -\n");
			p("- 37.5 dl, 3.75 l, 0.375 dal, 0.0375 hl. -\n");
			p("-                                        -\n");
			p("------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------------------\n");
			fprintf(archivo,"-                                        -\n");
			fprintf(archivo,"- 37.5 dl. = 0,0375 hl.                  -\n");
			fprintf(archivo,"-                                        -\n");
			fprintf(archivo,"- 37.5 dl, 3.75 l, 0.375 dal, 0.0375 hl. -\n");
			fprintf(archivo,"-                                        -\n");
			fprintf(archivo,"------------------------------------------\n\n");
		}
		p("0.1 l. en cl. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"0.1 l. en cl. son: %i.\n\n",opcion);
		if(opcion == 10) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("-----------------------\n");
			p("-                     -\n");
			p("- Incorrecto.         -\n");
			p("-                     -\n");
			p("- 0.1 l. = 10 cl.     -\n");
			p("-                     -\n");
			p("- 0.1 l, 1 dl, 10 cl. -\n");
			p("-                     -\n");
			p("-----------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"-----------------------\n");
			fprintf(archivo,"-                     -\n");
			fprintf(archivo,"- 0.1 l. = 10 cl.     -\n");
			fprintf(archivo,"-                     -\n");
			fprintf(archivo,"- 0.1 l, 1 dl, 10 cl. -\n");
			fprintf(archivo,"-                     -\n");
			fprintf(archivo,"-----------------------\n\n");
		}
		p("24 kl. en dl. son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"24 kl. en dl. son: %i.\n\n",opcion);
		if(opcion == 240000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------------------\n");
			p("-                                              -\n");
			p("- Incorrecto.                                  -\n");
			p("-                                              -\n");
			p("- 24 kl. = 240000 dl.                          -\n");
			p("-                                              -\n");
			p("- 24 kl, 240 hl, 2400 dal, 24000 l, 240000 dl. -\n");
			p("-                                              -\n");
			p("------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"-----------------------\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"- 24 kl. = 240000 dl.                          -\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"- 24 kl, 240 hl, 2400 dal, 24000 l, 240000 dl. -\n");
			fprintf(archivo,"-                                              -\n");
			fprintf(archivo,"------------------------------------------------\n\n");
		}
		fclose(archivo);
	}
	if(tema == 5) {
		FILE *archivo;
		archivo = fopen("Medidas de superficie.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n\n");
		}
		p("Medidas de superficie:\n");
		p("======================\n\n");
		
		p("La unidad principal para medir superficies es el metro cuadrado.\n\n");
		
		p("================================\n");
		p("= km%c.                ==> x100 =\n",253);
		p("=     hm%c.                     =\n",253);
		p("=         dam%c.                =\n",253);
		p("=              m%c.             =\n",253);
		p("=                 dm%c.         =\n",253);
		p("=                     cm%c.     =\n",253);
		p("= <== :100                mm%c. =\n",253);
		p("================================\n\n");
		
		p("==============================\n");
		p("=         Hect%crea:          =\n",160);
		p("==============================\n");
		p("= 1 Ha. = 1 Hm%c. = 10000 m%c. =\n",253,253);
		p("==============================\n\n");
		
		p("===========================\n");
		p("=          %crea:          =\n",181);
		p("===========================\n");
		p("= 1 a. = 1 dam. = 100 m%c. =\n",253);
		p("===========================\n\n");
		
		p("=================\n");
		p("=  Centi%crea:   =\n",160);
		p("=================\n");
		p("= 1 ca. = 1 m%c. =\n",253);
		p("=================\n\n");
		
		fprintf(archivo,"Medidas de superficie:\n");
		fprintf(archivo,"======================\n\n");		
		fprintf(archivo,"La unidad principal para medir superficies es el metro cuadrado.\n\n");		
		fprintf(archivo,"================================\n");
		fprintf(archivo,"= km².                ==> x100 =\n");
		fprintf(archivo,"=     hm².                     =\n");
		fprintf(archivo,"=         dam².                =\n");
		fprintf(archivo,"=              m².             =\n");
		fprintf(archivo,"=                 dm².         =\n");
		fprintf(archivo,"=                     cm².     =\n");
		fprintf(archivo,"= <== :100                mm². =\n");
		fprintf(archivo,"================================\n\n");		
		fprintf(archivo,"==============================\n");
		fprintf(archivo,"=         Hectárea:          =\n");
		fprintf(archivo,"==============================\n");
		fprintf(archivo,"= 1 Ha. = 1 Hm². = 10000 m². =\n");
		fprintf(archivo,"==============================\n\n");		
		fprintf(archivo,"===========================\n");
		fprintf(archivo,"=          Área:          =\n");
		fprintf(archivo,"===========================\n");
		fprintf(archivo,"= 1 a. = 1 dam. = 100 m². =\n");
		fprintf(archivo,"===========================\n\n");		
		fprintf(archivo,"=================\n");
		fprintf(archivo,"=  Centiárea:   =\n");
		fprintf(archivo,"=================\n");
		fprintf(archivo,"= 1 ca. = 1 m². =\n");
		fprintf(archivo,"=================\n\n");
				
		p("25 m%c. en mm%c. son: ",253,253);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
				
		fprintf(archivo,"25 m². en mm². son: %i.\n\n",opcion);
		if(opcion == 25000000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("----------------------------------------------\n");
			p("-                                            -\n");
			p("- Incorrecto.                                -\n");
			p("-                                            -\n");
			p("- 25 m%c. = 25000000 mm%c.                     -\n",253,253);
			p("-                                            -\n");
			p("- 25 m%c, 2500 dm%c, 250000 cm%c, 25000000 mm%c. -\n",253,253,253,253);
			p("-                                            -\n");
			p("----------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"----------------------------------------------\n");
			fprintf(archivo,"-                                            -\n");
			fprintf(archivo,"- 25 m². = 25000000 mm².                     -\n");
			fprintf(archivo,"-                                            -\n");
			fprintf(archivo,"- 25 m², 2500 dm², 250000 cm², 25000000 mm². -\n");
			fprintf(archivo,"-                                            -\n");
			fprintf(archivo,"----------------------------------------------\n\n");
		}
		p("80 hm%c. en cm%c. son: ",253,253);
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		
		fprintf(archivo,"80 hm². en cm². son: %f.\n\n",opcionf);
		if(opcionf == 8000000000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("---------------------------------------------------------------\n");
			p("-                                                             -\n");
			p("- Incorrecto.                                                 -\n");
			p("-                                                             -\n");
			p("- 80 hm%c. = 8000000000 cm%c.                                   -\n",253,253);
			p("-                                                             -\n");
			p("- 80 hm%c, 8000 dam%c, 800000 m%c, 80000000 dm%c, 8000000000 cm%c. -\n",253,253,253,253,253);
			p("-                                                             -\n");
			p("---------------------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"----------------------------------------------------------------\n");
			fprintf(archivo,"-                                                             -\n");
			fprintf(archivo,"- 80 hm². = 8000000000 cm².                                   -\n");
			fprintf(archivo,"-                                                             -\n");
			fprintf(archivo,"- 80 hm², 8000 dam², 800000 m², 80000000 dm², 8000000000 cm². -\n");
			fprintf(archivo,"-                                                             -\n");
			fprintf(archivo,"---------------------------------------------------------------\n\n");
		}
		p("0.6 km%c. en dm%c. son: ",253,253);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"0.6 km². en dm². son: %i.\n\n",opcion);
		if(opcion == 60000000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("--------------------------------------------------------\n");
			p("-                                                      -\n");
			p("- Incorrecto.                                          -\n");
			p("-                                                      -\n");
			p("- 0.6 km%c. = 60000000 dm%c.                             -\n",253,253);
			p("-                                                      -\n");
			p("- 0.6 km%c, 60 hm%c, 6000 dam%c, 600000 m%c, 60000000 dm%c. -\n",253,253,253,253,253);
			p("-                                                      -\n");
			p("--------------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"--------------------------------------------------------\n");
			fprintf(archivo,"-                                                      -\n");
			fprintf(archivo,"- 0.6 km². = 60000000 dm².                             -\n");
			fprintf(archivo,"-                                                      -\n");
			fprintf(archivo,"- 0.6 km², 60 hm², 6000 dam², 600000 m², 60000000 dm². -\n");
			fprintf(archivo,"-                                                      -\n");
			fprintf(archivo,"--------------------------------------------------------\n\n");
		}
		p("37.5 dm%c. en hm%c. son: ",253,253);
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		comprobar = 0.0000375;
		
		fprintf(archivo,"37.5 dm². en hm². son: %f.\n\n",opcionf);
		if(opcionf == comprobar) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("----------------------------------------------------\n");
			p("-                                                  -\n");
			p("- Incorrecto.                                      -\n");
			p("-                                                  -\n");
			p("- 37.5 dm%c. = 0.0000375 hm%c.                       -\n",253,253);
			p("-                                                  -\n");
			p("- 37.5 dm%c, 0.375 m%c, 0.00375 dam%c, 0.0000375 hm%c. -\n",253,253,253,253);
			p("-                                                  -\n");
			p("----------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"----------------------------------------------------\n");
			fprintf(archivo,"-                                                  -\n");
			fprintf(archivo,"- 37.5 dm². = 0.0000375 hm².                       -\n");
			fprintf(archivo,"-                                                  -\n");
			fprintf(archivo,"- 37.5 dm², 0.375 m², 0.00375 dam², 0.0000375 hm². -\n");
			fprintf(archivo,"-                                                  -\n");
			fprintf(archivo,"----------------------------------------------------\n\n");
		}
		p("0.1 m%c. en cm%c. son: ",253,253);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"0.1 m². en cm². son: %i.\n\n",opcion);
		if(opcion == 1000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("-----------------------------\n");
			p("-                           -\n");
			p("- Incorrecto.               -\n");
			p("-                           -\n");
			p("- 0.1 m%c. = 1000 cm%c.       -\n",253,253);
			p("-                           -\n");
			p("- 0.1 m%c, 10 dm%c, 1000 cm%c. -\n",253,253,253);
			p("-                           -\n");
			p("-----------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"-----------------------------\n");
			fprintf(archivo,"-                           -\n");
			fprintf(archivo,"- 0.1 m². = 1000 cm².       -\n");
			fprintf(archivo,"-                           -\n");
			fprintf(archivo,"- 0.1 m², 10 dm², 1000 cm². -\n");
			fprintf(archivo,"-                           -\n");
			fprintf(archivo,"-----------------------------\n\n");
		}
		p("2.4 km%c en dm%c son: ",253,253);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"2.4 km² en dm² son: %i.\n\n",opcion);
		if(opcion == 240000000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------\n");
			p("-                            -\n");
			p("- Incorrecto.                -\n");
			p("-                            -\n");
			p("- 24 km%c. = 2400000000 dm%c.  -\n",253,253);
			p("-                            -\n");
			p("- 24 km%c, 10 dm%c, 1000 dm%c.  -\n",253,253,253);
			p("-                            -\n");
			p("------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------\n");
			fprintf(archivo,"-                            -\n");
			fprintf(archivo,"- 24 km². = 2400000000 dm².  -\n");
			fprintf(archivo,"-                            -\n");
			fprintf(archivo,"- 24 km², 10 dm², 1000 dm².  -\n");
			fprintf(archivo,"-                            -\n");
			fprintf(archivo,"------------------------------\n\n");
		}
		fclose(archivo);
	}
	if(tema == 6) {
		FILE *archivo;
		archivo = fopen("Medidas de volumen.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n\n");
		}
		p("Medidas de volumen:\n");
		p("===================\n\n");
		
		p("La unidad principal para medir vol%cmenes es el metro c%cbico.\n\n",163,163);
		
		p("================================\n");
		p("= km%c.               ==> x1000 =\n",252);
		p("=     hm%c.                     =\n",252);
		p("=         dam%c.                =\n",252);
		p("=              m%c.             =\n",252);
		p("=                 dm%c.         =\n",252);
		p("=                     cm%c.     =\n",252);
		p("= <== :1000               mm%c. =\n",252);
		p("================================\n\n");
		
		fprintf(archivo,"Medidas de volumen:\n");
		fprintf(archivo,"===================\n\n");		
		fprintf(archivo,"La unidad principal para medir volúmenes es el metro cúbico.\n\n");		
		fprintf(archivo,"================================\n");
		fprintf(archivo,"= km³.               ==> x1000 =\n");
		fprintf(archivo,"=     hm³.                     =\n");
		fprintf(archivo,"=         dam³.                =\n");
		fprintf(archivo,"=              m³.             =\n");
		fprintf(archivo,"=                 dm³.         =\n");
		fprintf(archivo,"=                     cm³.     =\n");
		fprintf(archivo,"= <== :1000               mm³. =\n");
		fprintf(archivo,"================================\n\n");
		
		p("25 m%c. en mm%c. son: ",252,252);
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		
		fprintf(archivo,"25 m³. en mm³. son: %f.\n\n",opcionf);
		if(opcionf == 25000000000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("----------------------------------------------------\n");
			p("-                                                  -\n");
			p("- Incorrecto.                                      -\n");
			p("-                                                  -\n");
			p("- 25 m%c. = 25000000000 mm%c.                        -\n",252,252);
			p("-                                                  -\n");
			p("- 25 m%c, 25000 dm%c, 25000000 cm%c, 25000000000 mm%c. -\n",252,252,252,252);
			p("-                                                  -\n");
			p("----------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"-                                                  -\n");
			fprintf(archivo,"- 25 m³. = 25000000000 mm³.                        -\n");
			fprintf(archivo,"-                                                  -\n");
			fprintf(archivo,"- 25 m³, 25000 dm³, 25000000 cm³, 25000000000 mm³. -\n");
			fprintf(archivo,"-                                                  -\n");
			fprintf(archivo,"----------------------------------------------------\n\n");
		}
		p("80 hm%c. en cm%c. son: ",252,252);
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		
		fprintf(archivo,"80 hm³. en cm³. son: %f.\n\n",opcionf);
		if(opcionf == 80000000000000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("-------------------------------------------------------------------------\n");
			p("-                                                                       -\n");
			p("- Incorrecto.                                                           -\n");
			p("-                                                                       -\n");
			p("- 80 hm%c. = 80000000000000 cm%c.                                         -\n",252,252);
			p("-                                                                       -\n");
			p("- 80 hm%c, 80000 dam%c, 80000000 m%c, 80000000000 dm%c, 80000000000000 cm%c. -\n",252,252,252,252,252);
			p("-                                                                       -\n");
			p("-------------------------------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"-------------------------------------------------------------------------\n");
			fprintf(archivo,"-                                                                       -\n");
			fprintf(archivo,"- 80 hm³. = 80000000000000 cm³.                                         -\n");
			fprintf(archivo,"-                                                                       -\n");
			fprintf(archivo,"- 80 hm³, 80000 dam³, 80000000 m³, 80000000000 dm³, 80000000000000 cm³. -\n");
			fprintf(archivo,"-                                                                       -\n");
			fprintf(archivo,"-------------------------------------------------------------------------\n\n");
		}
		p("0.6 km%c. en dm%c. son: ",252,252);
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		
		fprintf(archivo,"0.6 km³. en dm³. son: %f.\n\n",opcionf);
		if(opcionf == 600000000000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------------------------------------\n");
			p("-                                                                -\n");
			p("- Incorrecto.                                                    -\n");
			p("-                                                                -\n");
			p("- 0.6 km%c. = 600000000000 dm%c.                                   -\n",252,252);
			p("-                                                                -\n");
			p("- 0.6 km%c, 600 hm%c, 600000 dam%c, 600000000 m%c, 600000000000 dm%c. -\n",252,252,252,252,252);
			p("-                                                                -\n");
			p("------------------------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------------------------------------------\n");
			fprintf(archivo,"-                                                                -\n");
			fprintf(archivo,"- 0.6 km³. = 600000000000 dm³.                                   -\n");
			fprintf(archivo,"-                                                                -\n");
			fprintf(archivo,"- 0.6 km³, 600 hm³, 600000 dam³, 600000000 m³, 600000000000 dm³. -\n");
			fprintf(archivo,"-                                                                -\n");
			fprintf(archivo,"------------------------------------------------------------------\n\n");
		}
		p("37.5 dm%c. en hm%c. son: ",252,252);
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		comprobar = 0.0000000375;
		
		fprintf(archivo,"37.5 dm³. en hm³. son: %f.\n\n",opcionf);
		if(opcionf == comprobar) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("----------------------------------------------------------\n");
			p("-                                                        -\n");
			p("- Incorrecto.                                            -\n");
			p("-                                                        -\n");
			p("- 37.5 dm%c. = 0.0000000375 hm%c.                          -\n",252,252);
			p("-                                                        -\n");
			p("- 37.5 dm%c, 0.0375 m%c, 0.0000375 dam%c, 0.0000000375 hm%c. -\n",252,252,252,252);
			p("-                                                        -\n");
			p("----------------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"----------------------------------------------------------\n");
			fprintf(archivo,"-                                                        -\n");
			fprintf(archivo,"- 37.5 dm³. = 0.0000000375 hm³.                          -\n");
			fprintf(archivo,"-                                                        -\n");
			fprintf(archivo,"- 37.5 dm³, 0.0375 m³, 0.0000375 dam³, 0.0000000375 hm³. -\n");
			fprintf(archivo,"-                                                        -\n");
			fprintf(archivo,"----------------------------------------------------------\n\n");
		}
		p("0.1 m%c. en cm%c. son: ",252,252);
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"0.1 m³. en cm³. son: %i.\n\n",opcion);
		if(opcion == 100000) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("--------------------------------\n");
			p("-                              -\n");
			p("- Incorrecto.                  -\n");
			p("-                              -\n");
			p("- 0.1 m%c. = 100000 cm%c.        -\n",252,252);
			p("-                              -\n");
			p("- 0.1 m%c, 100 dm%c, 100000 cm%c. -\n",252,252,252);
			p("-                              -\n");
			p("--------------------------------\n\n");
			
			fprintf(archivo,"- Incorrecto.                  -\n");
			fprintf(archivo,"--------------------------------\n");
			fprintf(archivo,"-                              -\n");
			fprintf(archivo,"- Incorrecto.                  -\n");
			fprintf(archivo,"-                              -\n");
			fprintf(archivo,"- 0.1 m³. = 100000 cm³.        -\n");
			fprintf(archivo,"-                              -\n");
			fprintf(archivo,"- 0.1 m³, 100 dm³, 100000 cm³. -\n");
			fprintf(archivo,"-                              -\n");
			fprintf(archivo,"--------------------------------\n\n");
		}
		p("24 km%c. en dm%c. son: ",252,252);
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		comprobar = 24000000000000;
		
		fprintf(archivo,"24 km³. en dm³. son: %f.\n\n",opcionf);
		if(opcionf == comprobar) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("-------------------------------------------------------------------------\n");
			p("-                                                                       -\n");
			p("- Incorrecto.                                                           -\n");
			p("-                                                                       -\n");
			p("- 24 km%c. = 24000000000000 dm%c.                                         -\n",252,252);
			p("-                                                                       -\n");
			p("- 24 km%c, 24000 hm%c, 24000000 dam%c, 24000000000 m%c, 24000000000000 dm%c. -\n",252,252,252,252,252);
			p("-                                                                       -\n");
			p("-------------------------------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"-------------------------------------------------------------------------\n");
			fprintf(archivo,"-                                                                       -\n");
			fprintf(archivo,"- 24 km³. = 24000000000000 dm³.                                         -\n");
			fprintf(archivo,"-                                                                       -\n");
			fprintf(archivo,"- 24 km³, 24000 hm³, 24000000 dam³, 24000000000 m³, 24000000000000 dm³. -\n");
			fprintf(archivo,"-                                                                       -\n");
			fprintf(archivo,"-------------------------------------------------------------------------\n\n");
		}
		fclose(archivo);
	}
	if(tema == 7) {
		FILE *archivo;
		archivo = fopen("Sistema inglés.doc","w");
		if(archivo == NULL) {
			p("No se ha podido abrir el archivo.\n\n");
		}
		p("Sistema ingl%cs:\n",130);
		p("===============\n\n");
		
		p("=============================================\n");
		p("=           Medidas de longitud:            =\n");
		p("=============================================\n");
		p("= Pulgada         = 2.54 cm.                =\n");
		p("= Pie             = 12 pulgadas = 30.48 cm. =\n");
		p("= Yarda           = 3 pies      = 91.44 cm. =\n");
		p("= Braza           = 2 yardas    = 1829 m.   =\n");
		p("= Milla terrestre = 880 brazas  = 1.609 km. =\n");
		p("= Milla n%cutica   = 1852 m.                 =\n",160);
		p("=============================================\n\n");
		
		p("===================================\n");
		p("=      Medidas de capacidad:      =\n");
		p("===================================\n");
		p("= Pinta (Gran Breta%ca) - 0.568 l. =\n",164);
		p("= Pinta (EEUU)         - 0.473 l. =\n");
		p("= Barril               - 159 l.   =\n");
		p("===================================\n\n");
		
		p("====================\n");
		p("= Medidas de masa: =\n");
		p("====================\n");
		p("= Onza - 28.3 g.   =\n");
		p("= Libra - 454 g.   =\n");
		p("====================\n\n");
		
		p("==========================\n");
		p("= Medidas de superficie: =\n");
		p("==========================\n");
		p("= Acre - 4047 m%c.        =\n",253);
		p("==========================\n\n");
		
		fprintf(archivo,"Sistema inglés:\n");
		fprintf(archivo,"===============\n\n");		
		fprintf(archivo,"=============================================\n");
		fprintf(archivo,"=           Medidas de longitud:            =\n");
		fprintf(archivo,"=============================================\n");
		fprintf(archivo,"= Pulgada         = 2.54 cm.                =\n");
		fprintf(archivo,"= Pie             = 12 pulgadas = 30.48 cm. =\n");
		fprintf(archivo,"= Yarda           = 3 pies      = 91.44 cm. =\n");
		fprintf(archivo,"= Braza           = 2 yardas    = 1829 m.   =\n");
		fprintf(archivo,"= Milla terrestre = 880 brazas  = 1.609 km. =\n");
		fprintf(archivo,"= Milla náutica   = 1852 m.                 =\n");
		fprintf(archivo,"=============================================\n\n");		
		fprintf(archivo,"===================================\n");
		fprintf(archivo,"=      Medidas de capacidad:      =\n");
		fprintf(archivo,"===================================\n");
		fprintf(archivo,"= Pinta (Gran Bretaña) - 0.568 l. =\n");
		fprintf(archivo,"= Pinta (EEUU)         - 0.473 l. =\n");
		fprintf(archivo,"= Barril               - 159 l.   =\n");
		fprintf(archivo,"===================================\n\n");		
		fprintf(archivo,"====================\n");
		fprintf(archivo,"= Medidas de masa: =\n");
		fprintf(archivo,"====================\n");
		fprintf(archivo,"= Onza - 28.3 g.   =\n");
		fprintf(archivo,"= Libra - 454 g.   =\n");
		fprintf(archivo,"====================\n\n");		
		fprintf(archivo,"==========================\n");
		fprintf(archivo,"= Medidas de superficie: =\n");
		fprintf(archivo,"==========================\n");
		fprintf(archivo,"= Acre - 4047 m².        =\n");
		fprintf(archivo,"==========================\n\n");		
		
		p("5 yardas en cm. son: ");
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		comprobar = 457.2;
		
		fprintf(archivo,"5 yardas en cm. son: %f.\n\n",opcionf);
		if(opcionf == comprobar) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("---------------------------------------------\n");
			p("-                                           -\n");
			p("- Incorrecto.                               -\n");
			p("-                                           -\n");
			p("- 1 yarda = 91.44 cm.                       -\n");
			p("-                                           -\n");
			p("- 5 yarda = x cm.                           -\n");
			p("-                                           -\n");
			p("- 5 yarda x 91.44 cm. / 1 yarda = 457.2 cm. -\n");
			p("-                                           -\n");
			p("---------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"---------------------------------------------\n");
			fprintf(archivo,"-                                           -\n");
			fprintf(archivo,"- 1 yarda = 91.44 cm.                       -\n");
			fprintf(archivo,"-                                           -\n");
			fprintf(archivo,"- 5 yarda = x cm.                           -\n");
			fprintf(archivo,"-                                           -\n");
			fprintf(archivo,"- 5 yarda x 91.44 cm. / 1 yarda = 457.2 cm. -\n");
			fprintf(archivo,"-                                           -\n");
			fprintf(archivo,"---------------------------------------------\n\n");
		}
		p("3218 km. en pies son: ");
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		comprobar = 10557.74;
		
		fprintf(archivo,"3218 km. en pies son: %f.\n\n",opcionf);
		if(opcionf == comprobar) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("---------------------------------------------------\n");
			p("-                                                 -\n");
			p("- Incorrecto.                                     -\n");
			p("-                                                 -\n");
			p("- 1 pie = 30.48 cm.                               -\n");
			p("-                                                 -\n");
			p("- 1 pie = 0.0003048 km.                           -\n");
			p("-                                                 -\n");
			p("- 0.0003048 km. = 1 pie                           -\n");
			p("-                                                 -\n");
			p("- 3218 km.      = X pie                           -\n");
			p("-                                                 -\n");
			p("- 3218 km. x 1 pie / 0.0003048 km. = 10557.74 km  -\n");
			p("-                                                 -\n");
			p("---------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"---------------------------------------------------\n");
			fprintf(archivo,"-                                                 -\n");
			fprintf(archivo,"- 1 pie = 30.48 cm.                               -\n");
			fprintf(archivo,"-                                                 -\n");
			fprintf(archivo,"- 1 pie = 0.0003048 km.                           -\n");
			fprintf(archivo,"-                                                 -\n");
			fprintf(archivo,"- 0.0003048 km. = 1 pie                           -\n");
			fprintf(archivo,"-                                                 -\n");
			fprintf(archivo,"- 3218 km.      = X pie                           -\n");
			fprintf(archivo,"-                                                 -\n");
			fprintf(archivo,"- 3218 km. x 1 pie / 0.0003048 km. = 10557.74 km  -\n");
			fprintf(archivo,"-                                                 -\n");
			fprintf(archivo,"---------------------------------------------------\n\n");
		}
		p("3 pintas(GB) en cl. son: ");
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		comprobar = 170.4;
		
		fprintf(archivo,"3 pintas(GB) en cl. son: %f.\n\n",opcionf);
		if(opcionf == comprobar) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("------------------------------------------------------\n");
			p("-                                                    -\n");
			p("- Incorrecto.                                        -\n");
			p("-                                                    -\n");
			p("- 1 Pinta (GB) = 0.568 l.                            -\n");
			p("-                                                    -\n");
			p("- 1 Pinta (GB) = 56.8 cl.                            -\n");
			p("-                                                    -\n");
			p("- 3 Pinta (GB) = X                                   -\n");
			p("-                                                    -\n");
			p("- 3 Pinta (GB) x 56.8 cl. / 1 Pinta (GB) = 170.4 cl. -\n");
			p("-                                                    -\n");
			p("------------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"------------------------------------------------------\n");
			fprintf(archivo,"-                                                    -\n");
			fprintf(archivo,"- 1 Pinta (GB) = 0.568 l.                            -\n");
			fprintf(archivo,"-                                                    -\n");
			fprintf(archivo,"- 1 Pinta (GB) = 56.8 cl.                            -\n");
			fprintf(archivo,"-                                                    -\n");
			fprintf(archivo,"- 3 Pinta (GB) = X                                   -\n");
			fprintf(archivo,"-                                                    -\n");
			fprintf(archivo,"- 3 Pinta (GB) x 56.8 cl. / 1 Pinta (GB) = 170.4 cl. -\n");
			fprintf(archivo,"-                                                    -\n");
			fprintf(archivo,"------------------------------------------------------\n\n");
		}
		p("2067 l. en barriles son: ");
		fflush(stdin);
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"2067 l. en barriles son: %i.\n\n",opcion);
		if(opcion == 13) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("---------------------------------------------\n");
			p("-                                           -\n");
			p("- Incorrecto.                               -\n");
			p("-                                           -\n");
			p("- 2067 l. = 13 barriles                     -\n");
			p("-                                           -\n");
			p("- 159 l. = 1 barril                         -\n");
			p("- 2067 l. = x barriles                      -\n");
			p("- 2067 l. x 1 barril / 159 l. = 13 barriles -\n");
			p("---------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"---------------------------------------------\n");
			fprintf(archivo,"-                                           -\n");
			fprintf(archivo,"- 2067 l. = 13 barriles                     -\n");
			fprintf(archivo,"-                                           -\n");
			fprintf(archivo,"- 159 l. = 1 barril                         -\n");
			fprintf(archivo,"- 2067 l. = x barriles                      -\n");
			fprintf(archivo,"- 2067 l. x 1 barril / 159 l. = 13 barriles -\n");
			fprintf(archivo,"---------------------------------------------\n\n");
		}
		p("4.086 kg. en libras son: ");
		s("%i",&opcion);
		p("\n");
		
		fprintf(archivo,"4.086 kg. en libras son: %i.\n\n",opcion);
		if(opcion == 9) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("----------------------------------------------\n");
			p("-                                            -\n");
			p("- Incorrecto.                                -\n");
			p("-                                            -\n");
			p("- 4.086 kg. = 9 libras                       -\n");
			p("-                                            -\n");
			p("- 454 g.    = 1 libra                        -\n");
			p("-                                            -\n");
			p("- 0.454 kg. = 1 libra                        -\n");
			p("- 4.086 kg. = x libras                       -\n");
			p("-                                            -\n");
			p("- 4.086 kg. x 1 libra / 0.454 kg. = 9 libras -\n");
			p("-                                            -\n");
			p("----------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"----------------------------------------------\n");
			fprintf(archivo,"-                                            -\n");
			fprintf(archivo,"- 4.086 kg. = 9 libras                       -\n");
			fprintf(archivo,"-                                            -\n");
			fprintf(archivo,"- 454 g.    = 1 libra                        -\n");
			fprintf(archivo,"-                                            -\n");
			fprintf(archivo,"- 0.454 kg. = 1 libra                        -\n");
			fprintf(archivo,"- 4.086 kg. = x libras                       -\n");
			fprintf(archivo,"-                                            -\n");
			fprintf(archivo,"- 4.086 kg. x 1 libra / 0.454 kg. = 9 libras -\n");
			fprintf(archivo,"-                                            -\n");
			fprintf(archivo,"----------------------------------------------\n\n");
		}
		p("5 acres en dam%c. son: ",253);
		fflush(stdin);
		s("%f",&opcionf);
		p("\n");
		comprobar = 202.35;
		
		fprintf(archivo,"5 acres en dam². son: %f.\n\n",opcionf);
		if(opcionf == comprobar) {
			p("-------------\n");
			p("-           -\n");
			p("- Correcto. -\n");
			p("-           -\n");
			p("-------------\n\n");
			
			fprintf(archivo,"Correcto.\n\n");
		} else {
			p("-------------------------------------------------\n");
			p("-                                               -\n");
			p("- Incorrecto.                                   -\n");
			p("-                                               -\n");
			p("- 5 acres = 202.35 dam%c.                        -\n",253);
			p("-                                               -\n");
			p("- 1 acre = 4047 m%c.                             -\n",253);
			p("-                                               -\n");
			p("- 1 acre  = 40.47 dam%c.                         -\n",253);
			p("- 5 acres = x dam%c.                             -\n",253);
			p("-                                               -\n");
			p("- 5 acres x 40.47 dam%c. / 1 acre = 202.35 dam%c. -\n",253,253);
			p("-                                               -\n");
			p("-------------------------------------------------\n\n");
			
			fprintf(archivo,"Incorrecto.\n");
			fprintf(archivo,"-------------------------------------------------\n");
			fprintf(archivo,"-                                               -\n");
			fprintf(archivo,"- 5 acres = 202.35 dam².                        -\n");
			fprintf(archivo,"-                                               -\n");
			fprintf(archivo,"- 1 acre = 4047 m².                             -\n");
			fprintf(archivo,"-                                               -\n");
			fprintf(archivo,"- 1 acre  = 40.47 dam².                         -\n");
			fprintf(archivo,"- 5 acres = x dam².                             -\n");
			fprintf(archivo,"-                                               -\n");
			fprintf(archivo,"- 5 acres x 40.47 dam². / 1 acre = 202.35 dam². -\n");
			fprintf(archivo,"-                                               -\n");
			fprintf(archivo,"-------------------------------------------------\n\n");
		}
		fclose(archivo);
	}
}
