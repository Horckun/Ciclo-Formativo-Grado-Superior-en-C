void elase() {
	int tema,continuar;
	
	do {
		do {
			p("El %ctomo y sus enlaces:\n",160);
			p("=======================\n\n");
			p("[1] - Papel de los modelos at%cmicos en el avance de la qu%cmica: modelos de Thomson y de Rutherford. Conceptos de masa at%cmica y n%cmero at%cmico. Part%cculas subat%cmicas. Is%ctopos y su representaci%cn. Modelo at%cmico de Bohr.\n",162,161,162,163,162,161,162,162,162,162);
			p("[2] - El modelo basado en la disposici%cn de electrones en niveles sucesivos. Concepto de orbital. Los n%cmeros cu%cnticos. Notaci%cn de los orbitales y configuraci%cn electr%cnica. Tabla peri%cdica de los elementos y su interpretaci%cn electr%cnica.\n",162,163,160,162,162,162,162,162,162);
			p("[3] - El enlace i%cnico y el covalente a partir de la regla del octeto, utilizando los diagramas de Lewis. Enlaces m%cltiples en el covalente para justificar mol%cculas como la de ox%cgeno o la de nitr%cgeno. Introducci%cn al enlace met%clico.\n",162,163,130,161,162,162,160);
			p("[4] - Fuerzas intermoleculares. Enlaces de hidr%cgeno y fuerzas de Van der Waals.\n",162);
			p("[5] - Propiedades de los compuestos como consecuencia del enlace. S%clidos covalentes, s%clidos at%cmicos, s%clidos i%cnicos y s%clidos met%clicos.\n",162,162,162,162,162,162,160);
			p("[6] - Introducci%cn de las reglas de la IUPAC para la formulaci%cn de los compuestos binarios m%cs comunes. Nomenclatura y formulaci%cn IUPAC para compuestos inorg%cnicos sencillos.\n\n",162,162,160,162,160);
			p("Tema: ");
			fflush(stdin);
			s("%i",&tema);
			p("\n");
		} while(tema < 1 || tema > 6);
		switch(tema) {
			case 1:
				pamoa();
				break;
			case 2:
				emoba();
				break;
			case 3:
				enico();
				break;
			case 4:
				fuerin();
				break;
			case 5:
				procom();
				break;
			case 6:
				inre();
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
