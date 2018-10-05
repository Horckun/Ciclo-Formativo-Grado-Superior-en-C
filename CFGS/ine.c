void ine() {
	FILE *archivo;
	archivo = fopen("Interacción eléctrica. Ley de Coulomb. Estudio del campo eléctrico.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Interacci%cn el%cctrica. Ley de Coulomb. Estudio del campo el%cctrico:\n",162,130,130);
	p("===================================================================\n\n");
	
	p("Una de las interacciones fundamentales descritas por la f%csica es la electricidad. Aunque conocidos desde antiguo, los fen%cmenos el%cctricos no empezaron a ser explicados de forma sistem%ctica hasta las postrimer%cas del siglo XVIII, y s%clo a mediados del XIX se descubri%c su estrecha relaci%cn con otra manifestaci%cn com%cn de la naturaleza: el magnetismo.\n\n",161,162,130,160,161,162,162,162,162,163);
	
	p("- La electricidad en la naturaleza:\n");
	p("-----------------------------------\n\n");
	
	p("La carga el%cctrica es una de las propiedades b%csicas de la materia. Aunque la comprensi%cn extensa de sus manifestaciones se resisti%c durante siglos al escrutinio de la ciencia, ya hacia el a%co 600 a. C. los fil%csofos griegos describieron con detalle el experimento por el cual una barra de %cmbar frotado atrae peque%cos pedacitos de paja u otro material ligero (electrizaci%cn por frotamiento).\n\n",130,160,162,162,164,162,160,164,162);
	
	p("Los fen%cmenos el%cctricos, indivisiblemente unidos a los magn%cticos, est%cn presentes en todas partes, ya sea en las tormentas, la radiaci%cn solar o el cerebro humano. Modernamente, sus propiedades se aprovechan en m%cltiples campos de actividad, y la electricidad se ha convertido en una forma esencial de consumo y transporte de energ%ca.\n\n",162,130,130,160,162,163,161);
	
	p("Por su naturaleza el%cctrica, los cuerpos f%csicos se clasifican en conductores, que transmiten la electricidad f%ccilmente, y aislantes o diel%cctricos, que oponen una resistencia elevada a su paso. Los semiconductores presentan una conductividad intermedia entre estas dos clases.\n\n",130,161,160,130);
	
	system("pause");
	p("\n");
	
	p("- Cargas el%cctricas:\n",130);
	p("--------------------\n\n");
	
	p("La esencia de la electricidad es la carga el%cctrica. Esta cualidad existe en dos clases distintas, que se denominan cargas positivas y negativas. Las cargas el%cctricas de la misma clase o signo se repelen mutuamente y las de signo distinto se atraen.\n\n",130,130);
	
	p("En realidad, la carga el%cctrica de un cuerpo u objeto es la suma de las cargas de cada uno de sus constituyentes m%cnimos: mol%cculas, %ctomos y part%cculas elementales. Por ello se dice que la carga el%cctrica est%c cuantizada. Adem%cs, las cargas se pueden mover o intercambiar, pero sin que se produzcan cambios en su cantidad total (ley de conservaci%cn de la carga).\n\n",130,161,130,160,161,130,160,160,162);
	
	p("En el estado normal de los cuerpos materiales, las cargas el%cctricas m%cnimas est%cn compensadas, por lo que dichos cuerpos se comportan el%cctricamente como neutros. Hace falta una acci%cn externa para que un objeto material se electrice.\n\n",130,161,160,130,162);
	
	p("La electrizaci%cn de un cuerpo se consigue extrayendo del mismo las cargas de un signo y dejando en %cl las de signo contrario. En tal caso, el cuerpo adquiere una carga el%cctrica neta no nula.\n\n",162,130,130);
	
	system("pause");
	p("\n");
	
	p("- Fuerza el%cctrica:\n",130);
	p("-------------------\n\n");
	
	p("Los fen%cmenos de la electrizaci%cn y la conducci%cn pueden explicarse como el resultado de la acci%cn de fuerzas el%cctricas. Entre dos cargas pr%cximas inicialmente en reposo siempre se establece un tipo de fuerzas, llamadas electrost%cticas, de tal forma que, si las part%cculas cargadas son suficientemente peque%cas como para que puedan considerarse puntuales, se cumple en las siguientes condiciones:\n\n",162,162,162,162,130,162,160,161,164);
	
	p(" - La fuerza establecida entre ambas tiene una direcci%cn que coincide con una l%cnea recta imaginaria que une las dos cargas.\n\n",162,161);
	
	p(" - La fuerza ejercida sobre una carga apunta hacia la otra cuando las dos tienen distinto signo (fuerza atractiva).\n\n");
	
	p(" - El sentido de la fuerza se dirige hacia el lado opuesto de la carga cuando ambas tienen el mismo signo (fuerza repulsiva).\n\n");
	
	system("pause");
	p("\n");
	
	p("- Ley de Coulomb:\n");
	p("-----------------\n\n");
	
	p("La magnitud de las fuerzas el%cctricas de atracci%cn y repulsi%cn entre cargas se rige por el principio fundamental de la electrost%ctica, tambi%cn llamado ley de Coulomb. Esta ley establece que la fuerza de atracci%cn entre dos cargas el%cctricas puntuales de distinto o igual signo es directamente proporcional al producto del valor de sus cargas e inversamente proporcional al cuadrado de la distancia que las separa:\n\n",130,162,162,160,130,162,130);
	
	fprintf(archivo,"Interacción eléctrica. Ley de Coulomb. Estudio del campo eléctrico:\n");
	fprintf(archivo,"===================================================================\n\n");
	fprintf(archivo,"Una de las interacciones fundamentales descritas por la física es la electricidad. Aunque conocidos desde antiguo, los fenómenos eléctricos no empezaron a ser explicados de forma sistemática hasta las postrimerías del siglo XVIII, y sólo a mediados del XIX se descubrió su estrecha relación con otra manifestación común de la naturaleza: el magnetismo.\n\n");
	fprintf(archivo,"- La electricidad en la naturaleza:\n");
	fprintf(archivo,"-----------------------------------\n\n");
	fprintf(archivo,"La carga eléctrica es una de las propiedades básicas de la materia. Aunque la comprensión extensa de sus manifestaciones se resistió durante siglos al escrutinio de la ciencia, ya hacia el año 600 a. C. los filósofos griegos describieron con detalle el experimento por el cual una barra de ámbar frotado atrae pequeños pedacitos de paja u otro material ligero (electrización por frotamiento).\n\n");
	fprintf(archivo,"Los fenómenos eléctricos, indivisiblemente unidos a los magnéticos, están presentes en todas partes, ya sea en las tormentas, la radiación solar o el cerebro humano. Modernamente, sus propiedades se aprovechan en múltiples campos de actividad, y la electricidad se ha convertido en una forma esencial de consumo y transporte de energía.\n\n");
	fprintf(archivo,"Por su naturaleza eléctrica, los cuerpos físicos se clasifican en conductores, que transmiten la electricidad fácilmente, y aislantes o dieléctricos, que oponen una resistencia elevada a su paso. Los semiconductores presentan una conductividad intermedia entre estas dos clases.\n\n");
	fprintf(archivo,"- Cargas eléctricas:\n");
	fprintf(archivo,"--------------------\n\n");
	fprintf(archivo,"La esencia de la electricidad es la carga eléctrica. Esta cualidad existe en dos clases distintas, que se denominan cargas positivas y negativas. Las cargas eléctricas de la misma clase o signo se repelen mutuamente y las de signo distinto se atraen.\n\n");
	fprintf(archivo,"En realidad, la carga eléctrica de un cuerpo u objeto es la suma de las cargas de cada uno de sus constituyentes mínimos: moléculas, átomos y partículas elementales. Por ello se dice que la carga eléctrica está cuantizada. Además, las cargas se pueden mover o intercambiar, pero sin que se produzcan cambios en su cantidad total (ley de conservación de la carga).\n\n");
	fprintf(archivo,"En el estado normal de los cuerpos materiales, las cargas eléctricas mínimas están compensadas, por lo que dichos cuerpos se comportan eléctricamente como neutros. Hace falta una acción externa para que un objeto material se electrice.\n\n");
	fprintf(archivo,"La electrización de un cuerpo se consigue extrayendo del mismo las cargas de un signo y dejando en él las de signo contrario. En tal caso, el cuerpo adquiere una carga eléctrica neta no nula.\n\n");
	fprintf(archivo,"- Fuerza eléctrica:\n");
	fprintf(archivo,"-------------------\n\n");
	fprintf(archivo,"Los fenómenos de la electrización y la conducción pueden explicarse como el resultado de la acción de fuerzas eléctricas. Entre dos cargas próximas inicialmente en reposo siempre se establece un tipo de fuerzas, llamadas electrostáticas, de tal forma que, si las partículas cargadas son suficientemente pequeñas como para que puedan considerarse puntuales, se cumple en las siguientes condiciones:\n\n");
	fprintf(archivo," - La fuerza establecida entre ambas tiene una dirección que coincide con una línea recta imaginaria que une las dos cargas.\n\n");
	fprintf(archivo," - La fuerza ejercida sobre una carga apunta hacia la otra cuando las dos tienen distinto signo (fuerza atractiva).\n\n");
	fprintf(archivo," - El sentido de la fuerza se dirige hacia el lado opuesto de la carga cuando ambas tienen el mismo signo (fuerza repulsiva).\n\n");
	fprintf(archivo,"- Ley de Coulomb:\n");
	fprintf(archivo,"-----------------\n\n");
	fprintf(archivo,"La magnitud de las fuerzas eléctricas de atracción y repulsión entre cargas se rige por el principio fundamental de la electrostática, también llamado ley de Coulomb. Esta ley establece que la fuerza de atracción entre dos cargas eléctricas puntuales de distinto o igual signo es directamente proporcional al producto del valor de sus cargas e inversamente proporcional al cuadrado de la distancia que las separa:\n\n");
	
	fclose(archivo);
}
