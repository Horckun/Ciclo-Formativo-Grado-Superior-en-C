void ajusre() {
	FILE *archivo;
	archivo = fopen("Ajuste de reacciones a partir de la ley de la conservación de la masa.doc","w");
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
	
	fprintf(archivo,"Ajuste de reacciones a partir de la ley de la conservación de la masa:\n");
	fprintf(archivo,"======================================================================\n\n");
	fprintf(archivo,"De acuerdo con esta ley; la masa de los reactivos que participan en una reacción química, es igual a la masa de los productos que se forman.\n\n");
	fprintf(archivo,"Por otro lado, los átomos de los reactivos no cambian cuando se obtienen los productos, solo se reacomodan y forman nuevos enlaces. El tipo y cantidad de átomos presentes en los reactivos son los mismos que constituyen los productos. Existe una conservación de átomos (2H2 + O H2O).\n\n");
	fprintf(archivo,"- 2H2 + O2:\n");
	fprintf(archivo,"-----------\n\n");
	fprintf(archivo,"Esta ecuación representa La conservación de la materia.\n\n");
	fprintf(archivo,"La ley de la conservación de la materia establece que la materia ni se pierde ni se gana en las reacciones químicas tradicionales, simplemente cambia de forma. Por consiguiente, si tenemos un cierto número de átomos de un elemento en el lado izquierdo de una ecuación, tenemos que tener el mismo número en el lado derecho. Esto implica que la masa también se conserva durante la reacción química.\n\n");
	fprintf(archivo,"Sin embargo, en la mayoría de los casos, las ecuaciones químicas no están balanceadas y hay que ajustar la cantidad de átomos que se presentan. Como por ejemplo, la formación de amonio (NH3), a partir de los gases nitrógeno e hidrógeno.\n\n");
	fprintf(archivo,"Se identifican los reactivos y los productos y se escribe una ecuación con palabras (Nitrógeno + Hidrógeno = Amoníaco).\n\n");
	fprintf(archivo,"Reactivos productivos: Se escribe la fórmula de la sustancia (NH3).\n\n");
	fprintf(archivo,"- N2 + H2:\n");
	fprintf(archivo,"----------\n\n");
	fprintf(archivo,"Se identifica el tipo y cantidad de átomos que hay en cada lado de la ecuación. Los subíndices ubicados a la derecha de cada símbolo indican la cantidad de átomos de cada elemento. Si no hay subíndice, se considera que su valor es uno. Los subíndices nunca se modifican al balancear la ecuación. Dos átomos de dos átomos de nitrógeno hidrógeno (N H NH3), tres átomos de hidrógeno, un átomos de nitrógeno.\n\n");
	fprintf(archivo,"- Para ajustar la cantidad de átomos se utilizan coeficientes.\n");
	fprintf(archivo,"---------------------------------------------------------------\n\n");
	fprintf(archivo,"Son números que se colocan antes de la fórmula de las sustancias. Se recomienda primero balancear los átomos de los elementos distintos al hidrógeno y nitrógeno.\n\n");
	fprintf(archivo,"En el caso de la ecuación anterior se coloca un 2 antes de la fórmula del amoníaco, para igualar la cantidad de átomos de nitrógeno. Dos átomos de nitrógeno e hidrógeno N H2 = 2NH2, dos moléculas de amoníaco.\n\n");
	fprintf(archivo,"- Hidrógeno 2 átomos de nitrógeno:\n");
	fprintf(archivo,"----------------------------------\n\n");
	fprintf(archivo,"El coeficiente 2 del amoníaco modifica también la cantidad de hidrógenos. Si se multiplica este número por el subíndice 3 del hidrógeno, se obtiene un total de 6 átomos de hidrógeno. Sin embargo, en los reactivos tenemos solo dos átomos de hidrógeno.\n\n");
	fprintf(archivo,"N H2 = 2NH3, 2 nitrógenos hidrógenos, átomos de hidrógeno, 2 átomos de nitrógeno.\n\n");
	fprintf(archivo,"Para igualar la cantidad de átomos de hidrógeno, buscamos un número multiplicado por 2. Da como resultado 6. En ese caso, es 3 y se coloca en los reactivos como coeficientes, antes del hidrógeno.\n\n");
	fprintf(archivo,"N H2 = 2NH3, 2 nitrógenos átomos de átomos de hidrógeno. Hidrógeno átomos de nitrógeno.\n\n");
	fprintf(archivo,"Cuando la cantidad de átomos de cada elemento es la misma en los reactivos y en los productos, se dice que la ecuación está balanceada y representa de manera adecuada la ley de la ecuación de la materia.\n\n");
 
	fclose(archivo);
}
