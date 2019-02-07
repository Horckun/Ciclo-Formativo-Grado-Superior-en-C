void inforeare() {
	FILE *archivo;
	archivo = fopen("Información que se puede extraer de una reacción ajustada y realización de cálculos con cantidades de sustancia involucrada en una reacción química.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Informaci%cn que se puede extraer de una reacci%cn ajustada y realizaci%cn de c%clculos con cantidades de sustancia involucrada en una reacci%cn qu%cmica:\n",162,162,162,160,162,161);
	p("====================================================================================================================================================\n\n");
	p("A los qu%cmicos les interesa conocer la masa de reactivos que necesitan para obtener una cantidad de producto determinada en una reacci%cn qu%cmica, o la cantidad de producto que pueden obtener a partir de una determinada cantidad de reactivos. Los c%clculos que hay que hacer para resolver estas cuestiones se llaman c%clculos estequiom%ctricos.\n\n",161,162,161,160,160,130);
	p("Para realizar los c%clculos estequiom%ctricos es necesario disponer de la ecuaci%cn qu%cmica ajustada de la reacci%cn. Entonces podemos conocer la cantidad de mol%cculas de un producto que se puede obtener a partir de una cierta cantidad de mol%cculas de los reactivos. Por ejemplo con 2 mol%cculas de hidr%cgeno (H2) y 1 mol%ccula de ox%cgeno (O2) se pueden obtener 2 mol%cculas de agua (H2O). Si sabemos la masa de cada mol%ccula sabemos tambi%cn la relaci%cn entre las masas de reactivos y productos en la reacci%cn. Estas masas s%c que las conocemos. Se llaman masas moleculares, y se calculan sumando las masas de los %ctomos que componen las mol%cculas, las masas at%cmicas. Estas las encontrar%cs en cualquier tabla peri%cdica expresada en u (unidades de masa at%cmica). Pero como puedes imaginar son masas muy peque%cas, del orden de los 10-24 g. Por eso los qu%cmicos han definido una nueva unidad para medir el n%cmero de part%cculas (%ctomos o mol%cculas), a la que han llamado mol y que se define as%c:\n\n",160,130,162,161,162,130,130,130,162,130,161,130,130,130,162,162,161,160,130,162,160,162,162,164,161,163,161,160,130,161);
	p("Un mol de una sustancia es una cantidad equivalente a la que representa su masa at%cmica expresada en gramos. En un mol de una sustancia hay 6,022.1023 part%cculas (%ctomos, mol%cculas, iones...)\n\n",162,161,160,130);
	p("As%c, la relaci%cn en moles de mol%cculas en nuestra reacci%cn entre el hidr%cgeno y el ox%cgeno tambi%cn viene dada por los coeficientes estequiom%ctricos.\n\n",161,162,130,162,162,161,130,130);
	
	system("pause");
	p("\n");
	
	fprintf(archivo,"Información que se puede extraer de una reacción ajustada y realización de cálculos con cantidades de sustancia involucrada en una reacción química:\n");
	fprintf(archivo,"====================================================================================================================================================\n\n");
	fprintf(archivo,"A los químicos les interesa conocer la masa de reactivos que necesitan para obtener una cantidad de producto determinada en una reacción química, o la cantidad de producto que pueden obtener a partir de una determinada cantidad de reactivos. Los cálculos que hay que hacer para resolver estas cuestiones se llaman cálculos estequiométricos.\n\n");
	fprintf(archivo,"Para realizar los cálculos estequiométricos es necesario disponer de la ecuación química ajustada de la reacción. Entonces podemos conocer la cantidad de moléculas de un producto que se puede obtener a partir de una cierta cantidad de moléculas de los reactivos. Por ejemplo con 2 moléculas de hidrógeno (H2) y 1 molécula de oxígeno (O2) se pueden obtener 2 moléculas de agua (H2O). Si sabemos la masa de cada molécula sabemos también la relación entre las masas de reactivos y productos en la reacción. Estas masas sí que las conocemos. Se llaman masas moleculares, y se calculan sumando las masas de los átomos que componen las moléculas, las masas atómicas. Estas las encontrarás en cualquier tabla periódica expresada en u (unidades de masa atómica). Pero como puedes imaginar son masas muy pequeñas, del orden de los 10-24 g. Por eso los químicos han definido una nueva unidad para medir el número de partículas (átomos o moléculas), a la que han llamado mol y que se define así:\n\n");
	fprintf(archivo,"Un mol de una sustancia es una cantidad equivalente a la que representa su masa atómica expresada en gramos. En un mol de una sustancia hay 6,022.1023 partículas (átomos, moléculas, iones...)\n\n");
	fprintf(archivo,"Así, la relación en moles de moléculas en nuestra reacción entre el hidrógeno y el oxígeno también viene dada por los coeficientes estequiométricos.\n\n");
	
	fclose(archivo);
}
