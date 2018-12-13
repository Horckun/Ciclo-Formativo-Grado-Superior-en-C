// FUNCION DE ELECTROSTÁTICA Y CORRIENTE ELÉCTRICA
void eleco() {
	int tema,continuar;
	
	do {
		do {
			// TEMAS DE ELECTROSTÁTICA Y CORRIENTE ELÉCTRICA
			p("Electrost%ctica y corriente el%cctrica:\n",160,130);
			p("=====================================\n\n");
			p("[1] - Revisi%cn de la fenomenolog%ca de la electrizaci%cn. Naturaleza el%cctrica de la materia. Principio de conservaci%cn de la carga.\n",162,161,162,130,162);
			p("[2] - Interacci%cn el%cctrica. Ley de Coulomb. Estudio del campo el%cctrico.\n",162,130,130);
			p("[3] - Vector Intensidad de campo el%cctrico. Potencial el%cctrico. Diferencia de potencial entre dos puntos de un campo el%cctrico.\n",130,130,130);
			p("[4] - Circuito el%cctrico y magnitudes para su estudio cuantitativo. Ley de Ohm.\n",130);
			p("[5] - Factores de los que depende la resistencia de un conductor.\n");
			p("[6] - Ley de Ohm para un circuito completo. Asociaciones de resistencias.\n\n");
			p("Tema: ");
			fflush(stdin);
			s("%i",&tema);
			p("\n");
		} while(tema < 1 || tema > 6);
		switch(tema) {
			case 1:
				refel();
				break;
			case 2:
				ine();
				break;
			case 3:
				vein();
				break;
			case 4:
				ciem();
				break;
			case 5:
				fadereco();
				break;
			case 6:
				leocico();
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
