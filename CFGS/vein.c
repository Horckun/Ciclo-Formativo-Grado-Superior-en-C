void vein() {
	FILE *archivo;
	archivo = fopen("Vector Intensidad de campo el�ctrico. Potencial el�ctrico. Diferencia de potencial entre dos puntos de un campo el�ctrico.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Vector Intensidad de campo el%cctrico. Potencial el%cctrico. Diferencia de potencial entre dos puntos de un campo el%cctrico.\n",130,130,130);
	p("==========================================================================================================================\n\n");
	
	p("- Potencial el%cctrico:\n",130);
	p("----------------------\n\n");
	
	fprintf(archivo,"Vector Intensidad de campo el�ctrico. Potencial el�ctrico. Diferencia de potencial entre dos puntos de un campo el�ctrico:\n");
	fprintf(archivo,"==========================================================================================================================\n\n");
	fprintf(archivo,"- Potencial el�ctrico:\n");
	fprintf(archivo,"----------------------\n\n");
	
	fclose(archivo);
}
