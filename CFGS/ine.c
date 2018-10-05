void ine() {
	FILE *archivo;
	archivo = fopen("Interacci�n el�ctrica. Ley de Coulomb. Estudio del campo el�ctrico.doc","w");
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
	
	fprintf(archivo,"Interacci�n el�ctrica. Ley de Coulomb. Estudio del campo el�ctrico:\n");
	fprintf(archivo,"===================================================================\n\n");
	fprintf(archivo,"Una de las interacciones fundamentales descritas por la f�sica es la electricidad. Aunque conocidos desde antiguo, los fen�menos el�ctricos no empezaron a ser explicados de forma sistem�tica hasta las postrimer�as del siglo XVIII, y s�lo a mediados del XIX se descubri� su estrecha relaci�n con otra manifestaci�n com�n de la naturaleza: el magnetismo.\n\n");
	fprintf(archivo,"- La electricidad en la naturaleza:\n");
	fprintf(archivo,"-----------------------------------\n\n");
	fprintf(archivo,"La carga el�ctrica es una de las propiedades b�sicas de la materia. Aunque la comprensi�n extensa de sus manifestaciones se resisti� durante siglos al escrutinio de la ciencia, ya hacia el a�o 600 a. C. los fil�sofos griegos describieron con detalle el experimento por el cual una barra de �mbar frotado atrae peque�os pedacitos de paja u otro material ligero (electrizaci�n por frotamiento).\n\n");
	fprintf(archivo,"Los fen�menos el�ctricos, indivisiblemente unidos a los magn�ticos, est�n presentes en todas partes, ya sea en las tormentas, la radiaci�n solar o el cerebro humano. Modernamente, sus propiedades se aprovechan en m�ltiples campos de actividad, y la electricidad se ha convertido en una forma esencial de consumo y transporte de energ�a.\n\n");
	fprintf(archivo,"Por su naturaleza el�ctrica, los cuerpos f�sicos se clasifican en conductores, que transmiten la electricidad f�cilmente, y aislantes o diel�ctricos, que oponen una resistencia elevada a su paso. Los semiconductores presentan una conductividad intermedia entre estas dos clases.\n\n");
	fprintf(archivo,"- Cargas el�ctricas:\n");
	fprintf(archivo,"--------------------\n\n");
	fprintf(archivo,"La esencia de la electricidad es la carga el�ctrica. Esta cualidad existe en dos clases distintas, que se denominan cargas positivas y negativas. Las cargas el�ctricas de la misma clase o signo se repelen mutuamente y las de signo distinto se atraen.\n\n");
	fprintf(archivo,"En realidad, la carga el�ctrica de un cuerpo u objeto es la suma de las cargas de cada uno de sus constituyentes m�nimos: mol�culas, �tomos y part�culas elementales. Por ello se dice que la carga el�ctrica est� cuantizada. Adem�s, las cargas se pueden mover o intercambiar, pero sin que se produzcan cambios en su cantidad total (ley de conservaci�n de la carga).\n\n");
	fprintf(archivo,"En el estado normal de los cuerpos materiales, las cargas el�ctricas m�nimas est�n compensadas, por lo que dichos cuerpos se comportan el�ctricamente como neutros. Hace falta una acci�n externa para que un objeto material se electrice.\n\n");
	fprintf(archivo,"La electrizaci�n de un cuerpo se consigue extrayendo del mismo las cargas de un signo y dejando en �l las de signo contrario. En tal caso, el cuerpo adquiere una carga el�ctrica neta no nula.\n\n");
	fprintf(archivo,"- Fuerza el�ctrica:\n");
	fprintf(archivo,"-------------------\n\n");
	fprintf(archivo,"Los fen�menos de la electrizaci�n y la conducci�n pueden explicarse como el resultado de la acci�n de fuerzas el�ctricas. Entre dos cargas pr�ximas inicialmente en reposo siempre se establece un tipo de fuerzas, llamadas electrost�ticas, de tal forma que, si las part�culas cargadas son suficientemente peque�as como para que puedan considerarse puntuales, se cumple en las siguientes condiciones:\n\n");
	fprintf(archivo," - La fuerza establecida entre ambas tiene una direcci�n que coincide con una l�nea recta imaginaria que une las dos cargas.\n\n");
	fprintf(archivo," - La fuerza ejercida sobre una carga apunta hacia la otra cuando las dos tienen distinto signo (fuerza atractiva).\n\n");
	fprintf(archivo," - El sentido de la fuerza se dirige hacia el lado opuesto de la carga cuando ambas tienen el mismo signo (fuerza repulsiva).\n\n");
	fprintf(archivo,"- Ley de Coulomb:\n");
	fprintf(archivo,"-----------------\n\n");
	fprintf(archivo,"La magnitud de las fuerzas el�ctricas de atracci�n y repulsi�n entre cargas se rige por el principio fundamental de la electrost�tica, tambi�n llamado ley de Coulomb. Esta ley establece que la fuerza de atracci�n entre dos cargas el�ctricas puntuales de distinto o igual signo es directamente proporcional al producto del valor de sus cargas e inversamente proporcional al cuadrado de la distancia que las separa:\n\n");
	
	fclose(archivo);
}
