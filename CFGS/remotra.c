void remotra() {
	FILE *archivo;
	archivo = fopen("Relatividad del movimiento. Trayectoria.doc","w");
	if(archivo == NULL) {
		p("No se ha podido abrir el archivo.\n\n");
	}
	
	p("Relatividad del movimiento. Trayectoria:\n");
	p("========================================\n\n");
	
	p("Cuando medimos la velocidad, tomamos como referencia una posici%cn fija de un cuerpo para realizar las medidas de las velocidades de los dem%cs objetos relativos a %cl.\n\n",162,160,130);
	
	p("En nuestro caso, tomamos como referencia la Tierra, la cu%cl suponemos que est%c en reposo. Por ello, decimos que la velocidad es medida tomando como referencia la Tierra.\n\n",160,160);
	
	p("Dependiendo de c%cmo se muevan los observadores, se dir%c que el objeto tiene una velocidad u otra, por ello decimos que la velocidad es relativa, porque depende de qui%cn observa el objeto en movimiento.\n\n",162,160,130);
	
	p("Por ejemplo, si observamos un tren, el punto de referencia es la Tierra, y es el tren el que est%c en movimiento, pero si estamos dentro del tren, tomamos como referencia el propio tren y es el paisaje el que se mueve.\n\n",160);
	
	p("Supongamos que queremos medir la velocidad del tren, ponemos una l%cnea de salida y otra de meta con una separaci%cn por ejemplo de 100 m. Observar%camos que el tren tarda 4 segundos en traspasar la l%cnea de meta.\n\n",161,162,161,161);
	
	system("pause");
	p("\n");
	
	p("Observar%camos que el tren se mueve:\n\n",161);
	
	p("             espacio\n");
	p(" velocidad = -------\n");
	p("             tiempo \n\n");
	
	p("     e\n");
	p(" v = -\n");
	p("     t\n\n");
	
	p("     100 m.\n");
	p(" v = ---   \n");
	p("      4 s. \n\n");
	
	p(" v = 25 m/s.\n\n");
	
	system("pause");
	p("\n");
	
	p("Si por ejemplo te sientas frente a un pasajero, obervar%cs que ese pasajero no se ha movido en esos 4 segundo.\n\n",160);
	
	p("Por tanto:\n\n");
	
	p("     e\n");
	p(" v = -\n");
	p("     t\n\n");
	
	p("     0 m.\n");
	p(" v = ----\n");
	p("     4 s.\n\n");
	
	p(" v = 0 m/s.\n\n");
	
	p("Por tanto, por ello se dice que la velocidad es relativa, ambos ejemplos son v%clidos para un mismo caso.\n\n",160);
	
	fprintf(archivo,"Relatividad del movimiento. Trayectoria:\n");
	fprintf(archivo,"========================================\n\n");	
	fprintf(archivo,"Cuando medimos la velocidad, tomamos como referencia una posición fija de un cuerpo para realizar las medidas de las velocidades de los demás objetos relativos a él.\n\n");	
	fprintf(archivo,"En nuestro caso, tomamos como referencia la Tierra, la cuál suponemos que está en reposo. Por ello, decimos que la velocidad es medida tomando como referencia la Tierra.\n\n");	
	fprintf(archivo,"Dependiendo de cómo se muevan los observadores, se dirá que el objeto tiene una velocidad u otra, por ello decimos que la velocidad es relativa, porque depende de quién observa el objeto en movimiento.\n\n");	
	fprintf(archivo,"Por ejemplo, si observamos un tren, el punto de referencia es la Tierra, y es el tren el que está en movimiento, pero si estamos dentro del tren, tomamos como referencia el propio tren y es el paisaje el que se mueve.\n\n");	
	fprintf(archivo,"Supongamos que queremos medir la velocidad del tren, ponemos una línea de salida y otra de meta con una separación por ejemplo de 100 m. Observaríamos que el tren tarda 4 segundos en traspasar la línea de meta.\n\n");	
	fprintf(archivo,"Observaríamos que el tren se mueve:\n\n");	
	fprintf(archivo,"             espacio\n");
	fprintf(archivo," velocidad = -------\n");
	fprintf(archivo,"             tiempo \n\n");	
	fprintf(archivo,"     e\n");
	fprintf(archivo," v = -\n");
	fprintf(archivo,"     t\n\n");	
	fprintf(archivo,"     100 m.\n");
	fprintf(archivo," v = ---   \n");
	fprintf(archivo,"      4 s. \n\n");	
	fprintf(archivo," v = 25 m/s.\n\n");
	fprintf(archivo,"Si por ejemplo te sientas frente a un pasajero, obervarás que ese pasajero no se ha movido en esos 4 segundo.\n\n");	
	fprintf(archivo,"Por tanto:\n\n");	
	fprintf(archivo,"     e\n");
	fprintf(archivo," v = -\n");
	fprintf(archivo,"     t\n\n");	
	fprintf(archivo,"     0 m.\n");
	fprintf(archivo," v = ----\n");
	fprintf(archivo,"     4 s.\n\n");	
	fprintf(archivo," v = 0 m/s.\n\n");	
	fprintf(archivo,"Por tanto, por ello se dice que la velocidad es relativa, ambos ejemplos son válidos para un mismo caso.\n\n");
	
	p("Ejercicios:\n");
	p("-----------\n\n");
	
	p("Un coche recorre 30 km. para llegar a la ciudad m%cs pr%cxima y llega en 30 min. Calcula la velocidad a la que va el coche.\n\n",160,162);
	
	fprintf(archivo,"Ejercicios:\n");
	fprintf(archivo,"-----------\n\n");	
	fprintf(archivo,"Un coche recorre 30 km. para llegar a la ciudad más próxima y llega en 30 min. Calcula la velocidad a la que va el coche.\n\n");
	
	int opcion;
	
	p("Velocidad: \n\n");
	p("[1] - 1 km/h.\n");
	p("[2] - 1 m/s.\n");
	p("[3] - 1 km/min.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Velocidad: \n\n");
	fprintf(archivo,"[1] - 1 km/h.\n");
	fprintf(archivo,"[2] - 1 m/s.\n");
	fprintf(archivo,"[3] - 1 km/min.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 3) {
		p("Correcto.\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("Incorrecto.\n\n");
		p("   30 km. \n");
		p(" v =======\n");
		p("   30 min.\n\n");
		p(" v = 1 km/min.\n\n");
		
		fprintf(archivo,"Incorrecto.\n\n");
		fprintf(archivo,"   30 km. \n");
		fprintf(archivo," v =======\n");
		fprintf(archivo,"   30 min.\n\n");
		fprintf(archivo," v = 1 km/min.\n\n");
	}
	
	p("Una persona sale a correr y recorre 8 km. en 60 min. Calcula la velocidad a la que va en km/h.\n\n");
	
	p("Velocidad: \n\n");
	p("[1] - 1 km/h.\n");
	p("[2] - 8 km/h.\n");
	p("[3] - 5 km/h.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Una persona sale a correr y recorre 8 km. en 60 min. Calcula la velocidad a la que va en km/h.\n\n");	
	fprintf(archivo,"Velocidad: \n\n");
	fprintf(archivo,"[1] - 1 km/h.\n");
	fprintf(archivo,"[2] - 8 km/h.\n");
	fprintf(archivo,"[3] - 5 km/h.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 2) {
		p("Correcto.\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("Incorrecto.\n\n");
		p("   8 km. \n");
		p(" v =======\n");
		p("   60 min.\n\n");
		
		p("   8 km.\n");
		p(" v =====\n");
		p("   1 h. \n\n");
		
		p(" v = 8 km/h.\n\n");
		
		fprintf(archivo,"Incorrecto.\n\n");
		fprintf(archivo,"   8 km. \n");
		fprintf(archivo," v =======\n");
		fprintf(archivo,"   60 min.\n\n");		
		fprintf(archivo,"   8 km.\n");
		fprintf(archivo," v =====\n");
		fprintf(archivo,"   1 h. \n\n");		
		fprintf(archivo," v = 8 km/h.\n\n");
	}
	
	p("Para llegar un coche a la ciudad m%cs pr%cxima y llegar en 20 min. yendo a 50 km/h. Calcula la distancia que debe reccorrer el coche.\n\n",160,162);
	
	fprintf(archivo,"Para llegar un coche a la ciudad más próxima y llegar en 20 min. yendo a 50 km/h. Calcula la distancia que debe reccorrer el coche.\n\n");
	
	p("Velocidad: \n\n");
	p("[1] - 100 km.\n");
	p("[2] - 16.66 km.\n");
	p("[3] - 80 km.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Velocidad: \n\n");
	fprintf(archivo,"[1] - 100 km.\n");
	fprintf(archivo,"[2] - 16.66 km.\n");
	fprintf(archivo,"[3] - 80 km.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 2) {
		p("Correcto.\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("Incorrecto.\n\n");
		
		p("             e \n");
		p(" 50 km/h. =======\n");
		p("          20 min.\n\n");
		
		p(" 20 min. / 60 minutos que tiene una hora = 0.33 h.\n\n");
		
		p(" 50 km/h. * 0.33 h. = 16.66 km/h.\n\n");
		
		fprintf(archivo,"Incorrecto.\n\n");	
		fprintf(archivo,"             e \n");
		fprintf(archivo," 50 km/h. =======\n");
		fprintf(archivo,"          20 min.\n\n");		
		fprintf(archivo," 20 min. / 60 minutos que tiene una hora = 0.33 h.\n\n");		
		fprintf(archivo," 50 km/h. * 0.33 h. = 16.66 km/h.\n\n");
	}
	
	p("Una persona sale a correr y corre 8.5 km/h. en una distancia de 11 km. Calcula el tiempo que tard%c en recorrerlo.\n\n",162);
	
	p("Velocidad: \n\n");
	p("[1] - 46.36 min.\n");
	p("[2] - 1 h.\n");
	p("[3] - 1.5 h.\n\n");
	p("Opci%cn: ",162);
	fflush(stdin);
	s("%i",&opcion);
	p("\n");
	
	fprintf(archivo,"Una persona sale a correr y corre 8.5 km/h. en una distancia de 11 km. Calcula el tiempo que tardó en recorrerlo.\n\n");	
	fprintf(archivo,"Velocidad: \n\n");
	fprintf(archivo,"[1] - 46.36 min.\n");
	fprintf(archivo,"[2] - 1 h.\n");
	fprintf(archivo,"[3] - 1.5 h.\n\n");
	fprintf(archivo,"Opción: %i.\n\n",opcion);
	
	if(opcion == 1) {
		p("Correcto.\n\n");
		
		fprintf(archivo,"Correcto.\n\n");
	} else {
		p("Incorrecto.\n\n");
		
		p("           11 km.\n");
		p(" 8.5 km/h. ======\n");
		p("           t\n\n");
		
		p(" 8.5 km/h. / 11 km = 0.77 h.\n\n");
		
		p(" 0.77 h. * 60 min. = 46.36 min.\n\n");
		
		fprintf(archivo,"Incorrecto.\n\n");		
		fprintf(archivo,"           11 km.\n");
		fprintf(archivo," 8.5 km/h. ======\n");
		fprintf(archivo,"           t\n\n");		
		fprintf(archivo," 8.5 km/h. / 11 km = 0.77 h.\n\n");		
		fprintf(archivo," 0.77 h. * 60 min. = 46.36 min.\n\n");
	}
	
	fclose(archivo);
}
