void alfoex() {
	FILE *archivo;
	archivo = fopen("Algunas formas de expresar la concentración de las disoluciones. Molaridad y tanto por cien en masa.doc","w");
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
	
	fprintf(archivo,"Formas de expresar la concentración:\n");
	fprintf(archivo,"====================================\n\n");
	fprintf(archivo,"Los términos cuantitativos son cuando la concentración se expresa científicamente de una manera numérica muy exacta y precisa. Algunas de estas formas cuantitativas de medir la concentración son los porcentajes del soluto, la molaridad, la normalidad, y partes por millón, entre otras. Estas formas cuantitativas son las usadas tanto en la industria para la elaboración de productos como también en la investigación científica.\n\n");
	fprintf(archivo," - Concentración en términos cualitativos:\n");
	fprintf(archivo," -----------------------------------------\n\n");
	fprintf(archivo," La concentración de las disoluciones en términos cualitativos, también llamados empíricos, no toma en cuenta cuantitativamente (numéricamente) la cantidad exacta de soluto y disolvente presentes, y dependiendo de su proporción la concentración se clasifica como sigue:\n\n");
	fprintf(archivo,"  - Diluida o concentrada:\n\n");
	fprintf(archivo,"   A menudo en el lenguaje informal, no técnico, la concentración se describe de una manera cualitativa, con el uso de adjetivos como 'diluido' o 'débil' para las disoluciones de concentración relativamente baja, y de otros como 'concentrado' o 'fuerte' para las disoluciones de concentración relativamente alta. En una mezcla, esos términos relacionan la cantidad de una sustancia con la intensidad observable de los efectos o propiedades, como el color, sabor, olor, viscosidad, conductividad eléctrica, etc, causados por esa sustancia. Por ejemplo, la concentración de un café puede determinarse por la intensidad de su color y sabor, la de una limonada por su sabor y olor, la del agua azucarada por su sabor. Una regla práctica es que cuanto más concentrada es una disolución cromática, generalmente más intensamente coloreada está.\n\n");
	fprintf(archivo,"   Dependiendo de la proporción de soluto con respecto al disolvente, una disolución puede estar diluida o concentrada:\n\n");
	fprintf(archivo,"    - Disolución diluida: es aquella en donde la cantidad de soluto está en una pequeña proporción en un volumen determinado.\n");
	fprintf(archivo,"    - Disolución concentrada: es la que tiene una cantidad considerable de soluto en un volumen determinado.\n\n");
	fprintf(archivo,"   Las disoluciones saturadas y sobresaturadas pueden ser diluidas o concentradas dependiendo de su solubilidad, así una disolución de saturada de NaCl (sal común) será concentrada, pero una disolución saturada de CaCO3 (calcita o caliza) será diluida porque es muy poco soluble.\n\n");
	fprintf(archivo,"    - Ejemplo de disolución diluida: azúcar en el café.\n");
	fprintf(archivo,"    - Ejemplo de disolución concentrada: la miel (los azúcares de la misma en el agua).\n\n");
	fprintf(archivo,"  - Insaturada, saturada y sobresaturada:\n\n");
	fprintf(archivo,"   La concentración de una disolución puede clasificarse, en términos de la solubilidad. Dependiendo de si el soluto está disuelto en el disolvente en la máxima cantidad posible, o menor, o mayor a esta cantidad, para una temperatura y presión dados:\n\n");
	fprintf(archivo,"    - Disolución insaturada: Es la disolución en la cual el soluto no llega a su concentración máxima que puede diluir.\n");
	fprintf(archivo,"    - Disolución saturada: En ellas existe un equilibrio entre el soluto y el disolvente.\n");
	fprintf(archivo,"    - Disolución sobresaturada: tiene más soluto que el máximo permitido en una disolución saturada. Cuando se calienta una disolución saturada, se le puede disolver una mayor cantidad de soluto. Si esta disolución se enfría lentamente, puede mantener disuelto este soluto en exceso si no se le perturba. Sin embargo, la disolución sobresaturada es inestable, y con cualquier perturbación, como por ejemplo, un movimiento brusco, o golpes suaves en el recipiente que la contiene, el soluto en exceso inmediatamente se precipitará, quedando entonces como una disolución saturada.\n\n");
	
	fclose(archivo);
}
