void ciem() {
	FILE *archivo;
	archivo = fopen("Circuito eléctrico y magnitudes para su estudio cuantitativo. Ley de Ohm.doc","w");
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
	
	system("pause");
	p("\n");
	
	p("La llamada forma macrosc%cpica de la ley de Ohm cuando se aplica a un alambre conductor entre cuyos extremos se conecta una diferencia de potencial es: I=AV/R donde I es la corriente que se establece en el alambre y R la constante de proporcionalidad a la que llamamos resistencia del alambre. La resistencia tiene por expresi%cn: R=AV/I Esta expresi%cn tiene validez general, cualquiera sea la geometr%ca del conductor, a condici%cn de que el material cumpla la ley de Ohm. Si en particular el conductor es un alambre homog%cneo, la resistencia se puede expresar: R=p*l/S expresi%cn conocida como resistencia en funci%cn de las dimensiones, pues l y S son la longitud y secci%cn del alambre y p la resistividad del material.\n\n",162,162,162,161,162,130,162,162,162);
	
	system("pause");
	p("\n");
	
	p(" - C%cdigo de colores:\n",162);
	p(" --------------------\n\n");
	p(" Las resistencias poseen una serie de anillos de color que nos dan la clave del valor %chmico de la misma.\n\n",162);
	
	p(" ==============================================\n");
	p(" =          =         =         =             =\n");
	p(" = Color    = Banda 1 = Banda 2 = Banda 3     =\n");
	p(" =          =         =         =             =\n");
	p(" ==============================================\n");
	p(" =          =         =         =             =\n");
	p(" = NEGRO    =    0    =    0    = Ningún 0    =\n");
	p(" =          =         =         =             =\n");
	p(" =--------------------------------------------=\n");
	p(" =          =         =         =             =\n");
	p(" = MARR%cN   =    1    =    1    = 0           =\n",224);
	p(" =          =         =         =             =\n");
	p(" =--------------------------------------------=\n");
	p(" =          =         =         =             =\n");
	p(" = ROJO     =    2    =    2    = 00          =\n");
	p(" =          =         =         =             =\n");
	p(" =--------------------------------------------=\n");
	p(" =          =         =         =             =\n");
	p(" = NARANJA  =    3    =    3    = 000         =\n");
	p(" =          =         =         =             =\n");
	p(" =--------------------------------------------=\n");
	
	system("pause");
	p("\n");
	
	p(" =          =         =         =             =\n");
	p(" = AMARILLO =    4    =    4    = 0.000       =\n");
	p(" =          =         =         =             =\n");
	p(" =--------------------------------------------=\n");
	p(" =          =         =         =             =\n");
	p(" = VERDE    =    5    =    5    = 00.000      =\n");
	p(" =          =         =         =             =\n");
	p(" =--------------------------------------------=\n");
	p(" =          =         =         =             =\n");
	p(" = AZUL     =    6    =    6    = 000.000     =\n");
	p(" =          =         =         =             =\n");
	p(" =--------------------------------------------=\n");
	p(" =          =         =         =             =\n");
	p(" = MORADO   =    7    =    7    = 0.000.000   =\n");
	p(" =          =         =         =             =\n");
	p(" =--------------------------------------------=\n");
	p(" =          =         =         =             =\n");
	p(" = GRIS     =    8    =    8    = 00.000.000  =\n");
	p(" =          =         =         =             =\n");
	p(" =--------------------------------------------=\n");
	
	system("pause");
	p("\n");
	
	p(" =          =         =         =             =\n");
	p(" = BLANCO   =    9    =    9    = 000.000.000 =\n");
	p(" =          =         =         =             =\n");
	p(" =--------------------------------------------=\n\n");
	
	p(" =======================\n");
	p(" =                     =\n");
	p(" = Banda 4: Tolerancia =\n");
	p(" =                     =\n");
	p(" =======================\n");
	p(" =                     =\n");
	p(" = ORO %c5%c             =\n",241,37);
	p(" =                     =\n");
	p(" =---------------------=\n");
	p(" =                     =\n");
	p(" = PLATA %c10%c          =\n",241,37);
	p(" =                     =\n");
	p(" =---------------------=\n\n");
	
	fprintf(archivo,"Circuito eléctrico y magnitudes para su estudio cuantitativo. Ley de Ohm:\n");
	fprintf(archivo,"=========================================================================\n\n");
	fprintf(archivo,"Un circuito eléctrico está formado por la asociación de una serie de elementos conductores que hacen posible el mantenimiento por su interior de una corriente eléctrica. Si los generadores producen una diferencia de potencial constante entre sus bornes o polos, la corriente producida será continua. Tal es el caso de las pilas y de las baterías.\n\n");
	fprintf(archivo,"En los circuitos de corriente continua pueden distinguirse básicamente dos tipos de elementos, los generadores y los receptores. Los primeros aportan al circuito la energía necesaria para mantener la corriente eléctrica, los segundos consumen energía eléctrica y, o bien la disipan en forma de calor, como es el caso de las resistencias, o bien la convierten en otra forma de energía, como sucede en los motores.\n\n");
	fprintf(archivo,"Para simplificar el estudio, se supone que las magnitudes o parámetros característicos de estos elementos se concentran en los puntos del circuito donde se representan. Así, la resistencia de los cables de conexión o se desprecia o se supone concentrada en un punto como si se tratara de un elemento de circuito más. El estudio cuantitativo de los circuitos eléctricos de corriente continua se efectúa como una aplicación de dos principios básicos:\n\n");
	fprintf(archivo,"El principio de conservación de la energía referido a la unidad de carga eléctrica, según el cual en todo el circuito, o en cualquier tramo de él, la energía que pierde la corriente eléctrica es igual a la energía cedida por el circuito al exterior. Es, en esencia, la ley de Ohm generalizada e interpretada como balance de energías.\n\n");
	fprintf(archivo,"El principio de no acumulación de cargas, que indica que las cargas no pueden acumularse. Eso significa que si no hay bifurcaciones, la intensidad de corriente es la misma en todo el circuito, y si las hay, la intensidad de corriente que entra en un nudo o punto de bifurcación ha de ser igual a la suma de las que salen de él.\n\n");
	fprintf(archivo,"Tales principios se conocen también como leyes de Kirchoff.\n\n");
	fprintf(archivo,"La llamada forma macroscópica de la ley de Ohm cuando se aplica a un alambre conductor entre cuyos extremos se conecta una diferencia de potencial es: I=AV/R donde I es la corriente que se establece en el alambre y R la constante de proporcionalidad a la que llamamos resistencia del alambre. La resistencia tiene por expresión: R=AV/I Esta expresión tiene validez general, cualquiera sea la geometría del conductor, a condición de que el material cumpla la ley de Ohm. Si en particular el conductor es un alambre homogéneo, la resistencia se puede expresar: R=p·l/S expresión conocida como resistencia en función de las dimensiones, pues l y S son la longitud y sección del alambre y p la resistividad del material.\n\n");
	fprintf(archivo," - Código de colores:\n");
	fprintf(archivo," --------------------\n\n");
	fprintf(archivo," Las resistencias poseen una serie de anillos de color que nos dan la clave del valor óhmico de la misma.\n\n");
	fprintf(archivo," ==============================================\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," = Color    = Banda 1 = Banda 2 = Banda 3     =\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," ==============================================\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," = NEGRO    =    0    =    0    = Ningún 0    =\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," =--------------------------------------------=\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," = MARRÓN   =    1    =    1    = 0           =\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," =--------------------------------------------=\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," = ROJO     =    2    =    2    = 00          =\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," =--------------------------------------------=\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," = NARANJA  =    3    =    3    = 000         =\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," =--------------------------------------------=\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," = AMARILLO =    4    =    4    = 0.000       =\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," =--------------------------------------------=\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," = VERDE    =    5    =    5    = 00.000      =\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," =--------------------------------------------=\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," = AZUL     =    6    =    6    = 000.000     =\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," =--------------------------------------------=\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," = MORADO   =    7    =    7    = 0.000.000   =\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," =--------------------------------------------=\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," = GRIS     =    8    =    8    = 00.000.000  =\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," =--------------------------------------------=\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," = BLANCO   =    9    =    9    = 000.000.000 =\n");
	fprintf(archivo," =          =         =         =             =\n");
	fprintf(archivo," =--------------------------------------------=\n\n");
	fprintf(archivo," =======================\n");
	fprintf(archivo," =                     =\n");
	fprintf(archivo," = Banda 4: Tolerancia =\n");
	fprintf(archivo," =                     =\n");
	fprintf(archivo," =======================\n");
	fprintf(archivo," =                     =\n");
	fprintf(archivo," = ORO ±5%c             =\n",37);
	fprintf(archivo," =                     =\n");
	fprintf(archivo," =---------------------=\n");
	fprintf(archivo," =                     =\n");
	fprintf(archivo," = PLATA ±10%c          =\n",37);
	fprintf(archivo," =                     =\n");
	fprintf(archivo," =---------------------=\n\n");
	
	fclose(archivo);
}
