void ciem() {
	FILE *archivo;
	archivo = fopen("Circuito el�ctrico y magnitudes para su estudio cuantitativo. Ley de Ohm.doc","w");
	if(archivo == NULL) {
		p("No se puede crear el archivo.\n\n");
	}
	
	p("Circuito el%cctrico y magnitudes para su estudio cuantitativo. Ley de Ohm:\n",130);
	p("=========================================================================\n\n");
	
	p("Un circuito el%cctrico est%c formado por la asociaci%cn de una serie de elementos conductores que hacen posible el mantenimiento por su interior de una corriente el%cctrica. Si los generadores producen una diferencia de potencial constante entre sus bornes o polos, la corriente producida ser%c continua. Tal es el caso de las pilas y de las bater%cas.\n\n",130,160,162,130,160,161);
	
	p("En los circuitos de corriente continua pueden distinguirse b%csicamente dos tipos de elementos, los generadores y los receptores. Los primeros aportan al circuito la energ%ca necesaria para mantener la corriente el%cctrica, los segundos consumen energ%ca el%cctrica y, o bien la disipan en forma de calor, como es el caso de las resistencias, o bien la convierten en otra forma de energ%ca, como sucede en los motores.\n\n",160,161,130,161,130,161);
	
	fprintf(archivo,"Circuito el�ctrico y magnitudes para su estudio cuantitativo. Ley de Ohm:\n");
	fprintf(archivo,"=========================================================================\n\n");
	fprintf(archivo,"Un circuito el�ctrico est� formado por la asociaci�n de una serie de elementos conductores que hacen posible el mantenimiento por su interior de una corriente el�ctrica. Si los generadores producen una diferencia de potencial constante entre sus bornes o polos, la corriente producida ser� continua. Tal es el caso de las pilas y de las bater�as.\n\n");
	fprintf(archivo,"En los circuitos de corriente continua pueden distinguirse b�sicamente dos tipos de elementos, los generadores y los receptores. Los primeros aportan al circuito la energ�a necesaria para mantener la corriente el�ctrica, los segundos consumen energ�a el�ctrica y, o bien la disipan en forma de calor, como es el caso de las resistencias, o bien la convierten en otra forma de energ�a, como sucede en los motores.\n\n");
	
	fclose(archivo);
}
