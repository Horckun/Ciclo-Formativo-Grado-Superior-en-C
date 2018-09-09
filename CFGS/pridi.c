void pridi() {
	FILE *archivo;
	archivo = fopen("Principios de la din�mica.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Principios de la din%cmica. Introducci%cn de la fuerza de rozamiento por deslizamiento:\n",160,162);
	p("=====================================================================================\n\n");
	
	p("Los principios de la din%cmica o Leyes de Newton son los axiomas por los que se rigen las part%cculas y sistemas en la din%cmica cl%csica. Fueron enunciados por Newton, bas%cndose en los trabajos de Galileo.\n\n",160,161,160,160,160);
	
	fprintf(archivo,"Principios de la din�mica. Introducci�n de la fuerza de rozamiento por deslizamiento:\n");
	fprintf(archivo,"=====================================================================================\n\n");	
	fprintf(archivo,"Los principios de la din�mica o Leyes de Newton son los axiomas por los que se rigen las part�culas y sistemas en la din�mica cl�sica. Fueron enunciados por Newton, bas�ndose en los trabajos de Galileo.\n\n");
	
	p("Existen tres principios, y son los siguientes:\n\n");
	
	p("- Primer principio: Principio de inercia.\n\n");
	
	p("<< Toda part%ccula libre de interacciones permanece en reposo o en estado de movimiento rectil�neo y uniforme. >>\n\n",161);
	
	p("Este principio fue enunciado inicialmente por Galileo. Lo que nos dice esta ley es que el espacio es eucl%cdeo ya que las trayectorias de las part%cculas libres son rectas y no circunferencias. El primer principio permite definir sistemas de referencia ortogonales que se extienden indefinidamente en el espacio y en el tiempo.\n\n",161,161);
	
	p("El primer principio de la din%cmica nos permite definir los sistemas de referencia inerciales como aquellos en que una part%ccula libre sigue un movimiento rectil%cneo y uniforme.\n\n",160,161,161);
	
	p("El principio de inercia se ve modificado en la teor%ca general de la relatividad, que corrige y generaliza las leyes de Newton. En su versi%cn m%cs general, una part%ccula libre no sigue necesariamente un movimiento rectil%cneo y uniforme, sino que se desplza siguiendo una geod%csica.\n\n",161,162,160,161,161,130);
	
	fprintf(archivo,"Existen tres principios, y son los siguientes:\n\n");	
	fprintf(archivo,"- Primer principio: Principio de inercia.\n\n");	
	fprintf(archivo,"<< Toda part�cula libre de interacciones permanece en reposo o en estado de movimiento rectil�neo y uniforme. >>\n\n");	
	fprintf(archivo,"Este principio fue enunciado inicialmente por Galileo. Lo que nos dice esta ley es que el espacio es eucl�deo ya que las trayectorias de las part�culas libres son rectas y no circunferencias. El primer principio permite definir sistemas de referencia ortogonales que se extienden indefinidamente en el espacio y en el tiempo.\n\n");	
	fprintf(archivo,"El primer principio de la din�mica nos permite definir los sistemas de referencia inerciales como aquellos en que una part�cula libre sigue un movimiento rectil�neo y uniforme.\n\n");
	fprintf(archivo,"El principio de inercia se ve modificado en la teor�a general de la relatividad, que corrige y generaliza las leyes de Newton. En su versi�n m�s general, una part�cula libre no sigue necesariamente un movimiento rectil�neo y uniforme, sino que se desplza siguiendo una geod�sica.\n\n");
	
	system("pause");
	p("\n");
	
	p("- Segundo principio: Segunda ley de Newton.\n\n");
	
	p("El segundo principio de la din%cmica requiere previamente la definici%cn de la cantidad de movimiento 'p' de una part%ccula.\n\n",160,162,161);
	
	p("<< La derivada de la cantidad de movimiento de una part%ccula es igual a la resultante de las fuerzas aplicadas sobre ella. >>\n\n",161);
	
	p("En la mayor%ca de las ocasiones, la masa de una part%ccula es una constante.\n\n",161,161);
	
	system("pause");
	p("\n");
	
	p("Esta ley requiere el conocimiento de las fuerzas aplicadas, como un dato del problema. Estas fuerzas deben ser obtenidas independientemente para que la ley tenga verdadero significado. Por ello, precisamos de alg%cn modelo f%csico que nos proporcione la expresi%cn de la fuerza. Entre estos modelos se encuentran:\n\n",163,161,162);
	
	p("- La ley de Hooke, para el oscilador arm%cnico.\n\n",162);
	
	p("- La ley de la gravitaci%cn universal, para el movimiento de una masa en el campo gravitatorio de otra. Esta ley contiene al caso particular e importante del movimiento de una masa peque%ca en las proximidades de la superficie terrestre.\n\n",162,164);
	
	p("- La ley de Lorentz, para el movimiento de una part%ccula en un campo electromagn%ctico. Un caso particular de esta ley es la ley de Coulomb, para la fuerza producida por una carga en reposo.\n\n",161,130);
	
	p("Una caracter%cstica com%cn a todas estas leyes de fuerza es que proporcionan una fuerza dependiente de la posici%cn y de la velocidad instant%cneas de la part%ccula. Por ello, matem%cticamente, la segunda ley de Newton proporciona la ecuaci%cn de movimiento como una ecuaci%cn diferencial.\n\n",161,163,162,160,161,160,162,162);
	
	p("La soluci%cn de esta ecuaci%cn diferencial, por m%ctodos anal%cticos y num%cricos, nos permite determinar la posici%cn ulterior de una part%ccula, conocidas su posici%cn y velocidades iniciales.\n\n",162,162,130,161,130,162,161,162);
	
	fprintf(archivo,"- Segundo principio: Segunda ley de Newton.\n\n");	
	fprintf(archivo,"El segundo principio de la din�mica requiere previamente la definici�n de la cantidad de movimiento 'p' de una part�cula.\n\n");	
	fprintf(archivo,"<< La derivada de la cantidad de movimiento de una part�cula es igual a la resultante de las fuerzas aplicadas sobre ella. >>\n\n");	
	fprintf(archivo,"En la mayor�a de las ocasiones, la masa de una part�cula es una constante.\n\n");	
	fprintf(archivo,"Esta ley requiere el conocimiento de las fuerzas aplicadas, como un dato del problema. Estas fuerzas deben ser obtenidas independientemente para que la ley tenga verdadero significado. Por ello, precisamos de alg�n modelo f�sico que nos proporcione la expresi�n de la fuerza. Entre estos modelos se encuentran:\n\n");	
	fprintf(archivo,"- La ley de Hooke, para el oscilador arm�nico.\n\n");	
	fprintf(archivo,"- La ley de la gravitaci�n universal, para el movimiento de una masa en el campo gravitatorio de otra. Esta ley contiene al caso particular e importante del movimiento de una masa peque�a en las proximidades de la superficie terrestre.\n\n");	
	fprintf(archivo,"- La ley de Lorentz, para el movimiento de una part�cula en un campo electromagn�tico. Un caso particular de esta ley es la ley de Coulomb, para la fuerza producida por una carga en reposo.\n\n");	
	fprintf(archivo,"Una caracter�stica com�n a todas estas leyes de fuerza es que proporcionan una fuerza dependiente de la posici�n y de la velocidad instant�neas de la part�cula. Por ello, matem�ticamente, la segunda ley de Newton proporciona la ecuaci�n de movimiento como una ecuaci�n diferencial.\n\n");	
	fprintf(archivo,"La soluci�n de esta ecuaci�n diferencial, por m�todos anal�ticos y num�ricos, nos permite determinar la posici�n ulterior de una part�cula, conocidas su posici�n y velocidades iniciales.\n\n");
	
	system("pause");
	p("\n");
	
	p("- Tercer principio: ley de acci%cn y reacci%cn.\n\n",162,162);
	
	p("Los dos primeros principios de la din%cmica nos dicen c%cmo se comportan las part%cculas en ausencia de fuerzas o sometidas a una fuerza conocida. El tercer principio de la din%cmica establece una propiedad b%csica de esas fuerzas de interacci%cn entre part%cculas:\n\n",160,162,161,160,160,162,161);
	
	p("'Si una part%ccula A ejerce en un instante dado una fuerza sobre una part%ccula B, la part%ccula B ejerce sobre A una fuerza igual y de sentido contrario.'\n\n",161,161,161);
	
	system("pause");
	p("\n");
	
	p("Hay que destacar que estas dos fuerzas no se anulan mutuamente, ya que se ejercen sobre part%cculas distintas. S%clo en el caso de que se encuentren r%cgidamente unidas se cancelar%cn sus efectos.\n\n",161,162,161,160);
	
	p("La tercera ley de Newton puede formularse en dos versiones. La versi%cn d%cbil es la enunciada m%cs arriba, donde solo indica que las fuerzas son iguales y opuestas. La versi%cn fuerte es m%cs restrictiva e informativa:\n\n",162,130,160,162,160);
	
	p("'Si una part%ccula A ejerce en un instante dado una fuerza sobre una part%ccula B, la part%ccula B ejerce sobre A una fuerza igual y de sentido contrario y ambas fuerzas act%can sobre la recta que pasa por las dos part%cculas.'\n\n",161,161,161,163,161);
	
	p("Este requisito adicional establece que las fuerzas de interacci%cn son centrales, lo que tiene importantes consecuencias en la ley de conservaci%cn del momento cin%ctico de un sistema de part%cculas.\n\n",162,162,130,161);
	
	p("No todas las fuerzas de la naturaleza cumplen la tercera ley de Newton. Las que s%c lo hacen se denominan fuerzas newtonianas. Entre las fuerzas newtonianas se encuentran los ejemplos importantes de la ley de la gravitaci%cn universal, la ley de Hooke y la ley de Coulomb, por lo que las consecuencias del principio de acci%cn y reacci%cn se aplican a la mayor%ca de los casos pr%ccticos.\n\n",161,162,162,162,161,160);
	
	fprintf(archivo,"- Tercer principio: ley de acci�n y reacci�n.\n\n");	
	fprintf(archivo,"Los dos primeros principios de la din�mica nos dicen c�mo se comportan las part�culas en ausencia de fuerzas o sometidas a una fuerza conocida. El tercer principio de la din�mica establece una propiedad b�sica de esas fuerzas de interacci�n entre part�culas:\n\n");	
	fprintf(archivo,"'Si una part�cula A ejerce en un instante dado una fuerza sobre una part�cula B, la part�cula B ejerce sobre A una fuerza igual y de sentido contrario.'\n\n");	
	fprintf(archivo,"Hay que destacar que estas dos fuerzas no se anulan mutuamente, ya que se ejercen sobre part�culas distintas. S�lo en el caso de que se encuentren r�gidamente unidas se cancelar�n sus efectos.\n\n");	
	fprintf(archivo,"La tercera ley de Newton puede formularse en dos versiones. La versi�n d�bil es la enunciada m�s arriba, donde solo indica que las fuerzas son iguales y opuestas. La versi�n fuerte es m�s restrictiva e informativa:\n\n");	
	fprintf(archivo,"'Si una part�cula A ejerce en un instante dado una fuerza sobre una part�cula B, la part�cula B ejerce sobre A una fuerza igual y de sentido contrario y ambas fuerzas act�an sobre la recta que pasa por las dos part�culas.'\n\n");	
	fprintf(archivo,"Este requisito adicional establece que las fuerzas de interacci�n son centrales, lo que tiene importantes consecuencias en la ley de conservaci�n del momento cin�tico de un sistema de part�culas.\n\n");	
	fprintf(archivo,"No todas las fuerzas de la naturaleza cumplen la tercera ley de Newton. Las que s� lo hacen se denominan fuerzas newtonianas. Entre las fuerzas newtonianas se encuentran los ejemplos importantes de la ley de la gravitaci�n universal, la ley de Hooke y la ley de Coulomb, por lo que las consecuencias del principio de acci�n y reacci�n se aplican a la mayor�a de los casos pr�cticos.\n\n");
	
	fclose(archivo);
}
