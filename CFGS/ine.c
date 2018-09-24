void ine() {
	FILE *archivo;
	archivo = fopen("Interacci�n el�ctrica. Ley de Coulomb. Estudio del campo el�ctrico.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Interacci%cn el%cctrica. Ley de Coulomb. Estudio del campo el%cctrico:\n",162,130,130);
	p("===================================================================\n\n");
	
	p("Una de las interacciones fundamentales descritas por la f%csica es la electricidad. Aunque conocidos desde antiguo, los fen%cmenos el%cctricos no empezaron a ser explicados de forma sistem%ctica hasta las postrimer%cas del siglo XVIII, y s%clo a mediados del XIX se descubri%c su estrecha relaci%cn con otra manifestaci%cn com%cn de la naturaleza: el magnetismo.\n\n",161,162,130,160,161,162,162,162,162,163);
	
	p("La electricidad en la naturaleza:\n");
	p("---------------------------------\n\n");
	
	p("La carga el%cctrica es una de las propiedades b%csicas de la materia. Aunque la comprensi%cn extensa de sus manifestaciones se resisti%c durante siglos al escrutinio de la ciencia, ya hacia el a%co 600 a. C. los fil%csofos griegos describieron con detalle el experimento por el cual una barra de %cmbar frotado atrae peque%cos pedacitos de paja u otro material ligero (electrizaci%cn por frotamiento).\n\n",130,160,162,162,164,162,160,164,162);
	
	fprintf(archivo,"Interacci�n el�ctrica. Ley de Coulomb. Estudio del campo el�ctrico:\n");
	fprintf(archivo,"===================================================================\n\n");
	fprintf(archivo,"Una de las interacciones fundamentales descritas por la f�sica es la electricidad. Aunque conocidos desde antiguo, los fen�menos el�ctricos no empezaron a ser explicados de forma sistem�tica hasta las postrimer�as del siglo XVIII, y s�lo a mediados del XIX se descubri� su estrecha relaci�n con otra manifestaci�n com�n de la naturaleza: el magnetismo.\n\n");
	fprintf(archivo,"La electricidad en la naturaleza:\n");
	fprintf(archivo,"---------------------------------\n\n");
	fprintf(archivo,"La carga el�ctrica es una de las propiedades b�sicas de la materia. Aunque la comprensi�n extensa de sus manifestaciones se resisti� durante siglos al escrutinio de la ciencia, ya hacia el a�o 600 a. C. los fil�sofos griegos describieron con detalle el experimento por el cual una barra de �mbar frotado atrae peque�os pedacitos de paja u otro material ligero (electrizaci�n por frotamiento).\n\n");
	
	fclose(archivo);
}
