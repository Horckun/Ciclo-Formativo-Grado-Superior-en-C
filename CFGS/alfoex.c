void alfoex() {
	FILE *archivo;
	archivo = fopen("Algunas formas de expresar la concentraci�n de las disoluciones. Molaridad y tanto por cien en masa.doc","w");
	if(archivo == NULL) {
		p("No se ha podido abrir el archivo.\n\n");
	}
	
	p("Formas de expresar la concentraci%cn:\n",162);
	p("====================================\n\n");
	p("Los t%crminos cuantitativos son cuando la concentraci%cn se expresa cient%cficamente de una manera num%crica muy exacta y precisa. Algunas de estas formas cuantitativas de medir la concentraci%cn son los porcentajes del soluto, la molaridad, la normalidad, y partes por mill%cn, entre otras. Estas formas cuantitativas son las usadas tanto en la industria para la elaboraci%cn de productos como tambi%cn en la investigaci%cn cient%cfica.\n\n",130,162,161,130,162,162,162,130,162,161);
	
	system("pause");
	p("\n");
	
	p(" - Concentraci%cn en t%crminos cualitativos:\n",162,130);
	p(" -----------------------------------------\n\n");
	p(" La concentraci%cn de las disoluciones en t%crminos cualitativos, tambi%cn llamados emp%cricos, no toma en cuenta cuantitativamente (num%cricamente) la cantidad exacta de soluto y disolvente presentes, y dependiendo de su proporci%cn la concentraci%cn se clasifica como sigue:\n\n",162,130,130,161,130,162,162);
	
	system("pause");
	p("\n");
	
	p("  - Diluida o concentrada:\n\n");
	p("   A menudo en el lenguaje informal, no t%ccnico, la concentraci%cn se describe de una manera cualitativa, con el uso de adjetivos como 'diluido' o 'd%cbil' para las disoluciones de concentraci%cn relativamente baja, y de otros como 'concentrado' o 'fuerte' para las disoluciones de concentraci%cn relativamente alta. En una mezcla, esos t%crminos relacionan la cantidad de una sustancia con la intensidad observable de los efectos o propiedades, como el color, sabor, olor, viscosidad, conductividad el%cctrica, etc, causados por esa sustancia. Por ejemplo, la concentraci%cn de un caf%c puede determinarse por la intensidad de su color y sabor, la de una limonada por su sabor y olor, la del agua azucarada por su sabor. Una regla pr%cctica es que cuanto m%cs concentrada es una disoluci%cn crom%ctica, generalmente m%cs intensamente coloreada est%c.\n\n",130,162,130,162,162,130,130,162,130,160,160,162,160,160,160);
	
	system("pause");
	p("\n");
	
	p("   Dependiendo de la proporci%cn de soluto con respecto al disolvente, una disoluci%cn puede estar diluida o concentrada:\n\n",162,162);
	p("    - Disoluci%cn diluida: es aquella en donde la cantidad de soluto est%c en una peque%ca proporci%cn en un volumen determinado.\n",162,160,164,162);
	p("    - Disoluci%cn concentrada: es la que tiene una cantidad considerable de soluto en un volumen determinado.\n\n",162);	
	p("   Las disoluciones saturadas y sobresaturadas pueden ser diluidas o concentradas dependiendo de su solubilidad, as%c una disoluci%cn de saturada de NaCl (sal com%cn) ser%c concentrada, pero una disoluci%cn saturada de CaCO3 (calcita o caliza) ser%c diluida porque es muy poco soluble.\n\n",161,162,163,160,162,160);
	p("    - Ejemplo de disoluci%cn diluida: az%ccar en el caf%c.\n",162,163,130);
	p("    - Ejemplo de disoluci%cn concentrada: la miel (los az%ccares de la misma en el agua).\n\n",162,163);
	
	system("pause");
	p("\n");
	
	p("  - Insaturada, saturada y sobresaturada:\n\n");
	p("   La concentraci%cn de una disoluci%cn puede clasificarse, en t%crminos de la solubilidad. Dependiendo de si el soluto est%c disuelto en el disolvente en la m%cxima cantidad posible, o menor, o mayor a esta cantidad, para una temperatura y presi%cn dados:\n\n",162,162,130,160,160,162);
	p("    - Disoluci%cn insaturada: Es la disoluci%cn en la cual el soluto no llega a su concentraci%cn m%cxima que puede diluir.\n",162,162,162,160);
	p("    - Disoluci%cn saturada: En ellas existe un equilibrio entre el soluto y el disolvente.\n",162);
	p("    - Disoluci%cn sobresaturada: tiene m%cs soluto que el m%cximo permitido en una disoluci%cn saturada. Cuando se calienta una disoluci%cn saturada, se le puede disolver una mayor cantidad de soluto. Si esta disoluci%cn se enfr%ca lentamente, puede mantener disuelto este soluto en exceso si no se le perturba. Sin embargo, la disoluci%cn sobresaturada es inestable, y con cualquier perturbaci%cn, como por ejemplo, un movimiento brusco, o golpes suaves en el recipiente que la contiene, el soluto en exceso inmediatamente se precipitar%c, quedando entonces como una disoluci%cn saturada.\n\n",162,160,160,162,162,162,161,162,162,160,162);
	
	fprintf(archivo,"Formas de expresar la concentraci�n:\n");
	fprintf(archivo,"====================================\n\n");
	fprintf(archivo,"Los t�rminos cuantitativos son cuando la concentraci�n se expresa cient�ficamente de una manera num�rica muy exacta y precisa. Algunas de estas formas cuantitativas de medir la concentraci�n son los porcentajes del soluto, la molaridad, la normalidad, y partes por mill�n, entre otras. Estas formas cuantitativas son las usadas tanto en la industria para la elaboraci�n de productos como tambi�n en la investigaci�n cient�fica.\n\n");
	fprintf(archivo," - Concentraci�n en t�rminos cualitativos:\n");
	fprintf(archivo," -----------------------------------------\n\n");
	fprintf(archivo," La concentraci�n de las disoluciones en t�rminos cualitativos, tambi�n llamados emp�ricos, no toma en cuenta cuantitativamente (num�ricamente) la cantidad exacta de soluto y disolvente presentes, y dependiendo de su proporci�n la concentraci�n se clasifica como sigue:\n\n");
	fprintf(archivo,"  - Diluida o concentrada:\n\n");
	fprintf(archivo,"   A menudo en el lenguaje informal, no t�cnico, la concentraci�n se describe de una manera cualitativa, con el uso de adjetivos como 'diluido' o 'd�bil' para las disoluciones de concentraci�n relativamente baja, y de otros como 'concentrado' o 'fuerte' para las disoluciones de concentraci�n relativamente alta. En una mezcla, esos t�rminos relacionan la cantidad de una sustancia con la intensidad observable de los efectos o propiedades, como el color, sabor, olor, viscosidad, conductividad el�ctrica, etc, causados por esa sustancia. Por ejemplo, la concentraci�n de un caf� puede determinarse por la intensidad de su color y sabor, la de una limonada por su sabor y olor, la del agua azucarada por su sabor. Una regla pr�ctica es que cuanto m�s concentrada es una disoluci�n crom�tica, generalmente m�s intensamente coloreada est�.\n\n");
	fprintf(archivo,"   Dependiendo de la proporci�n de soluto con respecto al disolvente, una disoluci�n puede estar diluida o concentrada:\n\n");
	fprintf(archivo,"    - Disoluci�n diluida: es aquella en donde la cantidad de soluto est� en una peque�a proporci�n en un volumen determinado.\n");
	fprintf(archivo,"    - Disoluci�n concentrada: es la que tiene una cantidad considerable de soluto en un volumen determinado.\n\n");
	fprintf(archivo,"   Las disoluciones saturadas y sobresaturadas pueden ser diluidas o concentradas dependiendo de su solubilidad, as� una disoluci�n de saturada de NaCl (sal com�n) ser� concentrada, pero una disoluci�n saturada de CaCO3 (calcita o caliza) ser� diluida porque es muy poco soluble.\n\n");
	fprintf(archivo,"    - Ejemplo de disoluci�n diluida: az�car en el caf�.\n");
	fprintf(archivo,"    - Ejemplo de disoluci�n concentrada: la miel (los az�cares de la misma en el agua).\n\n");
	fprintf(archivo,"  - Insaturada, saturada y sobresaturada:\n\n");
	fprintf(archivo,"   La concentraci�n de una disoluci�n puede clasificarse, en t�rminos de la solubilidad. Dependiendo de si el soluto est� disuelto en el disolvente en la m�xima cantidad posible, o menor, o mayor a esta cantidad, para una temperatura y presi�n dados:\n\n");
	fprintf(archivo,"    - Disoluci�n insaturada: Es la disoluci�n en la cual el soluto no llega a su concentraci�n m�xima que puede diluir.\n");
	fprintf(archivo,"    - Disoluci�n saturada: En ellas existe un equilibrio entre el soluto y el disolvente.\n");
	fprintf(archivo,"    - Disoluci�n sobresaturada: tiene m�s soluto que el m�ximo permitido en una disoluci�n saturada. Cuando se calienta una disoluci�n saturada, se le puede disolver una mayor cantidad de soluto. Si esta disoluci�n se enfr�a lentamente, puede mantener disuelto este soluto en exceso si no se le perturba. Sin embargo, la disoluci�n sobresaturada es inestable, y con cualquier perturbaci�n, como por ejemplo, un movimiento brusco, o golpes suaves en el recipiente que la contiene, el soluto en exceso inmediatamente se precipitar�, quedando entonces como una disoluci�n saturada.\n\n");
	
	fclose(archivo);
}
