void ine() {
	FILE *archivo;
	archivo = fopen("Interacción eléctrica. Ley de Coulomb. Estudio del campo eléctrico.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Interacci%cn el%cctrica. Ley de Coulomb. Estudio del campo el%cctrico:\n",162,130,130);
	p("===================================================================\n\n");
	
	p("Una de las interacciones fundamentales descritas por la f%csica es la electricidad. Aunque conocidos desde antiguo, los fen%cmenos el%cctricos no empezaron a ser explicados de forma sistem%ctica hasta las postrimer%cas del siglo XVIII, y s%clo a mediados del XIX se descubri%c su estrecha relaci%cn con otra manifestaci%cn com%cn de la naturaleza: el magnetismo.\n\n",161,162,130,160,161,162,162,162,162,163);
	
	fprintf(archivo,"Interacción eléctrica. Ley de Coulomb. Estudio del campo eléctrico:\n");
	fprintf(archivo,"===================================================================\n\n");
	fprintf(archivo,"Una de las interacciones fundamentales descritas por la física es la electricidad. Aunque conocidos desde antiguo, los fenómenos eléctricos no empezaron a ser explicados de forma sistemática hasta las postrimerías del siglo XVIII, y sólo a mediados del XIX se descubrió su estrecha relación con otra manifestación común de la naturaleza: el magnetismo.\n\n");
	
	fclose(archivo);
}
