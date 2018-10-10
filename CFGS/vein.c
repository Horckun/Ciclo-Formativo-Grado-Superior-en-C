void vein() {
	FILE *archivo;
	archivo = fopen("Vector Intensidad de campo eléctrico. Potencial eléctrico. Diferencia de potencial entre dos puntos de un campo eléctrico.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Vector Intensidad de campo el%cctrico. Potencial el%cctrico. Diferencia de potencial entre dos puntos de un campo el%cctrico.\n",130,130,130);
	p("==========================================================================================================================\n\n");
	
	p("- Potencial el%cctrico:\n",130);
	p("----------------------\n\n");
	
	fprintf(archivo,"Vector Intensidad de campo eléctrico. Potencial eléctrico. Diferencia de potencial entre dos puntos de un campo eléctrico:\n");
	fprintf(archivo,"==========================================================================================================================\n\n");
	fprintf(archivo,"- Potencial eléctrico:\n");
	fprintf(archivo,"----------------------\n\n");
	
	fclose(archivo);
}
