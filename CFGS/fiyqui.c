// FUNCION DE FISICA Y QUIMICA
void fiyqui() {
	int opcion,continuar;
	
	do {
		do {
			// LISTADO DE TEMARIOS DE FISICA Y QUIMICA
			p("F%csica y qu%cmica:\n",161,161);
			p("=================\n\n");
			p("[1] - Las magnitudes f%csicas y su medida.\n",161);
			p("[2] - Cinem%ctica y din%cmica.\n",160,160);
			p("[3] - Trabajo. Potencia y Energ%ca.\n",161);
			p("[4] - Electrost%ctica y corriente el%cctrica.\n",160,130);
			p("[5] - Revisi%cn y profundizaci%cn de la teor%ca at%cmicomolecular.\n\n",162,162,161,162);
			p("Tema: ");
			fflush(stdin);
			s("%i",&opcion);
			p("\n");
		} while(opcion < 1 || opcion > 5);
		switch(opcion) {
			case 1:
				magfime();
				break;
			case 2:
				cidi();
				break;
			case 3:
				trapen();
				break;
			case 4:
				eleco();
				break;
			case 5:
				reproteato();
				break;
			default:
				p("No se ha seleccionado una opci%cn v%clida.\n\n",162,160);
		}
		// CONTINUAR O SALIR DE FISICA Y QUIMICA
		p("%cQui%cres continuar en F%csica y qu%cmica?\n",168,130,161,161);
		p("=======================================\n\n");
		p("[1] - Continuar.\n");
		p("[2] - Salir de F%csica y qu%cmica.\n\n",161,161);
		p("%cContinuar? ",168);
		fflush(stdin);
		s("%i",&continuar);
		p("\n");
	} while(continuar == 1);
}
