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
	
	p("Para simplificar el estudio, se supone que las magnitudes o par%cmetros caracter%csticos de estos elementos se concentran en los puntos del circuito donde se representan. As%c, la resistencia de los cables de conexi%cn o se desprecia o se supone concentrada en un punto como si se tratara de un elemento de circuito m%cs. El estudio cuantitativo de los circuitos el%cctricos de corriente continua se efect%ca como una aplicaci%cn de dos principios b%csicos:\n\n",160,161,161,162,160,130,163,162,160);
	
	p("El principio de conservaci%cn de la energ%ca referido a la unidad de carga el%cctrica, seg%cn el cual en todo el circuito, o en cualquier tramo de %cl, la energ%ca que pierde la corriente el%cctrica es igual a la energ%ca cedida por el circuito al exterior. Es, en esencia, la ley de Ohm generalizada e interpretada como balance de energ%cas.\n\n",162,161,130,163,130,130,161,161);
	
	p("El principio de no acumulaci%cn de cargas, que indica que las cargas no pueden acumularse. Eso significa que si no hay bifurcaciones, la intensidad de corriente es la misma en todo el circuito, y si las hay, la intensidad de corriente que entra en un nudo o punto de bifurcaci%cn ha de ser igual a la suma de las que salen de %cl.\n\n",162,162,130);
	
	p("Tales principios se conocen tambi%cn como leyes de Kirchoff.\n\n",130);
	
	fprintf(archivo,"Circuito el�ctrico y magnitudes para su estudio cuantitativo. Ley de Ohm:\n");
	fprintf(archivo,"=========================================================================\n\n");
	fprintf(archivo,"Un circuito el�ctrico est� formado por la asociaci�n de una serie de elementos conductores que hacen posible el mantenimiento por su interior de una corriente el�ctrica. Si los generadores producen una diferencia de potencial constante entre sus bornes o polos, la corriente producida ser� continua. Tal es el caso de las pilas y de las bater�as.\n\n");
	fprintf(archivo,"En los circuitos de corriente continua pueden distinguirse b�sicamente dos tipos de elementos, los generadores y los receptores. Los primeros aportan al circuito la energ�a necesaria para mantener la corriente el�ctrica, los segundos consumen energ�a el�ctrica y, o bien la disipan en forma de calor, como es el caso de las resistencias, o bien la convierten en otra forma de energ�a, como sucede en los motores.\n\n");
	fprintf(archivo,"Para simplificar el estudio, se supone que las magnitudes o par�metros caracter�sticos de estos elementos se concentran en los puntos del circuito donde se representan. As�, la resistencia de los cables de conexi�n o se desprecia o se supone concentrada en un punto como si se tratara de un elemento de circuito m�s. El estudio cuantitativo de los circuitos el�ctricos de corriente continua se efect�a como una aplicaci�n de dos principios b�sicos:\n\n");
	fprintf(archivo,"El principio de conservaci�n de la energ�a referido a la unidad de carga el�ctrica, seg�n el cual en todo el circuito, o en cualquier tramo de �l, la energ�a que pierde la corriente el�ctrica es igual a la energ�a cedida por el circuito al exterior. Es, en esencia, la ley de Ohm generalizada e interpretada como balance de energ�as.\n\n");
	fprintf(archivo,"El principio de no acumulaci�n de cargas, que indica que las cargas no pueden acumularse. Eso significa que si no hay bifurcaciones, la intensidad de corriente es la misma en todo el circuito, y si las hay, la intensidad de corriente que entra en un nudo o punto de bifurcaci�n ha de ser igual a la suma de las que salen de �l.\n\n");
	fprintf(archivo,"Tales principios se conocen tambi�n como leyes de Kirchoff.\n\n");
	
	fclose(archivo);
}
