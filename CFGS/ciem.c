void ciem() {
	FILE *archivo;
	archivo = fopen("Circuito eléctrico y magnitudes para su estudio cuantitativo: fuerza electromotriz, intensidad y resistencia. Ley de Ohm.doc","w");
	if(archivo == NULL) {
		p("No se puede crear el archivo.\n\n");
	}
	
	p("Circuito el%cctrico y magnitudes para su estudio cuantitativo: fuerza electromotriz, intensidad y resistencia. Ley de Ohm:\n",130);
	p("=========================================================================================================================\n\n");
	
	fprintf(archivo,"Circuito eléctrico y magnitudes para su estudio cuantitativo: fuerza electromotriz, intensidad y resistencia. Ley de Ohm:\n");
	fprintf(archivo,"=========================================================================================================================\n\n");
	
	fclose(archivo);
}
