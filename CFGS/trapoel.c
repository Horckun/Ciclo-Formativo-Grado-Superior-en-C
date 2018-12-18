void trapoel() {
	FILE *archivo;
	archivo = fopen("Trabajo y potencia el�ctricos. Efecto Joule.doc","w");
	if(archivo == NULL) {
		p("No se ha podido abrir el archivo.\n\n");
	}
	
	p("Trabajo y potencia el%cctric. Efecto Joule:\n",130);
	p("===========================================\n\n");
	
	p("En los circuitos el%cctricos, la energ%ca potencial el%cctrica provoca el movimiento de cargas. Este movimiento, las dota de energ%ca cin%ctica que posteriormente puede transformarse en energ%ca mec%cnica para mover motores, energ%ca lum%cnica para encender luces, etc.\n\n",130,161,130,161,130,161,160,161,161);
	
	p("Sin embargo, una parte importante de la energ%ca cin%ctica de las cargas se reduce debido a los continuos choques que se producen en los %ctomos mientras las cargas circulan de un lado a otro, provocando que parte de esta energ%ca se disipe en forma de calor. A este fen%cmeno se le denomina efecto Joule, en honor al F%csico brit%cnico James Joule (1818-1889).\n\n",161,130,160,161,162,161,610);
	
	p("- Trabajo y energ%ca el%cctrica en un circuito.\n",161,130);	
	p("- Potencia de la corriente el%cctrica.\n",130);
	p("- El efecto Joule.\n\n");
	
	system("pause");
	p("\n");
	
	p(" - Trabajo y energ%ca el%cctrica de un circuito:\n",161,130);
	p(" ---------------------------------------------\n\n");
	
	p("  Cualquier carga que se mueve a trav%cs de un conductor desde un punto A hasta otro B en el que existe una diferencia de potencial el%cctrico entre dichos puntos lo hace debido a la acci%cn de un campo el%cctrico. Dicho campo realiza un trabajo el%cctrico para desplazar dicha carga desde A hasta B.\n\n",130,130,162,130,130);
	
	system("pause");
	p("\n");
	
	p(" - Potencia de la corriente el%cctrica:\n",130);
	p(" -------------------------------------\n\n");
	
	p("  Cuando hablamos del trabajo, comentamos que en ocasiones importa m%cs la rapidez con la que se desarrolla un trabajo que el trabajo en s%c mismo. Por esta raz%cn, se emplea una nueva magnitud denominada potencia el%cctrica.\n\n",160,161,162,130);
	
	system("pause");
	p("\n");
	
	p(" - Ley de Joule y corriente el%cctrica:\n",130);
	p(" -------------------------------------\n\n");
	
	p("  La energ%ca el%cctrica se puede transformar en otro tipo de energ%ca, pero siempre una parte de la energ%ca se pierde en forma de calor.\n\n",161,130,161,161);
	
	p("  Si consideramos la expresi%cn de la ley de Ohm (V = I � R), y la aplicamos sobre la del trabajo el%cctrico, obtenemos que:\n\n",162,130);
	
	p("   W = I%c x R x t\n\n",253);
	
	p("  Teniendo en cuenta esta ecuaci%cn y sabiendo que 1 Julio es equivalente a 0.24 calor%cas, podemos definir la ley de Joule de la siguiente forma:\n\n",162,161);
	
	system("pause");
	p("\n");
	
	p("   La ley de Joule, tambi%cn conocida como efecto Joule, establece que el calor desarrollado cuando una corriente el%cctrica atraviesa un conductor es proporcional al cuadrado de la intensidad, a su resistencia y al tiempo durante el cual circula.\n\n",130,130);
	
	p("    Q = 0.24 x I%c x R x t\n\n",253);
	
	p("   Donde:\n\n");
	
	p("   Q: es el calor, expresado en calor%cas que desprende el conductor. Recuerda que 1 Julio es equivalente a 0.24 calor%cas, con lo que la f%crmula anterior puede ser reescrita en unidades del Sistema Internacional.\n",161,161,162);
	p("   I: Es la corriente el%cctrica, expresada en amperios.\n",130);
	p("   R: Es la resistencia el%cctrica, expresada en ohmios.\n",130);
	p("   t: Es el tiempo, expresado en segundos.\n\n");
	
	fprintf(archivo,"Trabajo y potencia el�ctrica. Efecto Joule:\n");
	fprintf(archivo,"===========================================\n\n");
	fprintf(archivo,"En los circuitos el�ctricos, la energ�a potencial el�ctrica provoca el movimiento de cargas. Este movimiento, las dota de energ�a cin�tica que posteriormente puede transformarse en energ�a mec�nica para mover motores, energ�a lum�nica para encender luces, etc.\n\n");
	fprintf(archivo,"Sin embargo, una parte importante de la energ�a cin�tica de las cargas se reduce debido a los continuos choques que se producen en los �tomos mientras las cargas circulan de un lado a otro, provocando que parte de esta energ�a se disipe en forma de calor. A este fen�meno se le denomina efecto Joule, en honor al F�sico brit�nico James Joule (1818-1889).\n\n");
	fprintf(archivo,"- Trabajo y energ�a el�ctrica en un circuito.\n");
	fprintf(archivo,"- Potencia de la corriente el�ctrica.\n");
	fprintf(archivo,"- El efecto Joule.\n\n");
	fprintf(archivo," - Trabajo y energ�a el�ctrica de un circuito:\n");
	fprintf(archivo," ---------------------------------------------\n\n");
	fprintf(archivo,"  Cualquier carga que se mueve a trav�s de un conductor desde un punto A hasta otro B en el que existe una diferencia de potencial el�ctrico entre dichos puntos lo hace debido a la acci�n de un campo el�ctrico. Dicho campo realiza un trabajo el�ctrico para desplazar dicha carga desde A hasta B.\n\n");
	fprintf(archivo," - Potencia de la corriente el�ctrica:\n");
	fprintf(archivo," -------------------------------------\n\n");
	fprintf(archivo,"  Cuando hablamos del trabajo, comentamos que en ocasiones importa m�s la rapidez con la que se desarrolla un trabajo que el trabajo en s� mismo. Por esta raz�n, se emplea una nueva magnitud denominada potencia el�ctrica.\n\n");
	fprintf(archivo," - Ley de Joule y corriente el�ctrica:\n");
	fprintf(archivo," -------------------------------------\n\n");
	fprintf(archivo,"  La energ�a el�ctrica se puede transformar en otro tipo de energ�a, pero siempre una parte de la energ�a se pierde en forma de calor.\n\n");
	fprintf(archivo,"  Si consideramos la expresi�n de la ley de Ohm (V = I � R), y la aplicamos sobre la del trabajo el�ctrico, obtenemos que:\n\n");
	fprintf(archivo,"   W = I� x R x t\n\n");
	fprintf(archivo,"  Teniendo en cuenta esta ecuaci�n y sabiendo que 1 Julio es equivalente a 0.24 calor�as, podemos definir la ley de Joule de la siguiente forma:\n\n");
	fprintf(archivo,"   La ley de Joule, tambi�n conocida como efecto Joule, establece que el calor desarrollado cuando una corriente el�ctrica atraviesa un conductor es proporcional al cuadrado de la intensidad, a su resistencia y al tiempo durante el cual circula.\n\n");
	fprintf(archivo,"    Q = 0.24 x I� x R x t\n\n");
	fprintf(archivo,"   Donde:\n\n");
	fprintf(archivo,"   Q: es el calor, expresado en calor�as que desprende el conductor. Recuerda que 1 Julio es equivalente a 0.24 calor�as, con lo que la f�rmula anterior puede ser reescrita en unidades del Sistema Internacional.\n");
	fprintf(archivo,"   I: Es la corriente el�ctrica, expresada en amperios.\n");
	fprintf(archivo,"   R: Es la resistencia el�ctrica, expresada en ohmios.\n");
	fprintf(archivo,"   t: Es el tiempo, expresado en segundos.\n\n");
	
	fclose(archivo);
}
