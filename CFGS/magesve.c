void magesve() {
	FILE *archivo;
	archivo = fopen("Magnitudes escalares y vectoriales.doc","w");
	if(archivo == NULL) {
		p("No se ha podido abrir el archivo.\n\n");
	}
	
	p("Magnitudes escalares y vectoriales.\n");
	p("===================================\n\n");
	
	p("Existen dos tipos de magnitudes: escalares y vectoriales.\n\n");
	
	p("- Magnitudes escalares: magnitud f%csica que queda descrita completamente mediante un valor num%crico.\n\n",161,130);
	p("Ejemplos de magnitudes escalares:\n");
	p("    - Masa.\n");
	p("    - Volumen.\n");
	p("    - Temperatura.\n");
	p("    - Densidad.\n");
	p("    - Presi%cn.\n",162);
	p("    - Energ%ca.\n",161);
	p("    - Carga el%cctrica.\n\n",130);
	
	p("- Magnitudes vectoriales: magnitud f%csica que queda descrita mediante un valor num%crico o magnitud, llamada m%cdulo, y una orientaci%cn en el espacio. La orientaci%cn se describe mediante un sistema de coordenadas cartesianas (x, y, z).\n\n",161,130,162,162,162);
	p("Ejemplos de magnitudes vectoriales:\n");
	p("    - Aceleraci%cn.\n",162);
	p("    - Velocidad de desplazamiento.\n");
	p("    - Campo el%cctrico.\n",130);
	p("    - Fuerza de la gravedad.\n\n");
	
	fprintf(archivo,"Magnitudes escalares y vectoriales.\n");
	fprintf(archivo,"===================================\n\n");	
	fprintf(archivo,"Existen dos tipos de magnitudes: escalares y vectoriales.\n\n");	
	fprintf(archivo,"- Magnitudes escalares: magnitud física que queda descrita completamente mediante un valor numérico.\n\n");
	fprintf(archivo,"Ejemplos de magnitudes escalares:\n");
	fprintf(archivo,"    - Masa.\n");
	fprintf(archivo,"    - Volumen.\n");
	fprintf(archivo,"    - Temperatura.\n");
	fprintf(archivo,"    - Densidad.\n");
	fprintf(archivo,"    - Presión.\n");
	fprintf(archivo,"    - Energía.\n");
	fprintf(archivo,"    - Carga eléctrica.\n\n");	
	fprintf(archivo,"- Magnitudes vectoriales: magnitud física que queda descrita mediante un valor numérico o magnitud, llamada módulo, y una orientación en el espacio. La orientación se describe mediante un sistema de coordenadas cartesianas (x, y, z).\n\n");
	fprintf(archivo,"Ejemplos de magnitudes vectoriales:\n");
	fprintf(archivo,"    - Aceleración.\n");
	fprintf(archivo,"    - Velocidad de desplazamiento.\n");
	fprintf(archivo,"    - Campo eléctrico.\n");
	fprintf(archivo,"    - Fuerza de la gravedad.\n\n");
	
	system("pause");
	p("\n");
	
	p("Vamos a suponer que caminamos 4 metros al este, 2 metros al sur, 4 metros al oeste y 2 metros al norte:\n\n");
	
	p("      4 m.       \n");
	p("      ---->      \n");
	p("     ^     |     \n");
	p("2 m. |     | 2 m.\n");
	p("     |     v     \n");
	p("      <----      \n");
	p("      4 m.       \n\n");
	
	p("La distancia recorrida habr%c sido de 12 metros, pero el desplazamiento habr%c sido 0 metros, pues la localizaci%cn final e inicial es la misma. Esto se debe a que la suma de dos vectores de igual magnitud pero sentido opuesto es igual a cero, los dos vectores se anulan.\n",160,160,162);
	p("As%c pues, la suma de los cuatro vectores que describen el movimiento realizado en el ejemplo anterior ser%ca 0.\n\n",161,161);
	
	p("Es f%ccil de entender si imaginamos dos fuerzas opuestas de igual intensidad. Las dos fuerzas son positivas pero se anulan mutuamente. Por ejemplo, si una persona empuja un objeto dese atr%cs y otra persona lo empuja desde delante con la misma fuerza, las dos fuerzas se anular%can y el objeto no se mover%ca.\n\n",160,160,161,161);
	
	system("pause");
	p("\n");
	
	p("Si nos movi%csemos 4 m al este, 2 al sur y 4 al oeste, la distancia recorrida habr%ca sido de 10 m y el desplazamiento de 2 m al sur, pues los 4 m al este y lo 4 al oeste se anular%can:\n\n",130,161,161);
	
	p(" 4 m.      \n");
	p(" ---->     \n");
	p("     |     \n");
	p("     | 2 m.\n");
	p("     v     \n");
	p(" <----     \n");
	p(" 4 m.      \n\n");
	
	p("La comparaci%cn de magnitudes se puede complicar a%cn m%cs. Por ejemplo, el desplazamiento no puede ser solo hacia el norte, al sur o al oeste, tambi%cn puede ser hacia arriba o hacia abajo. Es decir, los vectores pueden tener una direcci%cn y un sentido tridimensional.\n\n",162,163,160,130,162);
	
	fprintf(archivo,"Vamos a suponer que caminamos 4 metros al este, 2 metros al sur, 4 metros al oeste y 2 metros al norte:\n\n");	
	fprintf(archivo,"      4 m.       \n");
	fprintf(archivo,"      ---->      \n");
	fprintf(archivo,"     ^     |     \n");
	fprintf(archivo,"2 m. |     | 2 m.\n");
	fprintf(archivo,"     |     v     \n");
	fprintf(archivo,"      <----      \n");
	fprintf(archivo,"      4 m.       \n\n");	
	fprintf(archivo,"La distancia recorrida habrá sido de 12 metros, pero el desplazamiento habrá sido 0 metros, pues la localización final e inicial es la misma. Esto se debe a que la suma de dos vectores de igual magnitud pero sentido opuesto es igual a cero, los dos vectores se anulan.\n");
	fprintf(archivo,"Así pues, la suma de los cuatro vectores que describen el movimiento realizado en el ejemplo anterior sería 0.\n\n");	
	fprintf(archivo,"Es fácil de entender si imaginamos dos fuerzas opuestas de igual intensidad. Las dos fuerzas son positivas pero se anulan mutuamente. Por ejemplo, si una persona empuja un objeto dese atrás y otra persona lo empuja desde delante con la misma fuerza, las dos fuerzas se anularían y el objeto no se movería.\n\n");	
	fprintf(archivo,"Si nos moviésemos 4 m al este, 2 al sur y 4 al oeste, la distancia recorrida habría sido de 10 m y el desplazamiento de 2 m al sur, pues los 4 m al este y lo 4 al oeste se anularían:\n\n");	
	fprintf(archivo," 4 m.      \n");
	fprintf(archivo," ---->     \n");
	fprintf(archivo,"     |     \n");
	fprintf(archivo,"     | 2 m.\n");
	fprintf(archivo,"     v     \n");
	fprintf(archivo," <----     \n");
	fprintf(archivo," 4 m.      \n\n");	
	fprintf(archivo,"La comparación de magnitudes se puede complicar aún más. Por ejemplo, el desplazamiento no puede ser solo hacia el norte, al sur o al oeste, también puede ser hacia arriba o hacia abajo. Es decir, los vectores pueden tener una dirección y un sentido tridimensional.\n\n");
	
	system("pause");
	p("\n");
	
	p("Una magnitud vectorial es aquella que queda definida mediante los atributos:\n");
	p("----------------------------------------------------------------------------\n\n");
	
	p("- Su valor num%crico absoluto, que denominamos m%cdulo.\n",130,162);
	p("- Su direcci%cn o recta sobre la que act%ca.\n",162,163);
	p("- Su sentido de actuaci%cn.\n",162);
	p("- Su punto de aplicaci%cn.\n",162);
	p("- Se representa con una flecha encima.\n\n");
	
	p("Las magnitudes vectoriales se representan mediante vectores.\n\n");
	p("Un vector es un segmento orientado en el espacio cuya longitud, medida con una unidad previamente elegida, es su valor num%crico o m%cdulo; su direcci%cn es la recta a la que pertenece el segmento y su sentido, el indicado por una punta de flecha dibujada en uno de sus extremos. El otro extremo del segmento se llama origen o punto de aplicaci%cn del vector.\n\n",130,162,162,162);
	
	p("=================================\n");
	p("=            M%cdulo             =\n",162);
	p("= <---------------------------> =\n");
	p("=                               =\n");
	p("= ------===============>>------ =\n");
	p("=       ^    vector     ^     ^ =\n");
	p("=       |               |     | =\n");
	p("=       |               |     | =\n");
	p("=       |            sentido  | =\n");
	p("=       punto de              | =\n");
	p("=    aplicaci%cn       direcci%cn =\n",162,162);
	p("=================================\n\n");
	
	fprintf(archivo,"Una magnitud vectorial es aquella que queda definida mediante los atributos:\n");
	fprintf(archivo,"----------------------------------------------------------------------------\n\n");
	
	fprintf(archivo,"- Su valor numérico absoluto, que denominamos módulo.\n");
	fprintf(archivo,"- Su dirección o recta sobre la que actúa.\n");
	fprintf(archivo,"- Su sentido de actuación.\n");
	fprintf(archivo,"- Su punto de aplicación.\n");
	fprintf(archivo,"- Se representa con una flecha encima.\n\n");
	
	fprintf(archivo,"Las magnitudes vectoriales se representan mediante vectores.\n\n");
	fprintf(archivo,"Un vector es un segmento orientado en el espacio cuya longitud, medida con una unidad previamente elegida, es su valor numérico o módulo; su dirección es la recta a la que pertenece el segmento y su sentido, el indicado por una punta de flecha dibujada en uno de sus extremos. El otro extremo del segmento se llama origen o punto de aplicación del vector.\n\n");
	
	fprintf(archivo,"=================================\n");
	fprintf(archivo,"=            Módulo             =\n");
	fprintf(archivo,"= <---------------------------> =\n");
	fprintf(archivo,"=                               =\n");
	fprintf(archivo,"= ------===============>>------ =\n");
	fprintf(archivo,"=       ^    vector     ^     ^ =\n");
	fprintf(archivo,"=       |               |     | =\n");
	fprintf(archivo,"=       |               |     | =\n");
	fprintf(archivo,"=       |            sentido  | =\n");
	fprintf(archivo,"=       punto de              | =\n");
	fprintf(archivo,"=    aplicación       dirección =\n");
	fprintf(archivo,"=================================\n\n");
	
	system("pause");
	p("\n");
	
	p("Suma de magnitudes vectoriales:\n");
	p("-------------------------------\n\n");
	
	p("Sumar dos vectores (a y b) es hallar otro vector (z), cuyo efecto es id%cntico al de los dos vectores iniciales actuando simult%cneamente.\n\n",130,160);
	
	p("Para sumar dos vectores, trasladamos el segundo vector en paralelo con el primero. El vector suma el origen del primer vector y el extremo del segundo.\n\n");
	
	p("-------------\n");
	p("- z = a + b -\n");
	p("-------------\n\n");
	
	p("Para calcular el m%cdulo de la resultante (z) de los dos vectores, recurrimos al Teorema de Pit%cgoras.\n\n",162,160);
	
	p("-----------------------------\n");
	p("-      ____________________ -\n");
	p("- z = Va%c + b%c + 2abcos%c -\n",253,253,155);
	p("-                           -\n");
	p("-----------------------------\n\n");
	
	fprintf(archivo,"Suma de magnitudes vectoriales:\n");
	fprintf(archivo,"-------------------------------\n\n");	
	fprintf(archivo,"Sumar dos vectores (a y b) es hallar otro vector (z), cuyo efecto es idéntico al de los dos vectores iniciales actuando simultáneamente.\n\n");
	fprintf(archivo,"Para sumar dos vectores, trasladamos el segundo vector en paralelo con el primero. El vector suma el origen del primer vector y el extremo del segundo.\n\n");
	fprintf(archivo,"-------------\n");
	fprintf(archivo,"- z = a + b -\n");
	fprintf(archivo,"-------------\n\n");	
	fprintf(archivo,"Para calcular el módulo de la resultante (z) de los dos vectores, recurrimos al Teorema de Pitágoras.\n\n");	
	fprintf(archivo,"--------------------------\n");
	fprintf(archivo,"-      _________________ -\n");
	fprintf(archivo,"- z = Va² + b² + 2abcosø -\n");
	fprintf(archivo,"-                        -\n");
	fprintf(archivo,"--------------------------\n\n");
	
	system("pause");
	p("\n");
	
	p("Ejemplos:\n");
	p("---------\n\n");
	
	p("Cuando a y b tienen el mismo sentido y direcci%cn, su %cngulo es de 0 grados, con lo cual es simplemente una l%cnea recta.\n\n",162,160,161);
	
	p("a: --->\n");
	p("b: ----->\n\n");
	
	p("z: -------->\n\n");
	
	p("     _____________\n");
	p("z = Va%c + b%c + 2ab\n\n",253,253);
	
	p("     ________\n");
	p("z = V(a + b)%c\n\n",253);
	
	p("z = a + b \n\n");
	
	system("pause");
	p("\n");
	
	p("Cuando a y b tienen la misma direcci%cn pero diferente sentido, tienen un %cngulo de 180 grados, por lo tanto, tambi%cn es una l%cnea recta.\n\n",162,160,130,161);
	
	p("a: --->\n");
	p("b: <-----\n\n");
	
	p("z: <--\n\n");
	
	p("     _____________\n");
	p("z = Va%c + b%c - 2ab\n\n",253,253);
	
	p("     ________\n");
	p("z = V(a - b)%c\n\n",253);
	
	p("z = a - b \n\n");
	
	p("Cuando a y b son perpendiculares, tienen un %cngulo de 90 grados.\n\n",160);
	
	p("     _____\n");
	p("z = Va%c+b%c\n\n",253,253);
	
	fprintf(archivo,"Ejemplos:\n");
	fprintf(archivo,"---------\n\n");	
	fprintf(archivo,"Cuando a y b tienen el mismo sentido y dirección, su ángulo es de 0 grados, con lo cual es simplemente una línea recta.\n\n");	
	fprintf(archivo,"a: --->\n");
	fprintf(archivo,"b: ----->\n\n");	
	fprintf(archivo,"z: -------->\n\n");	
	fprintf(archivo,"     _____________\n");
	fprintf(archivo,"z = Va² + b² + 2ab\n\n");	
	fprintf(archivo,"     ________\n");
	fprintf(archivo,"z = V(a + b)²\n\n");	
	fprintf(archivo,"z = a + b \n\n");	
	fprintf(archivo,"Cuando a y b tienen la misma dirección pero diferente sentido, tienen un ángulo de 180 grados, por lo tanto, también es una línea recta.\n\n");	
	fprintf(archivo,"a: --->\n");
	fprintf(archivo,"b: <-----\n\n");	
	fprintf(archivo,"z: <--\n\n");	
	fprintf(archivo,"     _____________\n");
	fprintf(archivo,"z = Va² + b² - 2ab\n\n");	
	fprintf(archivo,"     ________\n");
	fprintf(archivo,"z = V(a - b)²\n\n");	
	fprintf(archivo,"z = a - b \n\n");	
	fprintf(archivo,"Cuando a y b son perpendiculares, tienen un ángulo de 90 grados.\n\n");	
	fprintf(archivo,"     _____\n");
	fprintf(archivo,"z = Va²+b²\n\n");
	
	system("pause");
	p("\n");
	
	p("Producto de un n%cmero real por un vector:\n",163);
	p("-----------------------------------------\n\n");
	
	p("El producto de un n%cmero real (n), por un vector (v), es otro vector que tiene la misma direcci%cn que 'a', el mismo sentido que 'a' o el contrario, seg%cn que 'n' sea positivo o negativo, y un m%cdulo que resulta de multiplicar 'n' veces el m%cdulo de 'a'.\n\n",163,162,163,162,162);
	
	p("Ejemplo:\n");
	p("--------\n\n");
	
	p("(a) --> * 4  = 4a -------->\n");
	p("(a) --> * -4 = 4a <--------\n\n");
	
	fprintf(archivo,"Producto de un número real por un vector:\n");
	fprintf(archivo,"-----------------------------------------\n\n");	
	fprintf(archivo,"El producto de un número real (n), por un vector (v), es otro vector que tiene la misma dirección que 'a', el mismo sentido que 'a' o el contrario, según que 'n' sea positivo o negativo, y un módulo que resulta de multiplicar 'n' veces el módulo de 'a'.\n\n");	
	fprintf(archivo,"Ejemplo:\n");
	fprintf(archivo,"--------\n\n");	
	fprintf(archivo,"(a) --> * 4  = 4a -------->\n");
	fprintf(archivo,"(a) --> * -4 = 4a <--------\n\n");
	
	system("pause");
	p("\n");
	
	p("Componentes de un vector:\n");
	p("-------------------------\n\n");
	
	p("Si la suma de dos vectores da un vector, podemos expresar cualquier vector como la composici%cn de otros dos. Estos vectores se denominan 'Componentes rectangulares'.\n\n",162);
	
	p("-------------\n");
	p("- a = b + c -\n");
	p("-------------\n\n");
	
	p("    /|\n");
	p("   / |\n");
	p("a /  |\n");
	p(" /   |c\n");
	p("/_ _ |\n");
	p("  b  \n\n");
	
	system("pause");
	p("\n");
	
	p("Donde b y c son los componentes rectangulares de a.\n\n");
	
	p("Vemos que b = a cos y c = a sen.\n\n");
	
	p(" |       /\n");
	p("c|   a/   \n");
	p(" |/_ _ _ _\n");
	p("     b    \n\n");
	
	p("b = 4\n");
	p("c = 3\n");
	p("a = 5\n\n");
	
	p("El vector a de m%cdulo 5 se descompone en sus componentes rectangulares b = 4 y c = 3. Como tangente tg = 3/4, el %cngulo vale 37%c.\n\n",162,160,248);
	
	fprintf(archivo,"Componentes de un vector:\n");
	fprintf(archivo,"-------------------------\n\n");	
	fprintf(archivo,"Si la suma de dos vectores da un vector, podemos expresar cualquier vector como la composición de otros dos. Estos vectores se denominan 'Componentes rectangulares'.\n\n");	
	fprintf(archivo,"-------------\n");
	fprintf(archivo,"- a = b + c -\n");
	fprintf(archivo,"-------------\n\n");	
	fprintf(archivo,"    /|\n");
	fprintf(archivo,"   / |\n");
	fprintf(archivo,"a /  |\n");
	fprintf(archivo," /   |c\n");
	fprintf(archivo,"/_ _ |\n");
	fprintf(archivo,"  b  \n\n");	
	fprintf(archivo,"Donde b y c son los componentes rectangulares de a.\n\n");	
	fprintf(archivo,"Vemos que b = a cos y c = a sen.\n\n");	
	fprintf(archivo," |       /\n");
	fprintf(archivo,"c|   a/   \n");
	fprintf(archivo," |/_ _ _ _\n");
	fprintf(archivo,"     b    \n\n");	
	fprintf(archivo,"b = 4\n");
	fprintf(archivo,"c = 3\n");
	fprintf(archivo,"a = 5\n\n");	
	fprintf(archivo,"El vector a de módulo 5 se descompone en sus componentes rectangulares b = 4 y c = 3. Como tangente tg = 3/4, el ángulo vale 37°.\n\n");
	
	system("pause");
	p("\n");
	
	p("Ejercicios:\n");
	p("-----------\n\n");
	
	p("Di si las siguientes magnitudes son escalares o vectoriales:\n\n");
	
	fprintf(archivo,"Ejercicios:\n");
	fprintf(archivo,"-----------\n\n");	
	fprintf(archivo,"Di si las siguientes magnitudes son escalares o vectoriales:\n\n");
	
	int opcion;
	
	p("Masa.\n\n");
	
	p("Opciones:\n");
	p("[1] - Escalar.\n");
	p("[2] - Vectorial.\n\n");
	
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Masa.\n\n");
	fprintf(archivo,"Opciones:\n");
	fprintf(archivo,"[1] - Escalar.\n");
	fprintf(archivo,"[2] - Vectorial.\n\n");	
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 1) {
		p("Correcto.\n\n");
		p("---------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
		fprintf(archivo,"---------\n\n");
	} else {
		p("Incorrecto.\n");
		p("Una magnitud escalar es aquella que queda especificada completamente con un n%cmero seguido de la unidad.\n\n",163);
		p("---------------------------------------------------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Una magnitud escalar es aquella que queda especificada completamente con un número seguido de la unidad.\n\n");
		fprintf(archivo,"---------------------------------------------------------------------------------------------------------\n\n");
	}
	
	p("Temperatura.\n\n");
	
	p("Opciones:\n");
	p("[1] - Escalar.\n");
	p("[2] - Vectorial.\n\n");
	
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Temperatura.\n\n");	
	fprintf(archivo,"Opciones:\n");
	fprintf(archivo,"[1] - Escalar.\n");
	fprintf(archivo,"[2] - Vectorial.\n\n");	
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 1) {
		p("Correcto.\n\n");
		p("---------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
		fprintf(archivo,"---------\n\n");
	} else {
		p("Incorrecto.\n");
		p("Una magnitud escalar es aquella que queda especificada completamente con un n%cmero seguido de la unidad.\n\n",163);
		p("---------------------------------------------------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Una magnitud escalar es aquella que queda especificada completamente con un número seguido de la unidad.\n\n");
		fprintf(archivo,"---------------------------------------------------------------------------------------------------------\n\n");
	}
	
	p("Velocidad.\n\n");
	
	p("Opciones:\n");
	p("[1] - Escalar.\n");
	p("[2] - Vectorial.\n\n");
	
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Velocidad.\n\n");	
	fprintf(archivo,"Opciones:\n");
	fprintf(archivo,"[1] - Escalar.\n");
	fprintf(archivo,"[2] - Vectorial.\n\n");	
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 2) {
		p("Correcto.\n\n");
		p("---------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
		fprintf(archivo,"---------\n\n");
	} else {
		p("Incorrecto.\n");	
		p("Una magnitud vectorial es aquella que queda definida mediante los atributos:\n");
		p("----------------------------------------------------------------------------\n\n");
		p("- Su valor num%crico absoluto, que denominamos m%cdulo.\n",130,162);
		p("- Su direcci%cn o recta sobre la que act%ca.\n",162,163);
		p("- Su sentido de actuaci%cn.\n",162);
		p("- Su punto de aplicaci%cn.\n",162);
		p("- Se representa con una flecha encima.\n\n");
		p("--------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");	
		fprintf(archivo,"Una magnitud vectorial es aquella que queda definida mediante los atributos:\n");
		fprintf(archivo,"----------------------------------------------------------------------------\n\n");
		fprintf(archivo,"- Su valor numérico absoluto, que denominamos módulo.\n");
		fprintf(archivo,"- Su dirección o recta sobre la que actúa.\n");
		fprintf(archivo,"- Su sentido de actuación.\n");
		fprintf(archivo,"- Su punto de aplicación.\n");
		fprintf(archivo,"- Se representa con una flecha encima.\n\n");
		fprintf(archivo,"--------------------------------------\n\n");
	}
	
	p("Tiempo.\n\n");
	
	p("Opciones:\n");
	p("[1] - Escalar.\n");
	p("[2] - Vectorial.\n\n");
	
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Tiempo.\n\n");	
	fprintf(archivo,"Opciones:\n");
	fprintf(archivo,"[1] - Escalar.\n");
	fprintf(archivo,"[2] - Vectorial.\n\n");	
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 1) {
		p("Correcto.\n\n");
		p("---------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
		fprintf(archivo,"---------\n\n");
	} else {
		p("Incorrecto.\n");
		p("Una magnitud escalar es aquella que queda especificada completamente con un n%cmero seguido de la unidad.\n\n",163);
		p("---------------------------------------------------------------------------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");
		fprintf(archivo,"Una magnitud escalar es aquella que queda especificada completamente con un número seguido de la unidad.\n\n");
		fprintf(archivo,"---------------------------------------------------------------------------------------------------------\n\n");
	}
	
	p("Aceleraci%cn.\n\n",162);
	
	p("Opciones:\n");
	p("[1] - Escalar.\n");
	p("[2] - Vectorial.\n\n");
	
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Aceleración.\n\n");	
	fprintf(archivo,"Opciones:\n");
	fprintf(archivo,"[1] - Escalar.\n");
	fprintf(archivo,"[2] - Vectorial.\n\n");	
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 2) {
		p("Correcto.\n\n");
		p("---------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
		fprintf(archivo,"---------\n\n");
	} else {
		p("Incorrecto.\n");	
		p("Una magnitud vectorial es aquella que queda definida mediante los atributos:\n");
		p("----------------------------------------------------------------------------\n\n");
		p("- Su valor num%crico absoluto, que denominamos m%cdulo.\n",130,162);
		p("- Su direcci%cn o recta sobre la que act%ca.\n",162,163);
		p("- Su sentido de actuaci%cn.\n",162);
		p("- Su punto de aplicaci%cn.\n",162);
		p("- Se representa con una flecha encima.\n\n");
		p("--------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");	
		fprintf(archivo,"Una magnitud vectorial es aquella que queda definida mediante los atributos:\n");
		fprintf(archivo,"----------------------------------------------------------------------------\n\n");
		fprintf(archivo,"- Su valor numérico absoluto, que denominamos módulo.\n");
		fprintf(archivo,"- Su dirección o recta sobre la que actúa.\n");
		fprintf(archivo,"- Su sentido de actuación.\n");
		fprintf(archivo,"- Su punto de aplicación.\n");
		fprintf(archivo,"- Se representa con una flecha encima.\n\n");
		fprintf(archivo,"--------------------------------------\n\n");
	}
	
	p("Fuerza.\n\n");
	
	p("Opciones:\n");
	p("[1] - Escalar.\n");
	p("[2] - Vectorial.\n\n");
	
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Fuerza.\n\n");	
	fprintf(archivo,"Opciones:\n");
	fprintf(archivo,"[1] - Escalar.\n");
	fprintf(archivo,"[2] - Vectorial.\n\n");	
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 2) {
		p("Correcto.\n\n");
		p("---------\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
		fprintf(archivo,"---------\n\n");
	} else {
		p("Incorrecto.\n");	
		p("Una magnitud vectorial es aquella que queda definida mediante los atributos:\n");
		p("----------------------------------------------------------------------------\n\n");
		p("- Su valor num%crico absoluto, que denominamos m%cdulo.\n",130,162);
		p("- Su direcci%cn o recta sobre la que act%ca.\n",162,163);
		p("- Su sentido de actuaci%cn.\n",162);
		p("- Su punto de aplicaci%cn.\n",162);
		p("- Se representa con una flecha encima.\n\n");
		p("--------------------------------------\n\n");
		
		fprintf(archivo,"Incorrecto.\n");	
		fprintf(archivo,"Una magnitud vectorial es aquella que queda definida mediante los atributos:\n");
		fprintf(archivo,"----------------------------------------------------------------------------\n\n");
		fprintf(archivo,"- Su valor numérico absoluto, que denominamos módulo.\n");
		fprintf(archivo,"- Su dirección o recta sobre la que actúa.\n");
		fprintf(archivo,"- Su sentido de actuación.\n");
		fprintf(archivo,"- Su punto de aplicación.\n");
		fprintf(archivo,"- Se representa con una flecha encima.\n\n");
		fprintf(archivo,"--------------------------------------\n\n");
	}
	
	p("Aparece un vector cuyo punto de aplicaci%cn est%c en el origen de coordenadas, su m%cdulo es de 4 unidades, su direcci%cn y sentido son las de las X positivas. Indica cu%cl de los dos vectores corresponde con la descripci%cn.\n\n",162,160,162,162,160,162);
	
	fprintf(archivo,"Aparece un vector cuyo punto de aplicación está en el origen de coordenadas, su módulo es de 4 unidades, su dirección y sentido son las de las X positivas. Indica cuál de los dos vectores corresponde con la descripción.\n\n");
	
	p("    Y      \n");
	p("     |     \n");
	p("     |     \n");
	p("     |     \n");
	p("  a  |  b  \n");
	p("<----|---->\n");
	p("     |   X \n");
	p("     |     \n");
	p("     |     \n");
	p("     |     \n\n");
	
	fprintf(archivo,"    Y      \n");
	fprintf(archivo,"     |     \n");
	fprintf(archivo,"     |     \n");
	fprintf(archivo,"     |     \n");
	fprintf(archivo,"  a  |  b  \n");
	fprintf(archivo,"<----|---->\n");
	fprintf(archivo,"     |   X \n");
	fprintf(archivo,"     |     \n");
	fprintf(archivo,"     |     \n");
	fprintf(archivo,"     |     \n\n");
	
	int vector;
	
	p("El vector correcto es:\n\n");
	p("[1] - a.\n");
	p("[2] - b.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&vector);
	p("\n");
	
	fprintf(archivo,"El vector correcto es:\n\n");
	fprintf(archivo,"[1] - a.\n");
	fprintf(archivo,"[2] - b.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",vector);
	
	if(vector == 2) {
		p("Correcto.\n\n");
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("Incorrecto.\n\n");
		fprintf(archivo,"Incorrecto.\n\n");
	}
	
	p(" 2      3       6   \n");
	p("-->   --->   <------\n");
	p(" ->     ->      ->  \n");
	p(" a      b       c   \n\n");
	
	fprintf(archivo," 2      3       6   \n");
	fprintf(archivo,"-->   --->   <------\n");
	fprintf(archivo," ->     ->      ->  \n");
	fprintf(archivo," a      b       c   \n\n");
	
	p("Suma a + b.\n\n");
	
	p("Opciones:\n\n");
	
	p("[1] - Vector de m%cdulo 5 de direcci%cn la de los vectores a y b pero sentido opuesto.\n",162,162);
	p("[2] - Vector de m%cdulo 5 de direcci%cn y sentido opuesto al de los vectores a y b.\n",162,162);
	p("[3] - Vector de m%cdulo 5 de direcci%cn y sentido la de los vectores a y b.\n\n",162,162);
	
	fprintf(archivo,"Suma a + b.\n\n");	
	fprintf(archivo,"Opciones:\n\n");	
	fprintf(archivo,"[1] - Vector de módulo 5 de dirección la de los vectores a y b pero sentido opuesto.\n");
	fprintf(archivo,"[2] - Vector de módulo 5 de dirección y sentido opuesto al de los vectores a y b.\n");
	fprintf(archivo,"[3] - Vector de módulo 5 de dirección y sentido la de los vectores a y b.\n\n");
	
	int opera;
	
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opera);
	p("\n");
	
	fprintf(archivo,"Opción: %i.\n\n",opera);
	
	if(opera == 3) {
		p("Correcto.\n\n");
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("Incorrecto.\n\n");
		fprintf(archivo,"Incorrecto.\n\n");
	}
	
	p(" 2      3       6   \n");
	p("-->   --->   <------\n");
	p(" ->     ->      ->  \n");
	p(" a      b       c   \n\n");
	
	fprintf(archivo," 2      3       6   \n");
	fprintf(archivo,"-->   --->   <------\n");
	fprintf(archivo," ->     ->      ->  \n");
	fprintf(archivo," a      b       c   \n\n");
	
	p("Suma a + b + c.\n\n");
	
	p("Opciones:\n\n");
	
	p("[1] - Vector de m%cdulo 11 de direcci%cn y sentido de c.\n",162,162);
	p("[2] - Vector de m%cdulo 1, direcci%cn y sentido del vector c.\n",162,162);
	p("[3] - Vector de m%cdulo 1, direcci%cn y sentido de los vectores a y b.\n\n",162,162);
	
	fprintf(archivo,"Suma a + b + c.\n\n");	
	fprintf(archivo,"Opciones:\n\n");	
	fprintf(archivo,"[1] - Vector de módulo 11 de dirección y sentido de c.\n");
	fprintf(archivo,"[2] - Vector de módulo 1, dirección y sentido del vector c.\n");
	fprintf(archivo,"[3] - Vector de módulo 1, dirección y sentido de los vectores a y b.\n\n");
	
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opera);
	p("\n");
	
	fprintf(archivo,"Opción: %i.\n\n",opera);
	
	if(opera == 2) {
		p("Correcto.\n\n");
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("Incorrecto.\n\n");
		fprintf(archivo,"Incorrecto.\n\n");
	}
	
	p(" 2      3       6   \n");
	p("-->   --->   <------\n");
	p(" ->     ->      ->  \n");
	p(" a      b       c   \n\n");
	
	fprintf(archivo," 2      3       6   \n");
	fprintf(archivo,"-->   --->   <------\n");
	fprintf(archivo," ->     ->      ->  \n");
	fprintf(archivo," a      b       c   \n\n");
	
	p("Resta b - a.\n\n");
	
	p("Opciones:\n\n");
	
	p("[1] - Vector de m%cdulo 1, direcci%cn y sentido de b.\n",162,162);
	p("[2] - Vector de m%cdulo -1, direcci%cn y sentido del vector b.\n",162,162);
	p("[3] - Vector de m%cdulo 1, direcci%cn y sentido de a.\n\n",162,162);
	
	fprintf(archivo,"Suma a + b + c.\n\n");	
	fprintf(archivo,"Opciones:\n\n");	
	fprintf(archivo,"[1] - Vector de módulo 1, dirección y sentido de b.\n");
	fprintf(archivo,"[2] - Vector de módulo -1, dirección y sentido del vector b.\n");
	fprintf(archivo,"[3] - Vector de módulo 1, dirección y sentido de a.\n\n");
	
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opera);
	p("\n");
	
	fprintf(archivo,"Opción: %i.\n\n",opera);
	
	if(opera == 1) {
		p("Correcto.\n\n");
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("Incorrecto.\n\n");
		fprintf(archivo,"Incorrecto.\n\n");
	}
	
	p("Halla el m%cdulo, direcci%cn y sentido de la suma de los vectores a y b, de m%cdulo 4 y 5:\n\n",162,162,162);
	
	p("        5     \n");
	p("    _ _ _ _ _>\n");
	p("   |          \n");
	p("4  |          \n");
	p("   |          \n");
	p("   |          \n");
	p("   v          \n\n");
	
	p("Elige una respuesta:\n\n");
	p("[1] - El resultado es un vector de m%cdulo 6.4 con direcci%cn y sentido los de la diagonal.\n",162,162);
	p("[2] - El resultado es un vector de m%cdulo 1 con direcci%cn y sentido los de la diagonal.\n",162,162);
	p("[3] - El resultado es un vector de m%cdulo 6.4 con direcci%cn del vector a y sentido los de la diagonal.\n",162,162);
	p("[4] - El resultado es un vector de m%cdulo 6.4 con direcci%cn y sentido del vector b.\n\n",162,162);
	
	fprintf(archivo,"Halla el módulo, dirección y sentido de la suma de los vectores a y b, de módulo 4 y 5:\n\n");	
	fprintf(archivo,"        5     \n");
	fprintf(archivo,"    _ _ _ _ _>\n");
	fprintf(archivo,"   |          \n");
	fprintf(archivo,"4  |          \n");
	fprintf(archivo,"   |          \n");
	fprintf(archivo,"   |          \n");
	fprintf(archivo,"   v          \n\n");	
	fprintf(archivo,"Elige una respuesta:\n\n");
	fprintf(archivo,"[1] - El resultado es un vector de módulo 6.4 con dirección y sentido los de la diagonal.\n");
	fprintf(archivo,"[2] - El resultado es un vector de módulo 1 con dirección y sentido los de la diagonal.\n");
	fprintf(archivo,"[3] - El resultado es un vector de módulo 6.4 con dirección del vector a y sentido los de la diagonal.\n");
	fprintf(archivo,"[4] - El resultado es un vector de módulo 6.4 con dirección y sentido del vector b.\n\n");
	
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 1) {
		p("Correcto.\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("Incorrecto.\n\n");
		
		p("     _______\n");
		p("x = Va%c + b%c\n\n",253,253);
		
		p("     _______\n");
		p("x = V5%c + 4%c\n\n",253,253);
		
		p("     _______\n");
		p("x = V25 + 16\n\n");
		
		p("     __\n");
		p("x = V41\n\n");
		
		p("x = 6.4\n\n");
		
		fprintf(archivo,"Incorrecto.\n\n");		
		fprintf(archivo,"     _______\n");
		fprintf(archivo,"x = Va² + b²\n\n");		
		fprintf(archivo,"     _______\n");
		fprintf(archivo,"x = V5² + 4²\n\n");		
		fprintf(archivo,"     _______\n");
		fprintf(archivo,"x = V25 + 16\n\n");		
		fprintf(archivo,"     __\n");
		fprintf(archivo,"x = V41\n\n");		
		fprintf(archivo,"x = 6.4\n\n");
	}
	
	p("Averigua el m%cdulo de un vector cuyos componentes son los que se encuentran a continuaci%cn (Ejemplo: 1.2).\n\n",162,162);
	
	p("a = 3 y b = 5\n\n");
	
	fprintf(archivo,"Averigua el módulo de un vector cuyos componentes son los que se encuentran a continuación (Ejemplo: 1.2).\n\n");	
	fprintf(archivo,"a = 3 y b = 5\n\n");
	
	float resultadof,comprobar;
	
	p("Resultado: ");
	fflush(stdin);
	s("%f",&resultadof);
	p("\n");
	
	fprintf(archivo,"Resultado: %f.\n\n",resultadof);
	
	comprobar = 5.8;
	
	if(resultadof == comprobar) {
		p("Correcto.\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("Incorrecto.\n\n");
		
		p("3%c + 5%c = 9 + 25\n\n",253,253);
		
		p("9 + 25 = 34\n\n");
		
		p(" __\n");
		p("V34 = 5.8\n\n");
		
		fprintf(archivo,"Incorrecto.\n\n");		
		fprintf(archivo,"3² + 5² = 9 + 25\n\n");		
		fprintf(archivo,"9 + 25 = 34\n\n");		
		fprintf(archivo," __\n");
		fprintf(archivo,"V34 = 5.8\n\n");
	}
	
	p("----------------\n\n");
	
	fprintf(archivo,"----------------\n\n");
	
	p("a = 2 y b = 6\n\n");
	
	fprintf(archivo,"a = 2 y b = 6\n\n");
	
	p("Resultado: ");
	fflush(stdin);
	s("%f",&resultadof);
	p("\n");
	
	fprintf(archivo,"Resultado: %f.\n\n",resultadof);
	
	comprobar = 6.3;
	
	if(resultadof == comprobar) {
		p("Correcto.\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("Incorrecto.\n\n");
		
		p("2%c + 6%c = 4 + 36\n\n",253,253);
		
		p("4 + 36 = 40\n\n");
		
		p(" __\n");
		p("V40 = 6.3\n\n");
		
		fprintf(archivo,"Incorrecto.\n\n");		
		fprintf(archivo,"2² + 6² = 4 + 36\n\n");		
		fprintf(archivo,"4 + 36 = 40\n\n");		
		fprintf(archivo," __\n");
		fprintf(archivo,"V40 = 6.3\n\n");
	}
	
	p("----------------\n\n");
	
	fprintf(archivo,"----------------\n\n");
	
	p("a = -10 y b = -2\n\n");
	
	fprintf(archivo,"a = -10 y b = -2\n\n");
	
	p("Resultado: ");
	fflush(stdin);
	s("%f",&resultadof);
	p("\n");
	
	fprintf(archivo,"Resultado: %f.\n\n",resultadof);
	
	comprobar = 10.2;
	
	if(resultadof == comprobar) {
		p("Correcto.\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("Incorrecto.\n\n");
		
		p("-10%c + -2%c = 100 + 4\n\n",253,253);
		
		p("100 + 4 = 104\n\n");
		
		p(" __\n");
		p("V104 = 10.2\n\n");
		
		fprintf(archivo,"Incorrecto.\n\n");		
		fprintf(archivo,"-10² + -2² = 100 + 4\n\n");		
		fprintf(archivo,"100 + 4 = 104\n\n");		
		fprintf(archivo," __\n");
		fprintf(archivo,"V104 = 10.2\n\n");
	}
	
	p("Indica la respuesta que corresponda a dos vectores que tengan el mismo punto de aplicaci%cn, direcciones perpendiculares y cuyo m%cdulo sea uno el triple que el otro.\n\n",162,162);
	
	fprintf(archivo,"Indica la respuesta que corresponda a dos vectores que tengan el mismo punto de aplicación, direcciones perpendiculares y cuyo módulo sea uno el triple que el otro.\n\n");
	
	p("       A     \n");
	p("_____________\n");
	p("       3a    \n");
	p("   --------->\n");
	p("a |          \n");
	p("  v          \n\n");
	
	fprintf(archivo,"       A     \n");
	fprintf(archivo,"_____________\n");
	fprintf(archivo,"       3a    \n");
	fprintf(archivo,"   --------->\n");
	fprintf(archivo,"a |          \n");
	fprintf(archivo,"  v          \n\n");
	
	p("----------------\n\n");
	
	fprintf(archivo,"----------------\n\n");
	
	p("       B     \n");
	p("_____________\n");
	p("       3a    \n");
	p("   --------->\n");
	p("a  \         \n");
	p("    v        \n\n");
	
	fprintf(archivo,"       B     \n");
	fprintf(archivo,"_____________\n");
	fprintf(archivo,"       3a    \n");
	fprintf(archivo,"   --------->\n");
	fprintf(archivo,"a  \         \n");
	fprintf(archivo,"    v        \n\n");
	
	p("----------------\n\n");
	
	fprintf(archivo,"----------------\n\n");
	
	p("       C     \n");
	p("_____________\n");
	p("       3a    \n");
	p("   --------->\n");
	p("  |          \n");
	p("  |          \n");
	p("a |          \n");
	p("  |          \n");
	p("  v          \n\n");
	
	fprintf(archivo,"       C     \n");
	fprintf(archivo,"_____________\n");
	fprintf(archivo,"       3a    \n");
	fprintf(archivo,"   --------->\n");
	fprintf(archivo,"  |          \n");
	fprintf(archivo,"  |          \n");
	fprintf(archivo,"a |          \n");
	fprintf(archivo,"  |          \n");
	fprintf(archivo,"  v          \n\n");
	
	char letra;
	
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%c",&letra);
	p("\n");
	
	fprintf(archivo,"Opción: %c.\n\n",letra);
	
	if(letra == 'c' || letra == 'C') {
		p("Correcto.\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("Incorrecto.\n\n");
		
		fprintf(archivo,"Incorrecto.\n\n");
	}
	
	fclose(archivo);
}
