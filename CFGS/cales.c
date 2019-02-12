void cales() {
	int tema,continuar;
	
	do {
		do {
			p("C%clculos estequiom%ctricos con reacciones qu%cmicas:\n",160,130,161);
			p("==================================================\n\n");
			p("[1] - Modelo elemental de reacci%cn a partir de las colisiones que provocan roturas y formaci%cn de nuevos enlaces.\n",162,162);
			p("[2] - Ajuste de reacciones a partir de la ley de la conservaci%cn de la masa.\n",162);
			p("[3] - Informaci%cn que se puede extraer de una reacci%cn ajustada y realizaci%cn de c%clculos con cantidades de sustancia involucrada en una reacci%cn qu%cmica (c%clculos estequiom%ctricos). C%clculos con intervenci%cn de gases.\n",162,162,162,160,162,161,160,130,160,162);
			p("[4] - C%clculos estequiom%ctricos con reacciones en las que intervienen disoluciones.\n\n",160,130);
			p("Tema: ");
			fflush(stdin);
			s("%d",&tema);
			p("\n");
		} while(tema < 1 || tema > 4);
		switch(tema) {
			case 1:
				model();
				break;
			case 2:
				ajusre();
				break;
			case 3:
				inforeare();
				break;
			case 4:
				calere();
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
