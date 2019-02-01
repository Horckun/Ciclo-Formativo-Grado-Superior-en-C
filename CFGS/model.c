void model() {
	FILE *archivo;
	archivo = fopen("Modelo elemental de reacci�n a partir de las colisiones que provocan roturas y formaci�n de nuevos enlaces.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Modelo elemental de reacci%cn a partir de las colisiones que provocan roturas y formaci%cn de nuevos enlaces:\n",162,162);
	p("===========================================================================================================\n\n");
	p("La teor%ca de las colisiones es una teor%ca propuesta por Max Trautz y Gilbert N. Lewis en 1916 y 1918, que explica cualitativamente c%cmo ocurren las reacciones qu%cmicas y por qu%c las velocidades de reacci%cn difieren para diversas reacciones. Para que una reacci%cn ocurra las part%cculas reaccionantes deben colisionar. Solo una cierta fracci%cn de las colisiones totales causan un cambio qu%cmico; estas son llamadas colisiones exitosas. Las colisiones exitosas tienen energ%ca suficiente (energ%ca de activaci%cn), al momento del impacto, para romper los enlaces existentes y formar nuevos enlaces, resultando en los productos de la reacci%cn. El incrementar la concentraci%cn de los reactivos y aumentar la temperatura lleva a m%cs colisiones y por tanto a m%cs colisiones exitosas, incrementando la velocidad de la reacci%cn.\n\n",161,161,162,161,130,162,162,161,162,161,161,161,162,162,162,160,160,162);
	p("Cuando un catalizador est%c involucrado en la colisi%cn entre las mol%cculas reaccionantes, se requiere una menor energ%ca para que tome lugar el cambio qu%cmico, y por lo tanto m%cs colisiones tienen la energ%ca suficiente para que ocurra la reacci%cn. La velocidad de reacci%cn por lo tanto tambi%cn se incrementa.\n\n",160,162,130,161,161,160,161,162,162,130);
	p("La teor%ca de las colisiones est%c cercanamente relacionada con la cin%ctica qu%cmica.\n\n",161,160,130,161);
	
	fprintf(archivo,"Modelo elemental de reacci�n a partir de las colisiones que provocan roturas y formaci�n de nuevos enlaces:\n");
	fprintf(archivo,"===========================================================================================================\n\n");
	fprintf(archivo,"La teor�a de las colisiones es una teor�a propuesta por Max Trautz y Gilbert N. Lewis en 1916 y 1918, que explica cualitativamente c�mo ocurren las reacciones qu�micas y por qu� las velocidades de reacci�n difieren para diversas reacciones. Para que una reacci�n ocurra las part�culas reaccionantes deben colisionar. Solo una cierta fracci�n de las colisiones totales causan un cambio qu�mico; estas son llamadas colisiones exitosas. Las colisiones exitosas tienen energ�a suficiente (energ�a de activaci�n), al momento del impacto, para romper los enlaces existentes y formar nuevos enlaces, resultando en los productos de la reacci�n. El incrementar la concentraci�n de los reactivos y aumentar la temperatura lleva a m�s colisiones y por tanto a m�s colisiones exitosas, incrementando la velocidad de la reacci�n.\n\n");
	fprintf(archivo,"Cuando un catalizador est� involucrado en la colisi�n entre las mol�culas reaccionantes, se requiere una menor energ�a para que tome lugar el cambio qu�mico, y por lo tanto m�s colisiones tienen la energ�a suficiente para que ocurra la reacci�n. La velocidad de reacci�n por lo tanto tambi�n se incrementa.\n\n");
	fprintf(archivo,"La teor�a de las colisiones est� cercanamente relacionada con la cin�tica qu�mica.\n\n");
	
	fclose(archivo);
}
