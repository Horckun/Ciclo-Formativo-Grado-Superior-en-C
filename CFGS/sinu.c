void sinu() {
	int tema,continuar;
	
	do {
		do {
			p("El sistema internacional de unidades:\n");
			p("=====================================\n\n");
			p("[1] - Unidades b%csicas.\n",160);
			p("[2] - Unidades derivadas sin dimensi%cn.\n",162);
			p("[3] - Unidades derivadas.\n");
			p("[4] - Unidades derivadas con nombres y s%cmbolos especiales.\n",161);
			p("[5] - Unidades derivadas expresadas a partir de las que tienen nombres especiales.\n");
			p("[6] - Nombres y s%cmbolos especiales de m%cltiplos y subm%cltiplos decimales de unidades autorizados.\n",161,163,163);
			p("[7] - Unidades definidas a partir de las unidades, que no son múltiplos o submúltiplos decimales de dichas unidades.\n",163,163);
			p("[8] - Unidades en uso con el Sistema Internacional cuyo valor en unidades se ha obtenido experimentalmente.\n\n");
			p("Tema: ");
			fflush(stdin);
			s("%i",&tema);
			p("\n");
		} while(tema < 1 || tema > 8);
		switch(tema) {
			case 1:
				sinun(tema);
				break;
			case 2:
				sinun(tema);
				break;
			case 3:
				sinun(tema);
				break;
			case 4:
				sinun(tema);
				break;
			case 5:
				sinun(tema);
				break;
			case 6:
				sinun(tema);
				break;
			case 7:
				sinun(tema);
				break;
			case 8:
				sinun(tema);
				break;
			default:
				p("No se ha seleccionado un tema v%clido.\n\n",160);
		}
		p("%cQui%cres continuar con El sistema internacional de unidades?\n",168,130);
		p("============================================================\n\n");
		p("[1] - Continuar.\n");
		p("[2] - Salir de El sistema internacional de unidades.\n\n");
		p("%cContinuar? ",168);
		fflush(stdin);
		s("%i",&continuar);
		p("\n");
	} while(continuar == 1);
}
