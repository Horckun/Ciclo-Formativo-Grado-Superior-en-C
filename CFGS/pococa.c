void pococa() {
	FILE *archivo;
	archivo = fopen("Posibilidades de combinaci�n que tiene el carbono.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Posibilidades de combinaci%cn que tiene el carbono: existencia de cadenas ramificadas. Posibilidad de enlaces m%cltiples consigo mismo o con otros elementos como el ox%cgeno, el nitr%cgeno.\n",162,163,161,162);
	p("=========================================================================================================================================================================================\n\n");
	p("El %ctomo de carbono posee unas propiedades qu%cmica muy particulares, las cuales lo han hecho el elemento base de la vida en nuestro planeta.\n\n",160,161);
	p("Entre sus caracter%csticas m%cs importantes est%cn:\n\n",161,160,160);
	
	system("pause");
	p("\n");
	
	p("- Caracter%csticas seg%cn la tabla peri%cdica:\n",161,163,162);
	p("-------------------------------------------\n\n");
	p("El carbono es el elemento n%cmero 6 de la tabla peri%cdica (Z=6 y A=12) y el primer elemento del Grupo IV. Su estructura electr%cnica es 1s2 2s2 2p2. El %ctomo de carbono tiene 4 electrones en la %cltima capa. Esto hace que pueda unirse a otros %ctomos mediante cuatro enlaces covalentes.\n\n",163,162,162,160,163,160);
	p(" - N%cmero at%cmico 6.\n",163,162);
	p(" - Valencia 2,+4,-4.\n");
	p(" - Configuraci%cn electr%cnica 1s22s22p2.\n",162,162);
	p(" - Masa at%cmica (g/mol) 12,01115.\n",162);
	p(" - Densidad (g/ml) 2,26.\n");
	p(" - Punto de ebullici%cn (%cC) 4830.\n",162,167);
	p(" - Punto de fusi%cn (%cC) 3727.\n\n",162,167);
	
	system("pause");
	p("\n");
	
	p("- Caracter%csticas por su importancia:\n",161);
	p("-------------------------------------\n\n");
	p("Al poder combinar de varias formas, el carbono es un elemento ideal para elaborar los complejos sistemas org%cnicos como nuestras c%clulas o las hojas de las plantas. Siendo el n%cmero de combinaci%cn entre %ctomos de carbonos y otros diferentes es casi infinito.\n\n",160,130,163,162,160);
	p("Con el ox%cgeno forma dos compuestos gaseosos importantes: mon%cxido de carbono (CO), y di%cxido de carbono (CO2).\n\n",161,162,162);
	p("El carbono presenta una importante capacidad de combinaci%cn con otros %ctomos ya que puede formar hasta cuatro enlaces con otros %ctomos.\n\n",162,160,160);
	p("Estos enlaces forman un tetradr%cn (una pir%cmide con una punta en la parte superior).\n\n",162,160);
	p("La diversidad de los productos qu%cmicos org%cnicos se debe a la infinidad de opciones que brinda el carbono para enlazarse con otros %ctomos. Los qu%cmicos org%cnicos m%cs simples, llamados hidrocarburos, contienen solo carbono y %ctomos de hidr%cgeno; el hidrocarburo m%cs simple (llamado metano) contiene un solo %ctomo de carbono enlazado a cuatro %ctomos de hidr%cgeno.\n\n",161,160,160,161,160,160,160,162,160,160,160,162);
	p("Pero el carbono tambi%cn puede enlazarse con otros %ctomos de carbono adicionalmente al hidr%cgeno.\n\n",130,160,162);
	
	fprintf(archivo,"Posibilidades de combinaci�n que tiene el carbono: existencia de cadenas ramificadas. Posibilidad de enlaces m�ltiples consigo mismo o con otros elementos como el ox�geno, el nitr�geno.\n");
	fprintf(archivo,"=========================================================================================================================================================================================\n\n");
	fprintf(archivo,"El �tomo de carbono posee unas propiedades qu�mica muy particulares, las cuales lo han hecho el elemento base de la vida en nuestro planeta.\n\n");
	fprintf(archivo,"Entre sus caracter�sticas m�s importantes est�n:\n\n");
	fprintf(archivo,"- Caracter�sticas seg�n la tabla peri�dica:\n");
	fprintf(archivo,"-------------------------------------------\n\n");
	fprintf(archivo,"El carbono es el elemento n�mero 6 de la tabla peri�dica (Z=6 y A=12) y el primer elemento del Grupo IV. Su estructura electr�nica es 1s2 2s2 2p2. El �tomo de carbono tiene 4 electrones en la �ltima capa. Esto hace que pueda unirse a otros �tomos mediante cuatro enlaces covalentes.\n\n");
	fprintf(archivo," - N�mero at�mico 6.\n");
	fprintf(archivo," - Valencia 2,+4,-4.\n");
	fprintf(archivo," - Configuraci�n electr�nica 1s22s22p2.\n");
	fprintf(archivo," - Masa at�mica (g/mol) 12,01115.\n");
	fprintf(archivo," - Densidad (g/ml) 2,26.\n");
	fprintf(archivo," - Punto de ebullici�n (�C) 4830.\n");
	fprintf(archivo," - Punto de fusi�n (�C) 3727.\n\n");
	fprintf(archivo,"- Caracter�sticas por su importancia:\n");
	fprintf(archivo,"-------------------------------------\n\n");
	fprintf(archivo,"Al poder combinar de varias formas, el carbono es un elemento ideal para elaborar los complejos sistemas org�nicos como nuestras c�lulas o las hojas de las plantas. Siendo el n�mero de combinaci�n entre �tomos de carbonos y otros diferentes es casi infinito.\n\n");
	fprintf(archivo,"Con el ox�geno forma dos compuestos gaseosos importantes: mon�xido de carbono (CO), y di�xido de carbono (CO2).\n\n");
	fprintf(archivo,"El carbono presenta una importante capacidad de combinaci�n con otros �tomos ya que puede formar hasta cuatro enlaces con otros �tomos.\n\n");
	fprintf(archivo,"Estos enlaces forman un tetradr�n (una pir�mide con una punta en la parte superior).\n\n");
	fprintf(archivo,"La diversidad de los productos qu�micos org�nicos se debe a la infinidad de opciones que brinda el carbono para enlazarse con otros �tomos. Los qu�micos org�nicos m�s simples, llamados hidrocarburos, contienen solo carbono y �tomos de hidr�geno; el hidrocarburo m�s simple (llamado metano) contiene un solo �tomo de carbono enlazado a cuatro �tomos de hidr�geno.\n\n");
	fprintf(archivo,"Pero el carbono tambi�n puede enlazarse con otros �tomos de carbono adicionalmente al hidr�geno.\n\n");
	
	fclose(archivo);
}
