void introquica() {
	int tema,continuar;
	
	do {
		do {
			p("Introducci%cn a la qu%cmica del carbono:\n",162,161);
			p("======================================\n\n");
			p("[1] - Posibilidades de combinaci%cn que tiene el carbono.\n\n",162);
			p("Tema: ");
			fflush(stdin);
			s("%d",&tema);
			p("\n");
		} while(tema != 1);
		switch(tema) {
			case 1:
				pococa();
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
