void elase() {
	int tema,continuar;
	
	do {
		do {
			p("El %ctomo y sus enlaces:\n",160);
			p("=======================\n\n");
			p("[1] - Papel de los modelos at%cmicos en el avance de la qu%cmica: modelos de Thomson y de Rutherford. Conceptos de masa at%cmica y n%cmero at%cmico. Part%cculas subat%cmicas. Is%ctopos y su representaci%cn. Modelo at%cmico de Bohr.\n",162,161,162,163,162,161,162,162,162,162);
			p("[2] - El modelo basado en la disposici%cn de electrones en niveles sucesivos. Concepto de orbital. Los n%cmeros cu%cnticos. Notaci%cn de los orbitales y configuraci%cn electr%cnica. Tabla peri%cdica de los elementos y su interpretaci%cn electr%cnica.\n\n",162,163,160,162,162,162,162,162,162);
			p("Tema: ");
			fflush(stdin);
			s("%i",&tema);
			p("\n");
		} while(tema < 1 || tema > 2);
		switch(tema) {
			case 1:
				pamoa();
				break;
			case 2:
				emoba();
				break;
			default:
				p("No se ha seleccionado una opci%cn v%clida.\n\n",162,160);
		}
		p("%cQui%cres continuar con El %ctomo y sus enlaces:\n",168,130,160);
		p("==============================================\n\n");
		p("[1] - Continuar.\n");
		p("[2] - Salir de El %ctomo y sus enlaces:\n\n",160);
		p("%cContinuar? ",168);
		fflush(stdin);
		s("%i",&continuar);
		p("\n");
	} while(continuar == 1);
}
