// FUNCION DE TRABAJO. POTENCIA Y ENERGÍA
void trapen() {
	int tema,continuar;
	
	do {
		do {
			// TEMAS DE TRABAJO. POTENCIA Y ENERGÍA
			p("Trabajo. Potencia y energ%ca:\n",161);
			p("============================\n\n");
			p("[1] - Definici%cn operativa de la magnitud trabajo en el contexto de las transformaciones mec%cnicas.\n",162,160);
			p("[2] - Introducci%cn del concepto de potencia.\n",162);
			p("[3] - Principio de conservaci%cn de la energ%ca mec%cnica en ausencia de fuerzas disipativas.\n\n",162,161,160);
			p("Tema: ");
			fflush(stdin);
			s("%i",&tema);
			p("\n");
		} while(tema < 1 || tema > 3);
		switch(tema) {
			case 1:
				deftrapen();
				break;
			case 2:
				incopo();
				break;
			case 3:
				prienme();
				break;
			default:
				p("No se ha seleccionado una opci%cn v%clida.\n\n",162,160);
		}
		// CONTINUAR O SALIR DE TRABAJO. POTENCIA Y ENERGÍA
		p("%cQui%cres continuar con Trabajo. Potencia y energ%ca?\n",168,130,161);
		p("===================================================\n\n");
		p("[1] - Continuar.\n");
		p("[2] - Salir de Trabajo. Potencia y energ%ca.\n\n",161);
		p("%cContinuar? ",168);
		fflush(stdin);
		s("%i",&continuar);
		p("\n");
	} while(continuar == 1);	
}
