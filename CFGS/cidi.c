// FUNCION DE CINEMATICA
void cidi() {
	int tema,continuar;
	
	do {
		do {
			// TEMAS DE CINEMATICA
			p("Cinem%ctica y din%cmica:\n",160,160);
			p("======================\n\n");
			p("[1] - Relatividad del movimiento. Trayectoria.\n");
			p("[2] - Magnitudes para el estudio del movimiento: posici%cn, distancia recorrida, velocidad y aceleraci%cn.\n",162,162);
			p("[3] - Principios de la din%cmica: Introducci%cn de la fuerza de rozamiento por deslizamiento.\n\n",160,162);
			p("Tema: ");
			fflush(stdin);
			s("%i",&tema);
			p("\n");
		} while(tema < 1 || tema > 3);
		switch(tema) {
			case 1:
				remotra();
				break;
			case 2:
				magesmo();
				break;
			case 3:
				pridi();
				break;
			default:
				p("No se ha seleccionado una opci%cn v%clida.\n\n",162,160);
		}
		// CONTINUAR O SALIR DE CINEMATICA
		p("%cQui%cres continuar con Cinem%ctica y din%cmica?\n",168,130,160,160);
		p("=============================================\n\n");
		p("[1] - Continuar.\n");
		p("[2] - Salir de Cinem%ctica y din%cmica.\n\n",160,160);
		p("%cContinuar? ",168);
		fflush(stdin);
		s("%i",&continuar);
		p("\n");
	} while(continuar == 1);	
}
