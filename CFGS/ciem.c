void ciem() {
	FILE *archivo;
	archivo = fopen("Circuito el�ctrico y magnitudes para su estudio cuantitativo. Ley de Ohm.doc","w");
	if(archivo == NULL) {
		p("No se puede crear el archivo.\n\n");
	}
	
	p("Circuito el%cctrico y magnitudes para su estudio cuantitativo. Ley de Ohm:\n",130);
	p("=========================================================================\n\n");
	
	p("Un circuito el%cctrico est%c formado por la asociaci%cn de una serie de elementos conductores que hacen posible el mantenimiento por su interior de una corriente el%cctrica. Si los generadores producen una diferencia de potencial constante entre sus bornes o polos, la corriente producida ser%c continua. Tal es el caso de las pilas y de las bater%cas.\n\n",130,160,162,130,160,161);
	
	fprintf(archivo,"Circuito el�ctrico y magnitudes para su estudio cuantitativo. Ley de Ohm:\n");
	fprintf(archivo,"=========================================================================\n\n");
	fprintf(archivo,"Un circuito el�ctrico est� formado por la asociaci�n de una serie de elementos conductores que hacen posible el mantenimiento por su interior de una corriente el�ctrica. Si los generadores producen una diferencia de potencial constante entre sus bornes o polos, la corriente producida ser� continua. Tal es el caso de las pilas y de las bater�as.\n\n");
	
	fclose(archivo);
}
