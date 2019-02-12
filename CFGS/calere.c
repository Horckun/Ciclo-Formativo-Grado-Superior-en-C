void calere() {
	FILE *archivo;
	archivo = fopen("Cálculos estequiométricos con reacciones en las que intervienen disoluciones.doc","w");
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
		
	fprintf(archivo,"Cálculos estequiométricos con reacciones en las que intervienen disoluciones:\n");
	fprintf(archivo,"=============================================================================\n\n");
	fprintf(archivo,"Una ecuación química está ajustada si se conserva el número de átomos en los dos miembros de la ecuación. Para ajustarla se utilizan los coeficientes estequiométricos. Una ecuación química indica de forma simbólica los cambios que tienen lugar en una reacción química. Presentan la siguiente forma: En toda reacción química se cumple el principio de conservación de la masa y el principio de conservación de las cargas eléctricas, para ello, la reacción química debe estar ajustada.\n\n");
	fprintf(archivo,"Si intervienen iones, deben ajustarse de forma que la carga neta sea la misma en los dos miembros: Indican cuáles han sido los reactivos y qué productos se han formado, señalan la proporción en que las sustancias han participado.\n\n");
	fprintf(archivo,"Los coeficientes estequiométricos indican el número de átomos de cada elemento y el número de moléculas de cada compuesto que intervienen en la reacción. Los coeficientes estequiométricos de una ecuación química ajustada informan de la proporción entre átomos y moléculas de reactivos y productos.\n\n");
	fprintf(archivo,"Los coeficientes estequiométricos informan sobre el número de moles de cada elemento y de cada compuesto que intervienen en la reacción. Los coeficientes estequiométricos de una ecuación química ajustada informan de la proporción entre moles de reactivos y productos.\n\n");
	fprintf(archivo,"Los coeficientes estequiométricos de una ecuación química ajustada informan de la proporción entre gramos de reactivos y productos. A partir de las masas atómicas de los elementos que intervienen en la reacción, se puede establecer la relación entre las masas de los reactivos y de los productos. Conociendo las masas atómicas, se determinan las masas moleculares.\n\n");
	fprintf(archivo,"Si en la reacción intervienen gases en c.n. de presión y temperatura, 1 mol de cualquiera de ellos ocupará un volumen de 22,4 litros. Los coeficientes estequiométricos de una ecuación química ajustada en la que intervienen gases, informan de la proporción entre volúmenes de reactivos y productos.\n\n");
	fprintf(archivo,"Conocida la masa de un reactivo o de un producto, pueden calcularse el resto de las masas que intervienen en la reacción.\n\n");
	fprintf(archivo,"Si existen reactivos con impurezas, es necesario determinar primero las cantidades existentes de sustancia pura.\n\n");
	fprintf(archivo,"En reacciones sucesivas, el producto de la primera, puede ser el reactivo de la segunda, estableciéndose las sucesivas proporciones estequiométricas, en las que el resultado de la primera es dato de la segunda.\n\n");
	fprintf(archivo,"Los volúmenes de gases que reaccionan entre sí, medidos en las mismas condiciones de presión y temperatura, están en relación de números enteros sencillos. En una mezcla de gases, cada uno ejerce una presión parcial igual a la que ejercería si ocupase el solo el volumen total. Además, la presión parcial de cada gas es directamente proporcional a su fracción molar. La presión total es la suma de las presiones parciales. En condiciones iguales de presión y temperatura, volúmenes iguales de gases diferentes tienen el mismo número de moléculas. Manteniendo constante la presión, todos los gases se dilatan igual con el aumento de temperatura.\n\n");
	fprintf(archivo,"Aplicando la ecuación de los gases perfectos se demuestra la relación entre presión parcial y fracción molar.\n\n");
	fprintf(archivo,"Generalmente es necesario preparar cantidades determinadas de productos a partir de cantidades de reactivos que no son estequiométricamente exactas. El reactivo limitante reacciona solamente con la cantidad adecuada de la otra sustancia hasta que se acaba y de la que se encuentra en exceso queda parte sin reaccionar.\n\n");
	fprintf(archivo,"En estos casos es necesario calcular las cantidades de dichos reactivos disueltos.\n\n");
	fprintf(archivo,"En los procesos químicos no suele obtenerse el cien por cien de las cantidades previstas de las sustancias, debido a reacciones simultáneas no deseadas, impurezas de los reactivos, escapes en los hornos, etc. El rendimiento de las reacciones es un factor fundamental en la industria química.\n\n");
	
	fclose(archivo);
}
