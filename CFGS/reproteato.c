void reproteato() {
	int tema,continuar;
	
	do {
		do {
			p("Revisi%cn y profundizaci%cn de la teor%ca at%cmicomolecular:\n",162,162,161,162);
			p("========================================================\n\n");
			p("[1] - La clasificaci%cn de las sustancias: elementos, compuestos y mezclas.\n",162);
			p("[2] - Leyes ponderales de la qu%cmica. Teor%ca at%cmica de Dalton y justificaci%cn de las leyes ponderales.\n",161,161,162,162);
			p("[3] - Las leyes volum%ctricas de Gay-Lussac y las hip%ctesis de Avogadro. El concepto de mol. Masas at%cmicas y moleculares.\n",130,162,162);
			p("[4] - Composici%cn centesimal. F%crmulas emp%cricas y moleculares.\n\n",162,162,161);
			p("Tema: ");
			fflush(stdin);
			s("%i",&tema);
			p("\n");
		} while(tema < 1 || tema > 4);
		switch(tema) {
			case 1:
				clasu();
				break;
			case 2:
				lepoqui();
				break;
			case 3:
				levogay();
				break;
			case 4: {
				comcen();
				break;
			}
			default:
				p("No se ha seleccionado una opci%cn v%clida.\n\n",162,160);
		}
		p("%cQui%cres continuar con Revisi%cn y profundizaci%cn de la teor%ca at%cmicomolecular:\n",168,130,162,162,161,162);
		p("===============================================================================\n\n");
		p("[1] - Continuar.\n");
		p("[2] - Salir de Revisi%cn y profundizaci%cn de la teor%ca at%cmicomolecular:\n\n",162,162,161,162);
		p("%cContinuar? ",168);
		fflush(stdin);
		s("%i",&continuar);
		p("\n");
	} while(continuar == 1);
}
