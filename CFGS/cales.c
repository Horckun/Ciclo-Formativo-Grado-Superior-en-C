void cales() {
	int tema,continuar;
	
	do {
		do {
			p("C%clculos estequiom%ctricos con reacciones qu%cmicas:\n",160,130,161);
			p("==================================================\n\n");
			p("[1] - Modelo elemental de reacci%cn a partir de las colisiones que provocan roturas y formaci%cn de nuevos enlaces.\n",162,162);
			p("[2] - Ajuste de reacciones a partir de la ley de la conservaci%cn de la masa.\n\n",162);
			p("Tema: ");
			fflush(stdin);
			s("%d",&tema);
			p("\n");
		} while(tema < 1 || tema > 2);
		switch(tema) {
			case 1:
				model();
				break;
			case 2:
				ajusre();
				break;
			default:
				p("No se ha seleccionado una opci%cn v%clida.\n\n",162,160);
		}
		p("%cQui%cres continuar con C%clculos estequiom%ctricos con reacciones qu%cmicas?:\n",168,130,160,130,161);
		p("==========================================================================\n\n");
		p("[1] - Continuar.\n");
		p("[2] - Salir de C%clculos estequiom%ctricos con reacciones qu%cmicas:\n\n",160,130,161);
		p("%cContinuar? ",168);
		fflush(stdin);
		s("%d",&continuar);
		p("\n");
	} while(continuar == 1);
}
