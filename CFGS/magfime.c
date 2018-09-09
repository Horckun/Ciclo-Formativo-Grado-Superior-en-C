void magfime() {
	int tema,continuar;
	
	do {
		do {
			p("Las magnitudes f%csicas y su medida:\n",161);
			p("===================================\n\n");
			p("[1] - El sistema m%ctrico decimal.\n",130);
			p("[2] - El sistema internacional de unidades.\n");
			p("[3] - Conversiones de unidades con factores de conversi%cn. Unidades compuestas.\n",162);
			p("[4] - Magnitudes escalares y vectoriales.\n\n");
			p("Tema: ");
			fflush(stdin);
			s("%i",&tema);
			p("\n");
		} while(tema < 1 || tema > 4);
		switch(tema) {
			case 1:
				simede();
				break;
			case 2:
				sinu();
				break;
			case 3:
				unco();
				break;
			case 4:
				magesve();
				break;
			default:
				p("No se ha seleccionado una opci%cn v%clida.\n\n",162,160);
		}
		p("%cQui%cres continuar con Las magnitudes f%csicas y su medida?\n",168,130,161);
		p("==================================================\n\n");
		p("[1] - Continuar.\n");
		p("[2] - Salir de Las magnitudes f%csicas y su medida.\n\n",161);
		p("%cContinuar? ",168);
		fflush(stdin);
		s("%i",&continuar);
		p("\n");
	} while(continuar == 1);	
}
