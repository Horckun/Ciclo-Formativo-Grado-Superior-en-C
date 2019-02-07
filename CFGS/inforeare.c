void inforeare() {
	FILE *archivo;
	archivo = fopen("Informaci�n que se puede extraer de una reacci�n ajustada y realizaci�n de c�lculos con cantidades de sustancia involucrada en una reacci�n qu�mica.doc","w");
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
	
	fprintf(archivo,"Informaci�n que se puede extraer de una reacci�n ajustada y realizaci�n de c�lculos con cantidades de sustancia involucrada en una reacci�n qu�mica:\n");
	fprintf(archivo,"====================================================================================================================================================\n\n");
	fprintf(archivo,"A los qu�micos les interesa conocer la masa de reactivos que necesitan para obtener una cantidad de producto determinada en una reacci�n qu�mica, o la cantidad de producto que pueden obtener a partir de una determinada cantidad de reactivos. Los c�lculos que hay que hacer para resolver estas cuestiones se llaman c�lculos estequiom�tricos.\n\n");
	fprintf(archivo,"Para realizar los c�lculos estequiom�tricos es necesario disponer de la ecuaci�n qu�mica ajustada de la reacci�n. Entonces podemos conocer la cantidad de mol�culas de un producto que se puede obtener a partir de una cierta cantidad de mol�culas de los reactivos. Por ejemplo con 2 mol�culas de hidr�geno (H2) y 1 mol�cula de ox�geno (O2) se pueden obtener 2 mol�culas de agua (H2O). Si sabemos la masa de cada mol�cula sabemos tambi�n la relaci�n entre las masas de reactivos y productos en la reacci�n. Estas masas s� que las conocemos. Se llaman masas moleculares, y se calculan sumando las masas de los �tomos que componen las mol�culas, las masas at�micas. Estas las encontrar�s en cualquier tabla peri�dica expresada en u (unidades de masa at�mica). Pero como puedes imaginar son masas muy peque�as, del orden de los 10-24 g. Por eso los qu�micos han definido una nueva unidad para medir el n�mero de part�culas (�tomos o mol�culas), a la que han llamado mol y que se define as�:\n\n");
	fprintf(archivo,"Un mol de una sustancia es una cantidad equivalente a la que representa su masa at�mica expresada en gramos. En un mol de una sustancia hay 6,022.1023 part�culas (�tomos, mol�culas, iones...)\n\n");
	fprintf(archivo,"As�, la relaci�n en moles de mol�culas en nuestra reacci�n entre el hidr�geno y el ox�geno tambi�n viene dada por los coeficientes estequiom�tricos.\n\n");
	
	fclose(archivo);
}
