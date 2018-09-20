void ine() {
	FILE *archivo;
	archivo = fopen("Interacción eléctrica. Ley de Coulomb. Estudio del campo eléctrico.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Interacci%cn el%cctrica. Ley de Coulomb. Estudio del campo el%cctrico:\n",162,130,130);
	p("===================================================================\n\n");
	
	fprintf(archivo,"Interacción eléctrica. Ley de Coulomb. Estudio del campo eléctrico:\n");
	fprintf(archivo,"===================================================================\n\n");
	
	fclose(archivo);
}
