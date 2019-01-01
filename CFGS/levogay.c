void levogay() {
	FILE *archivo;
	archivo = fopen("Las leyes volumétricas de Gay-Lussac y las hipótesis de Avogadro. El concepto de mol. Masas atómicas y moleculares.doc","w");
	if(archivo == NULL) {
		p("No se ha podido abrir el archivo");
	}
	
	p("Las leyes volum%ctricas de Gay-Lussac y las hip%ctesis de Avogadro. El concepto de mol. Masas at%cmicas y moleculares:\n",130,162,162);
	p("===================================================================================================================\n\n");
	
	p("Las %cltimas part%cculas de los gases elementales no son %ctomos sino agregados de %ctomos, a los que dio el nombre de mol%cculas. En vol%cmenes iguales de todos los gases, medidos en las mismas condiciones de presi%cn y temperatura, existen igual n%cmero de mol%cculas.\n\n",163,161,160,160,130,163,162,163,130);
	
	p("Avogadro admite de la teor%ca at%cmica de Dalton el que los %ctomos son indestructibles, y sus dem%cs postulados, pero no as%c sus ideas sobre la composici%cn de las mol%cculas tanto de las sustancias elementales como de los compuestos. A la misma conclusi%cn que Avogadro e independientemente de %cl, lleg%c Ampere en 1814. Para Avogadro y Ampere las %cltimas part%cculas de los elementos gaseosos eran tambi%cn compuestas aunque formadas de %ctomos iguales\n\n",161,162,160,160,161,162,130,162,130,162,163,161,130,160);
	
	p("Los %ctomos constituyen las unidades %cltimas que toman parte en los cambios qu%cmicos mientras que las mol%cculas son las part%cculas f%csicamente separadas que integran los gases. En las reacciones entre cuerpos gaseosos las mol%cculas se escinden, en general, en sus %ctomos constituyentes los que se unen en la transformaci%cn de manera distinta.\n\n",160,163,161,130,161,161,130,160,162);
	
	system("pause");
	p("\n");
	
	p("Por ejemplo, la relaci%cn en la formaci%cn de agua deber%ca ser, seg%cn Dalton, 1 volumen de hidr%cgeno / 1 volumen de ox%cgeno / 1 volumen de agua, y no de 2/1/2 como se encontr%c, experimentalmente. Este hecho lo explica Avogadro al suponer que las mol%cculas del hidr%cgeno, cloro, nitr%cgeno, ox%cgeno... son diat%cmicas, y que las mol%cculas de agua, amoniaco, etc., no tienen por qu%c contener forzosamente solo dos %ctomos. Si el agua, por ejemplo, tiene en su mol%ccula dos %ctomos de hidr%cgeno y uno de ox%cgeno (H2O), puede explicarse la relaci%cn de vol%cmenes de combinaci%cn conforme indica la figura\n\n",162,162,161,163,162,161,162,130,162,162,161,162,130,130,160,13,160,162,161,162,163,162);
	
	p("A pesar de que con la teor%ca de Avogadro se explicaba la ley de los vol%cmenes de combinaci%cn, fue desechada en su tiempo. Por una parte, a Berzelius le parec%ca imposible que dos %ctomos iguales pudieran unirse, pues juzgaba que el enlace entre %ctomos solo pod%ca ocurrir por fuerzas el%cctricas opuestas. Por otra, Dalton consider%c como inexactos los resultados de Gay-Lussac. Se olvid%c as%c la hip%ctesis de Avogadro hasta medio siglo despu%cs, en 1858 una publicaci%cn del qu%cmico italiano Cannizzaro daba a conocer claramente su significado y aplicaci%cn. Para Cannizzaro la hip%ctesis de Avogadro le proporcion%c un sencillo m%ctodo para determinar pesos moleculares relativos de gases, porque la densidad de un gas ser%ca proporcional a su peso molecular. De ah%c pudo calcular los pesos at%cmicos y obtener una escala correcta de los mismos.\n\n",161,163,162,161,160,160,161,130,162,162,161,162,130,162,161,162,162,162,130,161,161,162);
	
	p("El %cxito alcanzado por los resultados de Cannizzaro confirmaron la hip%ctesis de Avogadro, que qued%c convertida as%c en una ley y que, a su vez, complement%c la teor%ca at%cmica de Dalton.\n\n",130,162,162,161,162,161,162);
	
	fprintf(archivo,"Las leyes volumétricas de Gay-Lussac y las hipótesis de Avogadro. El concepto de mol. Masas atómicas y moleculares:\n");
	fprintf(archivo,"===================================================================================================================\n\n");
	fprintf(archivo,"Las últimas partículas de los gases elementales no son átomos sino agregados de átomos, a los que dio el nombre de moléculas. En volúmenes iguales de todos los gases, medidos en las mismas condiciones de presión y temperatura, existen igual número de moléculas.\n\n");
	fprintf(archivo,"Avogadro admite de la teoría atómica de Dalton el que los átomos son indestructibles, y sus demás postulados, pero no así sus ideas sobre la composición de las moléculas tanto de las sustancias elementales como de los compuestos. A la misma conclusión que Avogadro e independientemente de él, llegó Ampere en 1814. Para Avogadro y Ampere las últimas partículas de los elementos gaseosos eran también compuestas aunque formadas de átomos iguales\n\n");
	fprintf(archivo,"Los átomos constituyen las unidades últimas que toman parte en los cambios químicos mientras que las moléculas son las partículas físicamente separadas que integran los gases. En las reacciones entre cuerpos gaseosos las moléculas se escinden, en general, en sus átomos constituyentes los que se unen en la transformación de manera distinta.\n\n");
	fprintf(archivo,"Por ejemplo, la relación en la formación de agua debería ser, según Dalton, 1 volumen de hidrógeno / 1 volumen de oxígeno / 1 volumen de agua, y no de 2/1/2 como se encontró, experimentalmente. Este hecho lo explica Avogadro al suponer que las moléculas del hidrógeno, cloro, nitrógeno, oxígeno... son diatómicas, y que las moléculas de agua, amoniaco, etc., no tienen por qué contener forzosamente solo dos átomos. Si el agua, por ejemplo, tiene en su molécula dos átomos de hidrógeno y uno de oxígeno (H2O), puede explicarse la relación de volúmenes de combinación conforme indica la figura\n\n");
	fprintf(archivo,"A pesar de que con la teoría de Avogadro se explicaba la ley de los volúmenes de combinación, fue desechada en su tiempo. Por una parte, a Berzelius le parecía imposible que dos átomos iguales pudieran unirse, pues juzgaba que el enlace entre átomos solo podía ocurrir por fuerzas eléctricas opuestas. Por otra, Dalton consideró como inexactos los resultados de Gay-Lussac. Se olvidó así la hipótesis de Avogadro hasta medio siglo después, en 1858 una publicación del químico italiano Cannizzaro daba a conocer claramente su significado y aplicación. Para Cannizzaro la hipótesis de Avogadro le proporcionó un sencillo método para determinar pesos moleculares relativos de gases, porque la densidad de un gas sería proporcional a su peso molecular. De ahí pudo calcular los pesos atómicos y obtener una escala correcta de los mismos.\n\n");
	fprintf(archivo,"El éxito alcanzado por los resultados de Cannizzaro confirmaron la hipótesis de Avogadro, que quedó convertida así en una ley y que, a su vez, complementó la teoría atómica de Dalton.\n\n");
	
	fclose(archivo);
}
