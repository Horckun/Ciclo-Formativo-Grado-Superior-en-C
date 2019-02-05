void ajusre() {
	FILE *archivo;
	archivo = fopen("Ajuste de reacciones a partir de la ley de la conservaci�n de la masa.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Ajuste de reacciones a partir de la ley de la conservaci%cn de la masa:\n",162);
	p("======================================================================\n\n");
	p("De acuerdo con esta ley; la masa de los reactivos que participan en una reacci%cn qu%cmica es igual a la masa de los productos que se forman.\n\n",162,161);
	p("Por otro lado, los %ctomos de los reactivos no cambian cuando se obtienen los productos, solo se reacomodan y forman nuevos enlaces. El tipo y cantidad de %ctomos presentes en los reactivos son los mismos que constituyen los productos. Existe una conservaci%cn de %ctomos (2H2 + O H2O).\n\n",160,160,162,160);
	
	system("pause");
	p("\n");
	
	p("- 2H2 + O2:\n");
	p("-----------\n\n");
	p("Esta ecuaci%cn representa La conservaci%cn de la materia.\n\n",162,162);
	p("La ley de la conservaci%cn de la materia establece que la materia ni se pierde ni se gana en las reacciones qu%cmicas tradicionales, simplemente cambia de forma. Por consiguiente, si tenemos un cierto n%cmero de %ctomos de un elemento en el lado izquierdo de una ecuaci%cn, tenemos que tener el mismo n%cmero en el lado derecho. Esto implica que la masa tambi%cn se conserva durante la reacci%cn qu%cmica.\n\n",162,161,163,160,162,163,130,162,161);
	p("Sin embargo, en la mayor%ca de los casos, las ecuaciones qu%cmicas no est%cn balanceadas y hay que ajustar la cantidad de %ctomos que se presentan. Como por ejemplo, la formaci%cn de amonio (NH3), a partir de los gases nitr%cgeno e hidr%cgeno.\n\n",161,161,160,160,162,162,162);
	p("Se identifican los reactivos y los productos y se escribe una ecuaci%cn con palabras (Nitr%cgeno + Hidr%cgeno = Amon%caco).\n\n",162,162,162,161);
	p("Reactivos productivos: Se escribe la f%crmula de la sustancia (NH3).\n\n",162);
	
	system("pause");
	p("\n");
	
	p("- N2 + H2:\n");
	p("----------\n\n");
	p("Se identifica el tipo y cantidad de %ctomos que hay en cada lado de la ecuaci%cn. Los sub%cndices ubicados a la derecha de cada s%cmbolo indican la cantidad de %ctomos de cada elemento. Si no hay sub%cndice, se considera que su valor es uno. Los sub%cndices nunca se modifican al balancear la ecuaci%cn. Dos %ctomos de dos %ctomos de nitr%cgeno hidr%cgeno (N H NH3), tres %ctomos de hidr%cgeno, un %ctomos de nitr%cgeno.\n\n",160,162,161,161,160,161,161,162,160,160,162,162,160,162,160,162);
	
	system("pause");
	p("\n");
	
	p("- Para ajustar la cantidad de %ctomos se utilizan coeficientes.\n",160);
	p("---------------------------------------------------------------\n\n");
	p("Son n%cmeros que se colocan antes de la f%crmula de las sustancias. Se recomienda primero balancear los %ctomos de los elementos distintos al hidr%cgeno y nitr%cgeno.\n\n",163,162,160,162,162);
	p("En el caso de la ecuaci%cn anterior se coloca un 2 antes de la f%crmula del amon%caco, para igualar la cantidad de %ctomos de nitr%cgeno. Dos %ctomos de nitr%cgeno e hidr%cgeno N H2 = 2NH2, dos mol%cculas de amon%caco.\n\n",162,162,161,160,162,160,162,162,130,161);
	
	system("pause");
	p("\n");
	
	p("- Hidr%cgeno 2 %ctomos de nitr%cgeno:\n",162,160,162);
	p("-------------------------------------\n\n");
	p("El coeficiente 2 del amon%caco modifica tambi%cn la cantidad de hidr%cgenos. Si se multiplica este n%cmero por el sub%cndice 3 del hidr%cgeno, se obtiene un total de 6 %ctomos de hidr%cgeno. Sin embargo, en los reactivos tenemos solo dos %ctomos de hidr%cgeno.\n\n",161,130,162,163,161,162,160,162,160,162);
	p("N H2 = 2NH3, 2 nitr%cgenos hidr%cgenos, %ctomos de hidr%cgeno, 2 %ctomos de nitr%cgeno.\n\n",162,162,160,162,160,162);
	p("Para igualar la cantidad de %ctomos de hidr%cgeno, buscamos un n%cmero multiplicado por 2. Da como resultado 6. En ese caso, es 3 y se coloca en los reactivos como coeficientes, antes del hidr%cgeno.\n\n",160,162,163,162);
	p("N H2 = 2NH3, 2 nitr%cgenos %ctomos de %ctomos de hidr%cgeno. Hidr%cgeno %ctomos de nitr%cgeno.\n\n",162,160,160,162,162,160,162);
	p("Cuando la cantidad de %ctomos de cada elemento es la misma en los reactivos y en los productos, se dice que la ecuaci%cn est%c balanceada y representa de manera adecuada la ley de la ecuaci%cn de la materia.\n\n",160,162,160,162);
	
	fprintf(archivo,"Ajuste de reacciones a partir de la ley de la conservaci�n de la masa:\n");
	fprintf(archivo,"======================================================================\n\n");
	fprintf(archivo,"De acuerdo con esta ley; la masa de los reactivos que participan en una reacci�n qu�mica, es igual a la masa de los productos que se forman.\n\n");
	fprintf(archivo,"Por otro lado, los �tomos de los reactivos no cambian cuando se obtienen los productos, solo se reacomodan y forman nuevos enlaces. El tipo y cantidad de �tomos presentes en los reactivos son los mismos que constituyen los productos. Existe una conservaci�n de �tomos (2H2 + O H2O).\n\n");
	fprintf(archivo,"- 2H2 + O2:\n");
	fprintf(archivo,"-----------\n\n");
	fprintf(archivo,"Esta ecuaci�n representa La conservaci�n de la materia.\n\n");
	fprintf(archivo,"La ley de la conservaci�n de la materia establece que la materia ni se pierde ni se gana en las reacciones qu�micas tradicionales, simplemente cambia de forma. Por consiguiente, si tenemos un cierto n�mero de �tomos de un elemento en el lado izquierdo de una ecuaci�n, tenemos que tener el mismo n�mero en el lado derecho. Esto implica que la masa tambi�n se conserva durante la reacci�n qu�mica.\n\n");
	fprintf(archivo,"Sin embargo, en la mayor�a de los casos, las ecuaciones qu�micas no est�n balanceadas y hay que ajustar la cantidad de �tomos que se presentan. Como por ejemplo, la formaci�n de amonio (NH3), a partir de los gases nitr�geno e hidr�geno.\n\n");
	fprintf(archivo,"Se identifican los reactivos y los productos y se escribe una ecuaci�n con palabras (Nitr�geno + Hidr�geno = Amon�aco).\n\n");
	fprintf(archivo,"Reactivos productivos: Se escribe la f�rmula de la sustancia (NH3).\n\n");
	fprintf(archivo,"- N2 + H2:\n");
	fprintf(archivo,"----------\n\n");
	fprintf(archivo,"Se identifica el tipo y cantidad de �tomos que hay en cada lado de la ecuaci�n. Los sub�ndices ubicados a la derecha de cada s�mbolo indican la cantidad de �tomos de cada elemento. Si no hay sub�ndice, se considera que su valor es uno. Los sub�ndices nunca se modifican al balancear la ecuaci�n. Dos �tomos de dos �tomos de nitr�geno hidr�geno (N H NH3), tres �tomos de hidr�geno, un �tomos de nitr�geno.\n\n");
	fprintf(archivo,"- Para ajustar la cantidad de �tomos se utilizan coeficientes.\n");
	fprintf(archivo,"---------------------------------------------------------------\n\n");
	fprintf(archivo,"Son n�meros que se colocan antes de la f�rmula de las sustancias. Se recomienda primero balancear los �tomos de los elementos distintos al hidr�geno y nitr�geno.\n\n");
	fprintf(archivo,"En el caso de la ecuaci�n anterior se coloca un 2 antes de la f�rmula del amon�aco, para igualar la cantidad de �tomos de nitr�geno. Dos �tomos de nitr�geno e hidr�geno N H2 = 2NH2, dos mol�culas de amon�aco.\n\n");
	fprintf(archivo,"- Hidr�geno 2 �tomos de nitr�geno:\n");
	fprintf(archivo,"----------------------------------\n\n");
	fprintf(archivo,"El coeficiente 2 del amon�aco modifica tambi�n la cantidad de hidr�genos. Si se multiplica este n�mero por el sub�ndice 3 del hidr�geno, se obtiene un total de 6 �tomos de hidr�geno. Sin embargo, en los reactivos tenemos solo dos �tomos de hidr�geno.\n\n");
	fprintf(archivo,"N H2 = 2NH3, 2 nitr�genos hidr�genos, �tomos de hidr�geno, 2 �tomos de nitr�geno.\n\n");
	fprintf(archivo,"Para igualar la cantidad de �tomos de hidr�geno, buscamos un n�mero multiplicado por 2. Da como resultado 6. En ese caso, es 3 y se coloca en los reactivos como coeficientes, antes del hidr�geno.\n\n");
	fprintf(archivo,"N H2 = 2NH3, 2 nitr�genos �tomos de �tomos de hidr�geno. Hidr�geno �tomos de nitr�geno.\n\n");
	fprintf(archivo,"Cuando la cantidad de �tomos de cada elemento es la misma en los reactivos y en los productos, se dice que la ecuaci�n est� balanceada y representa de manera adecuada la ley de la ecuaci�n de la materia.\n\n");
 
	fclose(archivo);
}
