void ine() {
	FILE *archivo;
	archivo = fopen("Interacci�n el�ctrica. Ley de Coulomb. Estudio del campo el�ctrico.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Interacci%cn el%cctrica. Ley de Coulomb. Estudio del campo el%cctrico:\n",162,130,130);
	p("===================================================================\n\n");
	
	p("Una de las interacciones fundamentales descritas por la f%csica es la electricidad. Aunque conocidos desde antiguo, los fen%cmenos el%cctricos no empezaron a ser explicados de forma sistem%ctica hasta las postrimer%cas del siglo XVIII, y s%clo a mediados del XIX se descubri%c su estrecha relaci%cn con otra manifestaci%cn com%cn de la naturaleza: el magnetismo.\n\n",161,162,130,160,161,162,162,162,162,163);
	
	fprintf(archivo,"Interacci�n el�ctrica. Ley de Coulomb. Estudio del campo el�ctrico:\n");
	fprintf(archivo,"===================================================================\n\n");
	fprintf(archivo,"Una de las interacciones fundamentales descritas por la f�sica es la electricidad. Aunque conocidos desde antiguo, los fen�menos el�ctricos no empezaron a ser explicados de forma sistem�tica hasta las postrimer�as del siglo XVIII, y s�lo a mediados del XIX se descubri� su estrecha relaci�n con otra manifestaci�n com�n de la naturaleza: el magnetismo.\n\n");
	
	fclose(archivo);
}
