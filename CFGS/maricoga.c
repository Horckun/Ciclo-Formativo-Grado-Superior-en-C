void maricoga() {
	FILE *archivo;
	archivo = fopen("Magnitudes que rigen el comportamiento de los gases. Ecuación de los gases ideales.doc","w");
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
	
	fprintf(archivo,"Magnitudes que rigen el comportamiento de los gases. Ecuación de los gases ideales:\n");
	fprintf(archivo,"===================================================================================\n\n");
	fprintf(archivo,"La ley de los gases ideales es la ecuación de estado del gas ideal, un gas hipotético formado por partículas puntuales sin atracción ni repulsión entre ellas y cuyos choques son perfectamente elásticos (conservación de momento y energía cinética). La energía cinética es directamente proporcional a la temperatura en un gas ideal. Los gases reales que más se aproximan al comportamiento del gas ideal son los gases monoatómicos en condiciones de baja presión y alta temperatura.\n\n");
	fprintf(archivo,"En 1648, el químico Jan Baptista Van Helmont creó el vocablo gas, a partir del término griego kaos (desorden) para definir las génesis características del anhídrido carbónico. Esta denominación se extendió luego a todos los cuerpos gaseosos y se utiliza para designar uno de los estados de la materia.\n\n");
	fprintf(archivo,"La presión ejercida por una fuerza física es inversamente proporcional al volumen de una masa gaseosa, siempre y cuando su temperatura se mantenga constante, o en términos más sencillos:\n\n");
	fprintf(archivo,"A temperatura constante, el volumen de una masa fija de gas es inversamente proporcional a la presión que este ejerce. Matemáticamente se puede expresar así:\n\n");
	fprintf(archivo," PV = k\n\n");
	fprintf(archivo,"Donde k es constante si la temperatura y la masa del gas permanecen constantes.\n\n");
	fprintf(archivo,"Cuando aumenta la presión, el volumen baja, mientras que si la presión disminuye el volumen aumenta.\n\n");
	fprintf(archivo," - Ecuación de estado:\n");
	fprintf(archivo," ---------------------\n\n");
	fprintf(archivo," El estado de una cantidad de gas se determina por su presión, volumen y temperatura. La forma moderna de la ecuación relaciona estos simplemente en dos formas principales. La temperatura utilizada en la ecuación de estado es una temperatura absoluta: en el sistema SI de unidades, kelvin, en el sistema imperial, grados Rankine.\n\n");
	fprintf(archivo,"  - Forma común:\n\n");
	fprintf(archivo,"   La ecuación que describe normalmente la relación entre la presión, el volumen, la temperatura y la cantidad (en moles) de un gas ideal es:\n\n");
	fprintf(archivo,"    PV = nRT\n\n");
	fprintf(archivo,"   Donde:\n\n");
	fprintf(archivo,"    - P = Presión absoluta.\n");
	fprintf(archivo,"    - V = Volumen.\n");
	fprintf(archivo,"    - n = Moles de gas.\n");
	fprintf(archivo,"    - R =  Constante universal de los gases ideales.\n");
	fprintf(archivo,"    - T =  Temperatura absoluta.\n\n");
	fprintf(archivo,"  - Teoría cinética molecular:\n\n");
	fprintf(archivo,"   Esta teoría fue desarrollada por Ludwig Boltzmann y Maxwell. Nos indica las propiedades de un gas ideal a nivel molecular.\n\n");
	fprintf(archivo,"    - Todo gas ideal está formado por N pequeñas partículas puntuales (átomos o moléculas).\n");
	fprintf(archivo,"    - Las moléculas gaseosas se mueven a altas velocidades, en forma recta y desordenada.\n");
	fprintf(archivo,"    - Un gas ideal ejerce una presión continua sobre las paredes del recipiente que lo contiene, debido a los choques de las partículas con las paredes de este.\n");
	fprintf(archivo,"    - Los choques moleculares son perfectamente elásticos. No hay pérdida de energía cinética.\n");
	fprintf(archivo,"    - No se tienen en cuenta las interacciones de atracción y repulsión molecular.\n");
	fprintf(archivo,"    - La energía cinética media de la traslación de una molécula es directamente proporcional a la temperatura absoluta del gas.\n\n");
	fprintf(archivo,"    En estas circunstancias, la ecuación de los gases se encuentra teóricamente:\n\n");
	fprintf(archivo,"     PV = NkbT\n\n");
	fprintf(archivo,"    donde kb es la constante de Boltzmann, donde N es el número de partículas.\n\n");
	
	fclose(archivo);
}
