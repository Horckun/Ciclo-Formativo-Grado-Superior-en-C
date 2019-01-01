void levogay() {
	FILE *archivo;
	archivo = fopen("Las leyes volum�tricas de Gay-Lussac y las hip�tesis de Avogadro. El concepto de mol. Masas at�micas y moleculares.doc","w");
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
	
	fprintf(archivo,"Las leyes volum�tricas de Gay-Lussac y las hip�tesis de Avogadro. El concepto de mol. Masas at�micas y moleculares:\n");
	fprintf(archivo,"===================================================================================================================\n\n");
	fprintf(archivo,"Las �ltimas part�culas de los gases elementales no son �tomos sino agregados de �tomos, a los que dio el nombre de mol�culas. En vol�menes iguales de todos los gases, medidos en las mismas condiciones de presi�n y temperatura, existen igual n�mero de mol�culas.\n\n");
	fprintf(archivo,"Avogadro admite de la teor�a at�mica de Dalton el que los �tomos son indestructibles, y sus dem�s postulados, pero no as� sus ideas sobre la composici�n de las mol�culas tanto de las sustancias elementales como de los compuestos. A la misma conclusi�n que Avogadro e independientemente de �l, lleg� Ampere en 1814. Para Avogadro y Ampere las �ltimas part�culas de los elementos gaseosos eran tambi�n compuestas aunque formadas de �tomos iguales\n\n");
	fprintf(archivo,"Los �tomos constituyen las unidades �ltimas que toman parte en los cambios qu�micos mientras que las mol�culas son las part�culas f�sicamente separadas que integran los gases. En las reacciones entre cuerpos gaseosos las mol�culas se escinden, en general, en sus �tomos constituyentes los que se unen en la transformaci�n de manera distinta.\n\n");
	fprintf(archivo,"Por ejemplo, la relaci�n en la formaci�n de agua deber�a ser, seg�n Dalton, 1 volumen de hidr�geno / 1 volumen de ox�geno / 1 volumen de agua, y no de 2/1/2 como se encontr�, experimentalmente. Este hecho lo explica Avogadro al suponer que las mol�culas del hidr�geno, cloro, nitr�geno, ox�geno... son diat�micas, y que las mol�culas de agua, amoniaco, etc., no tienen por qu� contener forzosamente solo dos �tomos. Si el agua, por ejemplo, tiene en su mol�cula dos �tomos de hidr�geno y uno de ox�geno (H2O), puede explicarse la relaci�n de vol�menes de combinaci�n conforme indica la figura\n\n");
	fprintf(archivo,"A pesar de que con la teor�a de Avogadro se explicaba la ley de los vol�menes de combinaci�n, fue desechada en su tiempo. Por una parte, a Berzelius le parec�a imposible que dos �tomos iguales pudieran unirse, pues juzgaba que el enlace entre �tomos solo pod�a ocurrir por fuerzas el�ctricas opuestas. Por otra, Dalton consider� como inexactos los resultados de Gay-Lussac. Se olvid� as� la hip�tesis de Avogadro hasta medio siglo despu�s, en 1858 una publicaci�n del qu�mico italiano Cannizzaro daba a conocer claramente su significado y aplicaci�n. Para Cannizzaro la hip�tesis de Avogadro le proporcion� un sencillo m�todo para determinar pesos moleculares relativos de gases, porque la densidad de un gas ser�a proporcional a su peso molecular. De ah� pudo calcular los pesos at�micos y obtener una escala correcta de los mismos.\n\n");
	fprintf(archivo,"El �xito alcanzado por los resultados de Cannizzaro confirmaron la hip�tesis de Avogadro, que qued� convertida as� en una ley y que, a su vez, complement� la teor�a at�mica de Dalton.\n\n");
	
	fclose(archivo);
}
