// FUNCION DE ELECTROSTÁTICA Y CORRIENTE ELÉCTRICA
void eleco() {
	int tema,continuar;
	
	do {
		do {
			// TEMAS DE ELECTROSTÁTICA Y CORRIENTE ELÉCTRICA
			p("Electrost%ctica y corriente el%cctrica:\n",160,130);
			p("=====================================\n\n");
			p("[1] - Revisi%cn de la fenomenolog%ca de la electrizaci%cn. Naturaleza el%cctrica de la materia. Principio de conservaci%cn de la carga.\n\n",162,161,162,130,162);
			p("Tema: ");
			fflush(stdin);
			s("%i",&tema);
			p("\n");
		} while(tema != 1);
		switch(tema) {
			case 1:
				refel();
				break;
			default:
				p("No se ha seleccionado una opci%cn v%clida.\n\n",162,160);
		}
		// CONTINUAR O SALIR DE ELECTROSTÁTICA Y CORRIENTE ELÉCTRICA
		p("%cQui%cres continuar con Electrost%ctica y corriente el%cctrica?\n",168,130,160,130);
		p("============================================================\n\n");
		p("[1] - Continuar.\n");
		p("[2] - Salir de Electrost%ctica y corriente el%cctrica.\n\n",160,130);
		p("%cContinuar? ",168);
		fflush(stdin);
		s("%i",&continuar);
		p("\n");
	} while(continuar == 1);	
}
