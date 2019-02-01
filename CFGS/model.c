void model() {
	FILE *archivo;
	archivo = fopen("Modelo elemental de reacción a partir de las colisiones que provocan roturas y formación de nuevos enlaces.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Modelo elemental de reacci%cn a partir de las colisiones que provocan roturas y formaci%cn de nuevos enlaces:\n",162,162);
	p("===========================================================================================================\n\n");
	p("La teor%ca de las colisiones es una teor%ca propuesta por Max Trautz y Gilbert N. Lewis en 1916 y 1918, que explica cualitativamente c%cmo ocurren las reacciones qu%cmicas y por qu%c las velocidades de reacci%cn difieren para diversas reacciones. Para que una reacci%cn ocurra las part%cculas reaccionantes deben colisionar. Solo una cierta fracci%cn de las colisiones totales causan un cambio qu%cmico; estas son llamadas colisiones exitosas. Las colisiones exitosas tienen energ%ca suficiente (energ%ca de activaci%cn), al momento del impacto, para romper los enlaces existentes y formar nuevos enlaces, resultando en los productos de la reacci%cn. El incrementar la concentraci%cn de los reactivos y aumentar la temperatura lleva a m%cs colisiones y por tanto a m%cs colisiones exitosas, incrementando la velocidad de la reacci%cn.\n\n",161,161,162,161,130,162,162,161,162,161,161,161,162,162,162,160,160,162);
	p("Cuando un catalizador est%c involucrado en la colisi%cn entre las mol%cculas reaccionantes, se requiere una menor energ%ca para que tome lugar el cambio qu%cmico, y por lo tanto m%cs colisiones tienen la energ%ca suficiente para que ocurra la reacci%cn. La velocidad de reacci%cn por lo tanto tambi%cn se incrementa.\n\n",160,162,130,161,161,160,161,162,162,130);
	p("La teor%ca de las colisiones est%c cercanamente relacionada con la cin%ctica qu%cmica.\n\n",161,160,130,161);
	
	fprintf(archivo,"Modelo elemental de reacción a partir de las colisiones que provocan roturas y formación de nuevos enlaces:\n");
	fprintf(archivo,"===========================================================================================================\n\n");
	fprintf(archivo,"La teoría de las colisiones es una teoría propuesta por Max Trautz y Gilbert N. Lewis en 1916 y 1918, que explica cualitativamente cómo ocurren las reacciones químicas y por qué las velocidades de reacción difieren para diversas reacciones. Para que una reacción ocurra las partículas reaccionantes deben colisionar. Solo una cierta fracción de las colisiones totales causan un cambio químico; estas son llamadas colisiones exitosas. Las colisiones exitosas tienen energía suficiente (energía de activación), al momento del impacto, para romper los enlaces existentes y formar nuevos enlaces, resultando en los productos de la reacción. El incrementar la concentración de los reactivos y aumentar la temperatura lleva a más colisiones y por tanto a más colisiones exitosas, incrementando la velocidad de la reacción.\n\n");
	fprintf(archivo,"Cuando un catalizador está involucrado en la colisión entre las moléculas reaccionantes, se requiere una menor energía para que tome lugar el cambio químico, y por lo tanto más colisiones tienen la energía suficiente para que ocurra la reacción. La velocidad de reacción por lo tanto también se incrementa.\n\n");
	fprintf(archivo,"La teoría de las colisiones está cercanamente relacionada con la cinética química.\n\n");
	
	fclose(archivo);
}
