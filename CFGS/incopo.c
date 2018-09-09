void incopo() {
	FILE *archivo;
	archivo = fopen("Introducción del concepto potencia.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Introducci%cn del concepto potencia:\n",162);
	p("===================================\n\n");
	p("La potencia es la cantidad de trabajo que se realiza por unidad de tiempo. Puede asociarse a la velocidad de un cambio de energ%ca dentro de un sistema, o al tiempo que demora la concreci%cn de un trabajo. Por lo tanto, es posible afirmar que la potencia resulta igual a la energ%ca total dividida por el tiempo.\n\n",161,162,161);
	
	p("Se puede indicar que la potencia es la fuerza, el poder o la capacidad para conseguir algo.\n\n");
	
	p("En este sentido, cabe destacar que en muchas ocasiones, se habla de ciertas naciones o pa%cses como potencia mundial. Con dicha expresi%cn lo que quiere manifestarse es que aquellas en cuesti%cn eran o son muy poderosas y destacan por la influencia notable que ejercen en el resto del planeta.\n\n",161,162,162);
	
	p("Se conoce como potencia mec%cnica al trabajo que realiza un individuo o una m%cquina en un cierto per%codo de tiempo. Se trata de la potencia que se transmite a trav%cs del accionar de una fuerza f%csica de contacto o de algunos elementos mec%cnicos relacionados, como un engranaje o un juego de palancas.\n\n",160,160,161,130,161,160);
	
	p("Otro tipo de potencia que puede mencionarse es la potencia el%cctrica, que es el resultado de multiplicar la diferencia de potencial entre los extremos de una carga y la corriente que circula all%c.\n\n",130,161);
	
	system("pause");
	p("\n");
	
	p("Tambi%cn podemos hacer referencia a la potencia del sonido, que se calcula en funci%cn de la intensidad y la superficie, y a la potencia de un punto.\n\n",130,162);
	
	p("En cuanto a las unidades de potencia, pueden reconocerse cuatro grandes sistemas. El sistema internacional de unidades, cuya unidad m%cs frecuente es el vatio o watt y sus m%cltiplos, aunque tambi%cn puede utilizar combinaciones equivalentes como el voltampere; el sistema ingl%cs, que mide por caballo de fuerza m%ctrico; el t%ccnico de unidades, que se basa en la calor%ca internacional por segundo; y el cegesimal, que calcula ergio por segundo.\n\n",160,163,130,130,130,130,161);
	
	p("Tampoco podemos olvidar que en el %cmbito de las Matem%cticas es frecuente el uso del t%crmino potencia, y es que con %cl, se viene a definir a una operaci%cn mediante la cual se determina el resultado de que un n%cmero en cuesti%cn se halla multiplicado por s%c mismo en varias ocasiones.\n\n",160,160,130,130,162,163,162,161);
	
	fprintf(archivo,"Introducción del concepto potencia:\n");
	fprintf(archivo,"===================================\n\n");
	fprintf(archivo,"La potencia es la cantidad de trabajo que se realiza por unidad de tiempo. Puede asociarse a la velocidad de un cambio de energía dentro de un sistema, o al tiempo que demora la concreción de un trabajo. Por lo tanto, es posible afirmar que la potencia resulta igual a la energía total dividida por el tiempo.\n\n");
	fprintf(archivo,"Se puede indicar que la potencia es la fuerza, el poder o la capacidad para conseguir algo.\n\n");
	fprintf(archivo,"En este sentido, cabe destacar que en muchas ocasiones, se habla de ciertas naciones o países como potencia mundial. Con dicha expresión lo que quiere manifestarse es que aquellas en cuestión eran o son muy poderosas y destacan por la influencia notable que ejercen en el resto del planeta.\n\n");
	fprintf(archivo,"Se conoce como potencia mecánica al trabajo que realiza un individuo o una máquina en un cierto periodo de tiempo. Se trata de la potencia que se transmite a través del accionar de una fuerza física de contacto o de algunos elementos mecánicos relacionados, como un engranaje o un juego de palancas.\n\n");
	fprintf(archivo,"Otro tipo de potencia que puede mencionarse es la potencia eléctrica, que es el resultado de multiplicar la diferencia de potencial entre los extremos de una carga y la corriente que circula allí.\n\n");
	fprintf(archivo,"También podemos hacer referencia a la potencia del sonido, que se calcula en función de la intensidad y la superficie, y a la potencia de un punto.\n\n");
	fprintf(archivo,"En cuanto a las unidades de potencia, pueden reconocerse cuatro grandes sistemas. El sistema internacional de unidades, cuya unidad más frecuente es el vatio o watt y sus múltiplos, aunque también puede utilizar combinaciones equivalentes como el voltampere; el sistema inglés, que mide por caballo de fuerza métrico; el técnico de unidades, que se basa en la caloría internacional por segundo; y el cegesimal, que calcula ergio por segundo.\n\n");
	fprintf(archivo,"Tampoco podemos olvidar que en el ámbito de las Matemáticas es frecuente el uso del término potencia, y es que con él, se viene a definir a una operación mediante la cual se determina el resultado de que un número en cuestión se halla multiplicado por sí mismo en varias ocasiones.\n\n");
	
	fclose(archivo);
}
