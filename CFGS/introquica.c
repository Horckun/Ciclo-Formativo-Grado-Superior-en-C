void introquica() {
	int tema,continuar;
	
	do {
		do {
			p("Introducci%cn a la qu%cmica del carbono:\n",162,161);
			p("======================================\n\n");
			p("[1] - Posibilidades de combinaci%cn que tiene el carbono.\n",162);
			p("[2] - Clasificaci%cn de las funciones org%cnicas. Alcanos, alquenos y alquinos, hidrocarburos arom%cticos sencillos, alcoholes, %cteres, aldeh%cdos, cetonas, %ccidos, %csteres, aminas y compuestos halogenados.\n\n",162,160,160,130,161,160,130);
			p("Tema: ");
			fflush(stdin);
			s("%d",&tema);
			p("\n");
		} while(tema < 1 || tema > 2);
		switch(tema) {
			case 1:
				pococa();
				break;
			case 2:
				clafuo();
				break;
			default:
				p("No se ha seleccionado una opci%cn v%clida.\n\n",162,160);
		}
		p("%cQui%cres continuar con Introducci%cn a la qu%cmica del carbono?:\n",168,130,162,161);
		p("==============================================================\n\n");
		p("[1] - Continuar.\n");
		p("[2] - Salir de Introducci%cn a la qu%cmica del carbono:\n\n",162,161);
		p("%cContinuar? ",168);
		fflush(stdin);
		s("%d",&continuar);
		p("\n");
	} while(continuar == 1);
}
