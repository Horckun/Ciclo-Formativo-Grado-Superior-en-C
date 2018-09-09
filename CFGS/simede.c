void simede() {
	
	int opcion;
	float opcionf,comprobar;
	
	FILE *archivo;
	archivo = fopen("El sistema métrico decimal.doc","w");
	if(archivo == NULL) {
		p("No se ha podido abrir el archivo.\n");
	}
		
	p("El Sistema m%ctrico decimal.\n",130);
	p("===========================\n\n");
	
	p("Medidas y magnitudes.\n");
	p("---------------------\n\n");
		
	p("Una magnitud es cualquier propiedad que se pueda medir, y medir, es comparar una magnitud con otra. La magnitud es el n%cmero de veces que la magnitud contiene la unidad.\n\n",163);
		
	p("Ejemplo:\n");
	p("--------\n\n");
		
	p("Si queremos medir la longitud de un pasillo, en primer lugar debemos elegir la unidad. En este caso la m%cs apropiada ser%ca el metro.\n\n",160,161);
		
	system("pause");
	p("\n");
	
	p("Sistema m%ctrico decimal.\n",130);
	p("------------------------\n\n");
		
	p("El sistema m%ctrico decimal es un sistema de unidades en el cual los m%cltiplos y subm%cltiplos de una unidad de medida est%cn relacionadas entre s%c por m%cltiplos o subm%cltiplos de 10.\n\n",130,163,163,160,161,163,163);
	p("El sistema m%ctrico decimal lo usamos en la medida de las siguientes magnitudes.\n\n",130);
		
	p("- Longitud.\n");
	p("- Masa.\n");
	p("- Capacidad.\n");
	p("- Superficie.\n");
	p("- Volumen.\n\n");
		
	p("Las unidades de tiempo no pertenecen al sistema m%ctrico decimal puesto que van por m%cltiplos y subm%cltiplos de 60. El tiempo es una magnitud del Sistema m%ctrico Sexagesimal.\n\n",130,163,163,130);
		
	system("pause");
	p("\n");
	
	p("Di si son magnitudes o no.\n");
	p("--------------------------\n\n");
	p("La distancia entre dos puntos.\n\n");
	p("[1] - Si.\n");
	p("[2] - No.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"El Sistema métrico decimal.\n");
	fprintf(archivo,"===========================\n\n");
	fprintf(archivo,"Medidas y magnitudes.\n");
	fprintf(archivo,"---------------------\n\n");
	fprintf(archivo,"Una magnitud es cualquier propiedad que se pueda medir, y medir, es comparar una magnitud con otra. La magnitud es el número de veces que la magnitud contiene la unidad.\n\n");
	fprintf(archivo,"Ejemplo:\n");
	fprintf(archivo,"--------\n\n");
	fprintf(archivo,"Si queremos medir la longitud de un pasillo, en primer lugar debemos elegir la unidad. En este caso la más apropiada sería el metro.\n\n");
	
	fprintf(archivo,"Sistema métrico decimal.\n");
	fprintf(archivo,"------------------------\n\n");
		
	fprintf(archivo,"El sistema métrico decimal es un sistema de unidades en el cual los múltiplos y submúltiplos de una unidad de medida están relacionadas entre sí por múltiplos o submúltiplos de 10.\n\n");
	fprintf(archivo,"El sistema métrico decimal lo usamos en la medida de las siguientes magnitudes.\n\n");
		
	fprintf(archivo,"- Longitud.\n");
	fprintf(archivo,"- Masa.\n");
	fprintf(archivo,"- Capacidad.\n");
	fprintf(archivo,"- Superficie.\n");
	fprintf(archivo,"- Volumen.\n\n");
		
	fprintf(archivo,"Las unidades de tiempo no pertenecen al sistema métrico decimal puesto que van por múltiplos y submúltiplos de 60. El tiempo es una magnitud del Sistema métrico Sexagesimal.\n\n");
	
	fprintf(archivo,"Di si son magnitudes o no.\n");
	fprintf(archivo,"--------------------------\n\n");
	fprintf(archivo,"La distancia entre dos puntos.\n\n");
	fprintf(archivo,"[1] - Si.\n");
	fprintf(archivo,"[2] - No.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
		
	if(opcion == 1) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
			
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("------------------------------------------------------------------------------------------------------------\n");
		p("- Incorrecto.                                                                                              -\n");
		p("-                                                                                                          -\n");
		p("- La distancia entre dos puntos es un valor asociado a una propiedad f%csica, por lo tanto, se puede medir. -\n",161);
		p("-                                                                                                          -\n");
		p("------------------------------------------------------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"La distancia entre dos puntos es un valor asociado a una propiedad física, por lo tanto, se puede medir.\n\n");
	}
	
	p("El amor.\n\n");
	p("[1] - Si.\n");
	p("[2] - No.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
		
	fprintf(archivo,"El amor.\n\n");
	fprintf(archivo,"[1] - Si.\n");
	fprintf(archivo,"[2] - No.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	if(opcion == 2) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
			
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("-------------------------------------------------------------\n");
		p("-                                                           -\n");
		p("- Incorrecto.                                               -\n");
		p("-                                                           -\n");
		p("- El amor no es nada f%csico, con lo cual, no puede medirse. -\n",161);
		p("-                                                           -\n");
		p("-------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"El amor no es nada físico, con lo cual, no puede medirse.\n\n");
	}
	
	p("Poder bailar.\n\n");
	p("[1] - Si.\n");
	p("[2] - No.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Poder bailar.\n\n");
	fprintf(archivo,"[1] - Si.\n");
	fprintf(archivo,"[2] - No.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	if(opcion == 2) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("--------------------------------------------------------------------------------------------------------------\n");
		p("-                                                                                                            -\n");
		p("- Incorrecto.                                                                                                -\n");
		p("-                                                                                                            -\n");
		p("- El poder bailar no es nada que se pueda agarrar ni tocar, es una habilidad, con lo cual, no puede medirse. -\n");
		p("-                                                                                                            -\n");
		p("--------------------------------------------------------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"El poder bailar no es nada que se pueda agarrar ni tocar, es una habilidad, con lo cual, no puede medirse.\n\n");
	}
	
	p("La capacidad de un cubo.\n\n");
	p("[1] - Si.\n");
	p("[2] - No.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"La capacidad de un cubo.\n\n");
	fprintf(archivo,"[1] - Si.\n");
	fprintf(archivo,"[2] - No.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	if(opcion == 1) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("----------------------------------------------------------------------------------------\n");
		p("-                                                                                      -\n");
		p("- Incorrecto.                                                                          -\n");
		p("-                                                                                      -\n");
		p("- Un cubo es un objeto f%csico de tres dimensiones, al tener dimensi%cn, se puede medir. -\n",161,162);
		p("-                                                                                      -\n");
		p("----------------------------------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Un cubo es un objeto físico de tres dimensiones, al tener dimensión, se puede medir.\n\n");
	}
	
	p("Elige la unidad m%cs adecuada.\n",160);
	p("--------------------------\n\n");
	p("Altura de un %crbol.\n\n",160);
	p("[1] - Cent%cmetro.\n",161);
	p("[2] - Metro.\n");
	p("[3] - Kil%cmetro.\n\n",162);
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Elige la unidad más adecuada.\n");
	fprintf(archivo,"--------------------------\n\n");
	fprintf(archivo,"Altura de un árbol.\n\n");
	fprintf(archivo,"[1] - Centímetro.\n");
	fprintf(archivo,"[2] - Metro.\n");
	fprintf(archivo,"[3] - Kilómetro.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	if(opcion == 2) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("-------------------------------------------------------------------------------\n");
		p("-                                                                             -\n");
		p("- S%c que puede medirse en esa unidad, pero es m%cs correcto medirlo en metros. -\n",161,160);
		p("-                                                                             -\n");
		p("-------------------------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Si que puede medirse en esa unidad, pero es más correcto medirlo en metros.\n\n");
	}
	
	p("Capacidad de una botella.\n\n");
	p("[1] - Centilitro.\n");
	p("[2] - Mililitro.\n");
	p("[3] - Litro.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Capacidad de una botella.\n\n");
	fprintf(archivo,"[1] - Centilitro.\n");
	fprintf(archivo,"[2] - Mililitro.\n");
	fprintf(archivo,"[3] - Litro.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	if(opcion == 3) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("-------------------------------------------------------------------------------\n");
		p("-                                                                             -\n");
		p("- S%c que puede medirse en esa unidad, pero es m%cs correcto medirlo en litros. -\n",161,160);
		p("-                                                                             -\n");
		p("-------------------------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Si que puede medirse en esa unidad, pero es más correcto medirlo en litros.\n\n");
	}
	
	p("El peso de un coche.\n\n");
	p("[1] - Gramo.\n");
	p("[2] - Kilogramo.\n");
	p("[3] - Tonelada.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"El peso de un coche.\n\n");
	fprintf(archivo,"[1] - Gramo.\n");
	fprintf(archivo,"[2] - Kilogramo.\n");
	fprintf(archivo,"[3] - Tonelada.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	if(opcion == 3) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("----------------------------------------------------------------------------------\n");
		p("-                                                                                -\n");
		p("- S%c que puede medirse en esa unidad, pero es m%cs correcto medirlo en toneladas. -\n",161,160);
		p("-                                                                                -\n");
		p("----------------------------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Si que puede medirse en esa unidad, pero es más correcto medirlo en toneladas.\n\n");
	}
	
	fprintf(archivo,"Distancia entre países.\n\n");
	fprintf(archivo,"[1] - Milímetros.\n");
	fprintf(archivo,"[2] - Metros.\n");
	fprintf(archivo,"[3] - Kilómetros.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	if(opcion == 3) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("-----------------------------------------------------------------------------------\n");
		p("-                                                                                 -\n");
		p("- S%c que puede medirse en esa unidad, pero es m%cs correcto medirlo en kil%cmetros. -\n",161,160,162);
		p("-                                                                                 -\n");
		p("-----------------------------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Si que puede medirse en esa unidad, pero es más correcto medirlo en kilómetros.\n\n");
	}
	
	p("Indica a qu%c sistema m%ctrico pertenece.\n",130,130);
	p("--------------------------\n\n");
	
	p("Un pasillo mide 10 metros.\n\n");
	p("[1] - Sistema m%ctrico decimal.\n",130);
	p("[2] - Sistema ingl%cs.\n",130);
	p("[3] - Sistema sexagonal.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Indica a qué sistema métrico pertenece.\n");
	fprintf(archivo,"--------------------------\n\n");
	fprintf(archivo,"Un pasillo mide 10 metros.\n\n");
	fprintf(archivo,"[1] - Sistema métrico decimal.\n");
	fprintf(archivo,"[2] - Sistema inglés.\n");
	fprintf(archivo,"[3] - Sistema sexagonal.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	if(opcion == 1) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("-----------------------------------------------------------------------------------\n");
		p("-                                                                                 -\n");
		p("- Incorrecto.                                                                     -\n");
		p("-                                                                                 -\n");
		p("- Debido a que un pasillo es algo f%csico, se mide con el sistema m%ctrico decimal. -\n",161,130);
		p("-                                                                                 -\n");
		p("-----------------------------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Debido a que un pasillo es algo físico, se mide con el sistema métrico decimal.\n\n");
	}
	
	p("Son las 12 de la noche.\n\n");
	p("[1] - Sistema m%ctrico decimal.\n",130);
	p("[2] - Sistema ingl%cs.\n",130);
	p("[3] - Sistema sexagonal.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Son las 12 de la noche.\n\n");
	fprintf(archivo,"[1] - Sistema métrico decimal.\n");
	fprintf(archivo,"[2] - Sistema inglés.\n");
	fprintf(archivo,"[3] - Sistema sexagonal.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	if(opcion == 3) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("-------------------------------------------------------------------------------------------------------------\n");
		p("-                                                                                                           -\n");
		p("- Incorrecto.                                                                                               -\n");
		p("-                                                                                                           -\n");
		p("- Pertenece al sistema sexagonal puesto que est%cn relacionadas entre s%c por m%cltiplos y subm%cltiplos de 60. -\n",160,161,163,163);
		p("-                                                                                                           -\n");
		p("-------------------------------------------------------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Pertenece al sistema sexagonal puesto que están relacionadas entre sí por múltiplos y submúltiplos de 60.\n\n");
	}
		
	p("Un %cngulo de 90 grados.\n\n",160);
	p("[1] - Sistema m%ctrico decimal.\n",130);
	p("[2] - Sistema ingl%cs.\n",130);
	p("[3] - Sistema sexagonal.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Un ángulo de 90 grados.\n\n");
	fprintf(archivo,"[1] - Sistema métrico decimal.\n");
	fprintf(archivo,"[2] - Sistema inglés.\n");
	fprintf(archivo,"[3] - Sistema sexagonal.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	if(opcion == 3) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("------------------------------------------------------------------------\n");
		p("-                                                                      -\n");
		p("- Incorrecto.                                                          -\n");
		p("-                                                                      -\n");
		p("- Los grados, al igual que las horas, pertenecen al sistema sexagonal. -\n");
		p("-                                                                      -\n");
		p("------------------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Los grados, al igual que las horas, pertenecen al sistema sexagonal.\n\n");
	}
		
	p("Una pantalla de 40 pulgadas.\n\n");
	p("[1] - Sistema m%ctrico decimal.\n",130);
	p("[2] - Sistema ingl%cs.\n",130);
	p("[3] - Sistema sexagonal.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Una pantalla de 40 pulgadas.\n\n");
	fprintf(archivo,"[1] - Sistema métrico decimal.\n");
	fprintf(archivo,"[2] - Sistema inglés.\n");
	fprintf(archivo,"[3] - Sistema sexagonal.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 2) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("---------------------------------\n");
		p("-                               -\n");
		p("- Incorrecto.                   -\n");
		p("-                               -\n");
		p("- Es un sistema m%ctrico ingl%cs. -\n",130,130);
		p("-                               -\n");
		p("---------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Es un sistema métrico inglés.\n\n");
	}
	
	p("Un jard%cn de 5 yardas.\n\n",161);
	p("[1] - Sistema m%ctrico decimal.\n",130);
	p("[2] - Sistema ingl%cs.\n",130);
	p("[3] - Sistema sexagonal.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Un jardín de 5 yardas.\n\n");
	fprintf(archivo,"[1] - Sistema métrico decimal.\n");
	fprintf(archivo,"[2] - Sistema inglés.\n");
	fprintf(archivo,"[3] - Sistema sexagonal.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 2) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("---------------------------------\n");
		p("-                               -\n");
		p("- Incorrecto.                   -\n");
		p("-                               -\n");
		p("- Es un sistema m%ctrico ingl%cs. -\n",130);
		p("-                               -\n");
		p("---------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Es un sistema métrico inglés.\n\n");
	}
		
	p("3 kilos de manzanas.\n\n");
	p("[1] - Sistema m%ctrico decimal.\n",130);
	p("[2] - Sistema ingl%cs.\n",130);
	p("[3] - Sistema sexagonal.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"3 kilos de manzanas.\n\n");
	fprintf(archivo,"[1] - Sistema métrico decimal.\n");
	fprintf(archivo,"[2] - Sistema inglés.\n");
	fprintf(archivo,"[3] - Sistema sexagonal.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 1) {
		p("-------------\n");
		p("-           -\n");
		p("- Correcto. -\n");
		p("-           -\n");
		p("-------------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("----------------------------------------------------------------------------------\n");
		p("-                                                                                -\n");
		p("- Incorrecto.                                                                    -\n");
		p("-                                                                                -\n");
		p("- Es un sistema m%ctrico decimal puesto que puedes coger las manzanas y pesarlas. -\n",130);
		p("-                                                                                -\n");
		p("----------------------------------------------------------------------------------\n\n");
			
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Es un sistema métrico decimal puesto que puedes coger las manzanas y pesarlas.\n\n");
	}
	fclose(archivo);
	
	int tema,continuar;
	
	do {
		do {
			p("El sistema m%ctrico decimal:\n",130);
			p("===========================\n\n");
			p("[1] - Medidas complejas.\n");
			p("[2] - Medidas de longitud.\n");
			p("[3] - Medidas de masa.\n");
			p("[4] - Medidas de capacidad.\n");
			p("[5] - Medidas de superficie.\n");
			p("[6] - Medidas de volumen.\n");
			p("[7] - El Sistema ingl%cs.\n\n",130);
			p("Tema: ");
			fflush(stdin);
			s("%i",&tema);
			p("\n");
		} while(tema < 1 || tema > 7);
		switch(tema) {
			case 1:
				simedet(tema);
				break;
			case 2:
				simedet(tema);
				break;
			case 3:
				simedet(tema);
				break;
			case 4:
				simedet(tema);
				break;
			case 5:
				simedet(tema);
				break;
			case 6:
				simedet(tema);
				break;
			case 7:
				simedet(tema);
				break;
			default:
				p("No se ha seleccionado una opci%cn v%clida.\n\n",162,160);
		}
		p("%cQui%cres continuar con El sistema m%ctrico decimal?\n",168,130,130);
		p("==================================================\n\n");
		p("[1] - Continuar.\n");
		p("[2] - Salir de El sistema m%ctrico decimal.\n\n",130);
		p("%cContinuar? ",168);
		fflush(stdin);
		s("%i",&continuar);
		p("\n");
	} while(continuar == 1);
}
