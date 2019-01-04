void maricoga() {
	FILE *archivo;
	archivo = fopen("Magnitudes que rigen el comportamiento de los gases. Ecuaci�n de los gases ideales.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Magnitudes que rigen el comportamiento de los gases. Ecuaci%cn de los gases ideales:\n",162);
	p("===================================================================================\n\n");
	p("La ley de los gases ideales es la ecuaci%cn de estado del gas ideal, un gas hipot%ctico formado por part%cculas puntuales sin atracci%cn ni repulsi%cn entre ellas y cuyos choques son perfectamente el%csticos (conservaci%cn de momento y energ%ca cin%ctica). La energ%ca cin%ctica es directamente proporcional a la temperatura en un gas ideal. Los gases reales que m%cs se aproximan al comportamiento del gas ideal son los gases monoat%cmicos en condiciones de baja presi%cn y alta temperatura.\n\n",162,130,161,162,162,160,162,161,130,161,130,160,162,162);
	p("En 1648, el qu%cmico Jan Baptista Van Helmont cre%c el vocablo gas, a partir del t%crmino griego kaos (desorden) para definir las g%cnesis caracter%csticas del anh%cdrido carb%cnico. Esta denominaci%cn se extendi%c luego a todos los cuerpos gaseosos y se utiliza para designar uno de los estados de la materia.\n\n",161,162,130,130,161,161,162,162,162);
	p("La presi%cn ejercida por una fuerza f%csica es inversamente proporcional al volumen de una masa gaseosa, siempre y cuando su temperatura se mantenga constante, o en t%crminos m%cs sencillos:\n\n",162,161,130,160);
	
	system("pause");
	p("\n");
	
	p("A temperatura constante, el volumen de una masa fija de gas es inversamente proporcional a la presi%cn que este ejerce. Matem%cticamente se puede expresar as%c:\n\n",162,160,161);
	p(" PV = k\n\n");
	p("Donde k es constante si la temperatura y la masa del gas permanecen constantes.\n\n");
	p("Cuando aumenta la presi%cn, el volumen baja, mientras que si la presi%cn disminuye el volumen aumenta.\n\n",162,162);
	
	system("pause");
	p("\n");
	
	p(" - Ecuaci%cn de estado:\n",162);
	p(" ---------------------\n\n");
	p(" El estado de una cantidad de gas se determina por su presi%cn, volumen y temperatura. La forma moderna de la ecuaci%cn relaciona estos simplemente en dos formas principales. La temperatura utilizada en la ecuaci%cn de estado es una temperatura absoluta: en el sistema SI de unidades, kelvin, en el sistema imperial, grados Rankine.\n\n",162,162,162);
	
	system("pause");
	p("\n");
	
	p("  - Forma com%cn:\n\n",163);
	p("   La ecuaci%cn que describe normalmente la relaci%cn entre la presi%cn, el volumen, la temperatura y la cantidad (en moles) de un gas ideal es:\n\n",162,162,162);
	p("    PV = nRT\n\n");
	p("   Donde:\n\n");
	p("    - P = Presi%cn absoluta.\n",162);
	p("    - V = Volumen.\n");
	p("    - n = Moles de gas.\n");
	p("    - R =  Constante universal de los gases ideales.\n");
	p("    - T =  Temperatura absoluta.\n\n");
	
	system("pause");
	p("\n");
	
	p("  - Teor%ca cin%ctica molecular:\n\n",161,130);
	p("   Esta teor%ca fue desarrollada por Ludwig Boltzmann y Maxwell. Nos indica las propiedades de un gas ideal a nivel molecular.\n\n",161);
	p("    - Todo gas ideal est%c formado por N peque%cas part%cculas puntuales (%ctomos o mol%cculas).\n",160,164,161,160,130);
	p("    - Las mol%cculas gaseosas se mueven a altas velocidades, en forma recta y desordenada.\n",130);
	p("    - Un gas ideal ejerce una presi%cn continua sobre las paredes del recipiente que lo contiene, debido a los choques de las part%cculas con las paredes de este.\n",162,161);
	p("    - Los choques moleculares son perfectamente el%csticos. No hay p%crdida de energ%ca cin%ctica.\n",160,130,161,130);
	p("    - No se tienen en cuenta las interacciones de atracci%cn y repulsi%cn molecular.\n",162,162);
	p("    - La energ%ca cin%ctica media de la traslaci%cn de una mol%ccula es directamente proporcional a la temperatura absoluta del gas.\n\n",161,162,130);
	p("    En estas circunstancias, la ecuaci%cn de los gases se encuentra te%cricamente:\n\n",162,162);
	p("     PV = NkbT\n\n");
	p("    donde kb es la constante de Boltzmann, donde N es el n%cmero de part%cculas.\n\n",163,161);
	
	fprintf(archivo,"Magnitudes que rigen el comportamiento de los gases. Ecuaci�n de los gases ideales:\n");
	fprintf(archivo,"===================================================================================\n\n");
	fprintf(archivo,"La ley de los gases ideales es la ecuaci�n de estado del gas ideal, un gas hipot�tico formado por part�culas puntuales sin atracci�n ni repulsi�n entre ellas y cuyos choques son perfectamente el�sticos (conservaci�n de momento y energ�a cin�tica). La energ�a cin�tica es directamente proporcional a la temperatura en un gas ideal. Los gases reales que m�s se aproximan al comportamiento del gas ideal son los gases monoat�micos en condiciones de baja presi�n y alta temperatura.\n\n");
	fprintf(archivo,"En 1648, el qu�mico Jan Baptista Van Helmont cre� el vocablo gas, a partir del t�rmino griego kaos (desorden) para definir las g�nesis caracter�sticas del anh�drido carb�nico. Esta denominaci�n se extendi� luego a todos los cuerpos gaseosos y se utiliza para designar uno de los estados de la materia.\n\n");
	fprintf(archivo,"La presi�n ejercida por una fuerza f�sica es inversamente proporcional al volumen de una masa gaseosa, siempre y cuando su temperatura se mantenga constante, o en t�rminos m�s sencillos:\n\n");
	fprintf(archivo,"A temperatura constante, el volumen de una masa fija de gas es inversamente proporcional a la presi�n que este ejerce. Matem�ticamente se puede expresar as�:\n\n");
	fprintf(archivo," PV = k\n\n");
	fprintf(archivo,"Donde k es constante si la temperatura y la masa del gas permanecen constantes.\n\n");
	fprintf(archivo,"Cuando aumenta la presi�n, el volumen baja, mientras que si la presi�n disminuye el volumen aumenta.\n\n");
	fprintf(archivo," - Ecuaci�n de estado:\n");
	fprintf(archivo," ---------------------\n\n");
	fprintf(archivo," El estado de una cantidad de gas se determina por su presi�n, volumen y temperatura. La forma moderna de la ecuaci�n relaciona estos simplemente en dos formas principales. La temperatura utilizada en la ecuaci�n de estado es una temperatura absoluta: en el sistema SI de unidades, kelvin, en el sistema imperial, grados Rankine.\n\n");
	fprintf(archivo,"  - Forma com�n:\n\n");
	fprintf(archivo,"   La ecuaci�n que describe normalmente la relaci�n entre la presi�n, el volumen, la temperatura y la cantidad (en moles) de un gas ideal es:\n\n");
	fprintf(archivo,"    PV = nRT\n\n");
	fprintf(archivo,"   Donde:\n\n");
	fprintf(archivo,"    - P = Presi�n absoluta.\n");
	fprintf(archivo,"    - V = Volumen.\n");
	fprintf(archivo,"    - n = Moles de gas.\n");
	fprintf(archivo,"    - R =  Constante universal de los gases ideales.\n");
	fprintf(archivo,"    - T =  Temperatura absoluta.\n\n");
	fprintf(archivo,"  - Teor�a cin�tica molecular:\n\n");
	fprintf(archivo,"   Esta teor�a fue desarrollada por Ludwig Boltzmann y Maxwell. Nos indica las propiedades de un gas ideal a nivel molecular.\n\n");
	fprintf(archivo,"    - Todo gas ideal est� formado por N peque�as part�culas puntuales (�tomos o mol�culas).\n");
	fprintf(archivo,"    - Las mol�culas gaseosas se mueven a altas velocidades, en forma recta y desordenada.\n");
	fprintf(archivo,"    - Un gas ideal ejerce una presi�n continua sobre las paredes del recipiente que lo contiene, debido a los choques de las part�culas con las paredes de este.\n");
	fprintf(archivo,"    - Los choques moleculares son perfectamente el�sticos. No hay p�rdida de energ�a cin�tica.\n");
	fprintf(archivo,"    - No se tienen en cuenta las interacciones de atracci�n y repulsi�n molecular.\n");
	fprintf(archivo,"    - La energ�a cin�tica media de la traslaci�n de una mol�cula es directamente proporcional a la temperatura absoluta del gas.\n\n");
	fprintf(archivo,"    En estas circunstancias, la ecuaci�n de los gases se encuentra te�ricamente:\n\n");
	fprintf(archivo,"     PV = NkbT\n\n");
	fprintf(archivo,"    donde kb es la constante de Boltzmann, donde N es el n�mero de part�culas.\n\n");
	
	fclose(archivo);
}
