void calere() {
	FILE *archivo;
	archivo = fopen("C�lculos estequiom�tricos con reacciones en las que intervienen disoluciones.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("C%clculos estequiom%ctricos con reacciones en las que intervienen disoluciones:\n",160,130);
	p("=============================================================================\n\n");
	p("Una ecuaci%cn qu%cmica est%c ajustada si se conserva el n%cmero de %ctomos en los dos miembros de la ecuaci%cn. Para ajustarla se utilizan los coeficientes estequiom%ctricos. Una ecuaci%cn qu%cmica indica de forma simb%clica los cambios que tienen lugar en una reacci%cn qu%cmica. Presentan la siguiente forma: En toda reacci%cn qu%cmica se cumple el principio de conservaci%cn de la masa y el principio de conservaci%cn de las cargas el%cctricas, para ello, la reacci%cn qu%cmica debe estar ajustada.\n\n",162,161,160,163,160,162,130,162,161,162,162,161,162,161,162,162,130,162,161);
	p("Si intervienen iones, deben ajustarse de forma que la carga neta sea la misma en los dos miembros: Indican cu%cles han sido los reactivos y qu%c productos se han formado, se%calan la proporci%cn en que las sustancias han participado.\n\n",160,130,164,162);
	p("Los coeficientes estequiom%ctricos indican el n%cmero de %ctomos de cada elemento y el n%cmero de mol%cculas de cada compuesto que intervienen en la reacci%cn. Los coeficientes estequiom%ctricos de una ecuaci%cn qu%cmica ajustada informan de la proporci%cn entre %ctomos y mol%cculas de reactivos y productos.\n\n",130,163,160,163,130,162,130,162,161,162,160,130);
	p("Los coeficientes estequiom%ctricos informan sobre el n%cmero de moles de cada elemento y de cada compuesto que intervienen en la reacci%cn. Los coeficientes estequiom%ctricos de una ecuaci%cn qu%cmica ajustada informan de la proporci%cn entre moles de reactivos y productos.\n\n",130,163,162,130,162,161,162);
	p("Los coeficientes estequiom%ctricos de una ecuaci%cn qu%cmica ajustada informan de la proporci%cn entre gramos de reactivos y productos. A partir de las masas at%cmicas de los elementos que intervienen en la reacci%cn, se puede establecer la relaci%cn entre las masas de los reactivos y de los productos. Conociendo las masas at%cmicas, se determinan las masas moleculares.\n\n",130,162,161,162,162,162,162,162);
	p("Si en la reacci%cn intervienen gases en c.n. de presi%cn y temperatura, 1 mol de cualquiera de ellos ocupar%c un volumen de 22,4 litros. Los coeficientes estequiom%ctricos de una ecuaci%cn qu%cmica ajustada en la que intervienen gases, informan de la proporci%cn entre vol%cmenes de reactivos y productos.\n\n",162,162,160,130,162,161,162,163);
	
	system("pause");
	p("\n");
	
	p("Conocida la masa de un reactivo o de un producto, pueden calcularse el resto de las masas que intervienen en la reacci%cn.\n\n",162);
	p("Si existen reactivos con impurezas, es necesario determinar primero las cantidades existentes de sustancia pura.\n\n");
	p("En reacciones sucesivas, el producto de la primera, puede ser el reactivo de la segunda, estableci%cndose las sucesivas proporciones estequiom%ctricas, en las que el resultado de la primera es dato de la segunda.\n\n",130,130);
	p("Los vol%cmenes de gases que reaccionan entre s%c, medidos en las mismas condiciones de presi%cn y temperatura, est%cn en relaci%cn de n%cmeros enteros sencillos. En una mezcla de gases, cada uno ejerce una presi%cn parcial igual a la que ejercer%ca si ocupase solo el volumen total. Adem%cs, la presi%cn parcial de cada gas es directamente proporcional a su fracci%cn molar. La presi%cn total es la suma de las presiones parciales. En condiciones iguales de presi%cn y temperatura, vol%cmenes iguales de gases diferentes tienen el mismo n%cmero de mol%cculas. Manteniendo constante la presi%cn, todos los gases se dilatan igual con el aumento de temperatura.\n\n",163,161,162,160,162,163,162,161,160,162,162,162,162,163,163,130,162);
	p("Aplicando la ecuaci%cn de los gases perfectos se demuestra la relaci%cn entre presi%cn parcial y fracci%cn molar.\n\n",162,162,162,162);
	p("Generalmente es necesario preparar cantidades determinadas de productos a partir de cantidades de reactivos que no son estequiom%ctricamente exactas. El reactivo limitante reacciona solamente con la cantidad adecuada de la otra sustancia hasta que se acaba y de la que se encuentra en exceso queda parte sin reaccionar.\n\n",130);
	p("En estos casos es necesario calcular las cantidades de dichos reactivos disueltos.\n\n");
	p("En los procesos qu%cmicos no suele obtenerse el cien por cien de las cantidades previstas de las sustancias, debido a reacciones simult%cneas no deseadas, impurezas de los reactivos, escapes en los hornos, etc. El rendimiento de las reacciones es un factor fundamental en la industria qu%cmica.\n\n",161,160,161);
	
	system("pause");
	p("\n");
		
	fprintf(archivo,"C�lculos estequiom�tricos con reacciones en las que intervienen disoluciones:\n");
	fprintf(archivo,"=============================================================================\n\n");
	fprintf(archivo,"Una ecuaci�n qu�mica est� ajustada si se conserva el n�mero de �tomos en los dos miembros de la ecuaci�n. Para ajustarla se utilizan los coeficientes estequiom�tricos. Una ecuaci�n qu�mica indica de forma simb�lica los cambios que tienen lugar en una reacci�n qu�mica. Presentan la siguiente forma: En toda reacci�n qu�mica se cumple el principio de conservaci�n de la masa y el principio de conservaci�n de las cargas el�ctricas, para ello, la reacci�n qu�mica debe estar ajustada.\n\n");
	fprintf(archivo,"Si intervienen iones, deben ajustarse de forma que la carga neta sea la misma en los dos miembros: Indican cu�les han sido los reactivos y qu� productos se han formado, se�alan la proporci�n en que las sustancias han participado.\n\n");
	fprintf(archivo,"Los coeficientes estequiom�tricos indican el n�mero de �tomos de cada elemento y el n�mero de mol�culas de cada compuesto que intervienen en la reacci�n. Los coeficientes estequiom�tricos de una ecuaci�n qu�mica ajustada informan de la proporci�n entre �tomos y mol�culas de reactivos y productos.\n\n");
	fprintf(archivo,"Los coeficientes estequiom�tricos informan sobre el n�mero de moles de cada elemento y de cada compuesto que intervienen en la reacci�n. Los coeficientes estequiom�tricos de una ecuaci�n qu�mica ajustada informan de la proporci�n entre moles de reactivos y productos.\n\n");
	fprintf(archivo,"Los coeficientes estequiom�tricos de una ecuaci�n qu�mica ajustada informan de la proporci�n entre gramos de reactivos y productos. A partir de las masas at�micas de los elementos que intervienen en la reacci�n, se puede establecer la relaci�n entre las masas de los reactivos y de los productos. Conociendo las masas at�micas, se determinan las masas moleculares.\n\n");
	fprintf(archivo,"Si en la reacci�n intervienen gases en c.n. de presi�n y temperatura, 1 mol de cualquiera de ellos ocupar� un volumen de 22,4 litros. Los coeficientes estequiom�tricos de una ecuaci�n qu�mica ajustada en la que intervienen gases, informan de la proporci�n entre vol�menes de reactivos y productos.\n\n");
	fprintf(archivo,"Conocida la masa de un reactivo o de un producto, pueden calcularse el resto de las masas que intervienen en la reacci�n.\n\n");
	fprintf(archivo,"Si existen reactivos con impurezas, es necesario determinar primero las cantidades existentes de sustancia pura.\n\n");
	fprintf(archivo,"En reacciones sucesivas, el producto de la primera, puede ser el reactivo de la segunda, estableci�ndose las sucesivas proporciones estequiom�tricas, en las que el resultado de la primera es dato de la segunda.\n\n");
	fprintf(archivo,"Los vol�menes de gases que reaccionan entre s�, medidos en las mismas condiciones de presi�n y temperatura, est�n en relaci�n de n�meros enteros sencillos. En una mezcla de gases, cada uno ejerce una presi�n parcial igual a la que ejercer�a si ocupase el solo el volumen total. Adem�s, la presi�n parcial de cada gas es directamente proporcional a su fracci�n molar. La presi�n total es la suma de las presiones parciales. En condiciones iguales de presi�n y temperatura, vol�menes iguales de gases diferentes tienen el mismo n�mero de mol�culas. Manteniendo constante la presi�n, todos los gases se dilatan igual con el aumento de temperatura.\n\n");
	fprintf(archivo,"Aplicando la ecuaci�n de los gases perfectos se demuestra la relaci�n entre presi�n parcial y fracci�n molar.\n\n");
	fprintf(archivo,"Generalmente es necesario preparar cantidades determinadas de productos a partir de cantidades de reactivos que no son estequiom�tricamente exactas. El reactivo limitante reacciona solamente con la cantidad adecuada de la otra sustancia hasta que se acaba y de la que se encuentra en exceso queda parte sin reaccionar.\n\n");
	fprintf(archivo,"En estos casos es necesario calcular las cantidades de dichos reactivos disueltos.\n\n");
	fprintf(archivo,"En los procesos qu�micos no suele obtenerse el cien por cien de las cantidades previstas de las sustancias, debido a reacciones simult�neas no deseadas, impurezas de los reactivos, escapes en los hornos, etc. El rendimiento de las reacciones es un factor fundamental en la industria qu�mica.\n\n");
	
	fclose(archivo);
}
