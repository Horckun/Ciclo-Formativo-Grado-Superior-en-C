void incopo() {
	FILE *archivo;
	archivo = fopen("Introducci�n del concepto potencia.doc","w");
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
	
	fprintf(archivo,"Introducci�n del concepto potencia:\n");
	fprintf(archivo,"===================================\n\n");
	fprintf(archivo,"La potencia es la cantidad de trabajo que se realiza por unidad de tiempo. Puede asociarse a la velocidad de un cambio de energ�a dentro de un sistema, o al tiempo que demora la concreci�n de un trabajo. Por lo tanto, es posible afirmar que la potencia resulta igual a la energ�a total dividida por el tiempo.\n\n");
	fprintf(archivo,"Se puede indicar que la potencia es la fuerza, el poder o la capacidad para conseguir algo.\n\n");
	fprintf(archivo,"En este sentido, cabe destacar que en muchas ocasiones, se habla de ciertas naciones o pa�ses como potencia mundial. Con dicha expresi�n lo que quiere manifestarse es que aquellas en cuesti�n eran o son muy poderosas y destacan por la influencia notable que ejercen en el resto del planeta.\n\n");
	fprintf(archivo,"Se conoce como potencia mec�nica al trabajo que realiza un individuo o una m�quina en un cierto periodo de tiempo. Se trata de la potencia que se transmite a trav�s del accionar de una fuerza f�sica de contacto o de algunos elementos mec�nicos relacionados, como un engranaje o un juego de palancas.\n\n");
	fprintf(archivo,"Otro tipo de potencia que puede mencionarse es la potencia el�ctrica, que es el resultado de multiplicar la diferencia de potencial entre los extremos de una carga y la corriente que circula all�.\n\n");
	fprintf(archivo,"Tambi�n podemos hacer referencia a la potencia del sonido, que se calcula en funci�n de la intensidad y la superficie, y a la potencia de un punto.\n\n");
	fprintf(archivo,"En cuanto a las unidades de potencia, pueden reconocerse cuatro grandes sistemas. El sistema internacional de unidades, cuya unidad m�s frecuente es el vatio o watt y sus m�ltiplos, aunque tambi�n puede utilizar combinaciones equivalentes como el voltampere; el sistema ingl�s, que mide por caballo de fuerza m�trico; el t�cnico de unidades, que se basa en la calor�a internacional por segundo; y el cegesimal, que calcula ergio por segundo.\n\n");
	fprintf(archivo,"Tampoco podemos olvidar que en el �mbito de las Matem�ticas es frecuente el uso del t�rmino potencia, y es que con �l, se viene a definir a una operaci�n mediante la cual se determina el resultado de que un n�mero en cuesti�n se halla multiplicado por s� mismo en varias ocasiones.\n\n");
	
	fclose(archivo);
}
