void ine() {
	FILE *archivo;
	archivo = fopen("Interacci�n el�ctrica. Ley de Coulomb. Estudio del campo el�ctrico.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Interacci%cn el%cctrica. Ley de Coulomb. Estudio del campo el%cctrico:\n",162,130,130);
	p("===================================================================\n\n");
	
	fprintf(archivo,"Interacci�n el�ctrica. Ley de Coulomb. Estudio del campo el�ctrico:\n");
	fprintf(archivo,"===================================================================\n\n");
	
	fclose(archivo);
}
