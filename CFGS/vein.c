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
	
	p("El potencial el%cctrico en un punto del espacio es una magnitud escalar que nos permite obtener una medida del campo el%cctrico en dicho punto a trav%cs de la energ%ca potencial electrost%ctica que adquirir%ca una carga si la situ%csemos en ese punto.\n\n",130,130,130,161,160,161,160);
	
	p("El hecho de que todas las magnitudes sean escalares, permite que el estudio del campo el%cctrico sea m%cs sencillo.\n\n",130,160);
	
	p("- Superficies equipotenciales:\n");
	p("------------------------------\n\n");
	
	fprintf(archivo,"Vector Intensidad de campo eléctrico. Potencial eléctrico. Diferencia de potencial entre dos puntos de un campo eléctrico:\n");
	fprintf(archivo,"==========================================================================================================================\n\n");
	fprintf(archivo,"- Potencial eléctrico:\n");
	fprintf(archivo,"----------------------\n\n");
	fprintf(archivo,"El potencial eléctrico en un punto del espacio es una magnitud escalar que nos permite obtener una medida del campo eléctrico en dicho punto a través de la energía potencial electrostática que adquiriría una carga si la situásemos en ese punto.\n\n");
	fprintf(archivo,"El hecho de que todas las magnitudes sean escalares, permite que el estudio del campo eléctrico sea más sencillo.\n\n");
	fprintf(archivo,"- Superficies equipotenciales:\n");
	fprintf(archivo,"------------------------------\n\n");
	
	fclose(archivo);
}
