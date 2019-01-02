void comcen() {
	FILE *archivo;
	archivo = fopen("Composici�n centesimal. F�rmulas emp�ricas y moleculares.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Composici%cn centesimal. F%crmulas emp%cricas y moleculares:\n",162,162,161);
	p("=========================================================\n\n");
	p("La f%crmula qu%cmica es la representaci%cn de los elementos que forman un compuesto y la proporci%cn en que se encuentran, o del n%cmero de %ctomos que forman una mol%ccula. Tambi%cn puede darnos informaci%cn adicional como la manera en que se unen dichos %ctomos mediante enlaces qu%cmicos e incluso su distribuci%cn en el espacio. Para nombrarlas, se emplean las reglas de la nomenclatura o formulaci%cn qu%cmica.\n\n",162,161,162,162,163,160,130,130,162,160,161,162,162,161);
	p("La formula qu%cmica permite determinar la composici%cn porcentual de cada elemento en una sustancia compuesta. Los porcentajes as%c obtenidos son una expresi%cn de la ley de la composici%cn definida.\n\n",161,162,161,162,162);
	p("Existen varios tipos de f%crmulas qu%cmicas:\n\n",162,161);
	
	system("pause");
	p("\n");
	
	p("- F%crmula emp%crica:\n",162,161);
	p("-------------------\n\n");
	p("La f%crmula emp%crica es una expresi%cn que representa la proporci%cn m%cs simple en la que est%cn presentes los %ctomos que forman un compuesto qu%cmico. Es por tanto la representaci%cn mas sencilla de un compuesto. Por ello, a veces, se le llama f%crmula m%cnima.\n\n",162,161,162,162,160,160,160,161,162,162,161);
	p("En compuestos covalentes, se obtiene simplificando los sub%cndices de la f%crmula, si ello es posible, dividi%cndolos por un factor com%cn. As%c, la f%crmula emp%crica de la glucosa (C6H12O6) es CH2O, lo cual indica que por cada %ctomo de C, hay dos %ctomos de H y un %ctomo de O. Los sub%cndices siempre son n%cmeros enteros y si son iguales a 1, no se escriben.\n\n",161,162,130,163,161,162,161,160,160,160,161,163);
	p("En compuestos i%cnicos la f%crmula emp%crica es la %cnica que podemos conocer, e indica la proporci%cn entre el n%cmero de iones de cada clase en la red i%cnica. En el hidruro de magnesio, hay dos iones hidruro por cada i%cn magnesio, luego su f%crmula emp%crica es MgH2.\n\n",162,162,161,163,162,163,162,162,162,161);
	p("En compuestos no-estequiom%ctricos, como ciertos minerales, los sub%cndices pueden ser n%cmeros decimales. As%c, el %cxido de hierro (II) tiene una f%crmula emp%crica que var%ca entre Fe0,84O y Fe0,95O, lo que indica la presencia de huecos, impurezas y defectos en la red.\n\n",130,161,163,161,162,162,161,161);
	
	system("pause");
	p("\n");
	
	p("- F%crmula molecular:\n",162);
	p("--------------------\n\n");
	p("La f%crmula molecular, indica el tipo de %ctomos presentes en un compuesto molecular, y el n%cmero de %ctomos de cada clase. Solo tiene sentido hablar de f%crmula molecular en compuestos covalentes. As%c la f%crmula molecular de la glucosa es C6H12O6, lo cual indica que cada mol%ccula est%c formada por 6 %ctomos de C, 12 %ctomos de H y 6 %ctomos de O, unidos siempre de una determinada manera.\n\n",162,160,163,160,162,161,162,130,160,160,160,160);
	
	system("pause");
	p("\n");
	
	p("- F%crmula estructural:\n",162);
	p("----------------------\n\n");
	p(" - Modelo de esqueleto, de armaz%cn: no se dibujan los %ctomos de C e H.\n",162,160);
	p(" - Modelo de bolas y barras, o de bolas y varillas.\n");
	p(" - Modelo de bolas, compacto o espacial s%clido.\n",162);
	p(" - Modelos poli%cdricos: los %ctomos se representan por tetraedros y octaedros. Que se unen por sus v%crtices y permiten ciertos giros o torsiones.\n\n",130,160,130);
	p("La f%crmula estructural es similar a las anteriores pero se%calando la geometr%ca espacial de la mol%ccula mediante la indicaci%cn de distancias, %cngulos o el empleo de perspectivas en diagramas bi o tridimensionales.\n\n",162,164,161,130,162,160);
	p("Tambi%cn hay diagramas 3D como la estructura o f%crmula de esqueleto (o de l%cneas y %cngulos).\n\n",130,162,161,160);
	
	fprintf(archivo,"Composici�n centesimal. F�rmulas emp�ricas y moleculares:\n");
	fprintf(archivo,"=========================================================\n\n");
	fprintf(archivo,"La f�rmula qu�mica es la representaci�n de los elementos que forman un compuesto y la proporci�n en que se encuentran, o del n�mero de �tomos que forman una mol�cula. Tambi�n puede darnos informaci�n adicional como la manera en que se unen dichos �tomos mediante enlaces qu�micos e incluso su distribuci�n en el espacio. Para nombrarlas, se emplean las reglas de la nomenclatura o formulaci�n qu�mica.\n\n");
	fprintf(archivo,"La formula qu�mica permite determinar la composici�n porcentual de cada elemento en una sustancia compuesta. Los porcentajes as� obtenidos son una expresi�n de la ley de la composici�n definida.\n\n");
	fprintf(archivo,"Existen varios tipos de f�rmulas qu�micas:\n\n");
	fprintf(archivo,"- F�rmula emp�rica:\n");
	fprintf(archivo,"-------------------\n\n");
	fprintf(archivo,"La f�rmula emp�rica es una expresi�n que representa la proporci�n m�s simple en la que est�n presentes los �tomos que forman un compuesto qu�mico. Es por tanto la representaci�n mas sencilla de un compuesto. Por ello, a veces, se le llama f�rmula m�nima.\n\n");
	fprintf(archivo,"En compuestos covalentes, se obtiene simplificando los sub�ndices de la f�rmula, si ello es posible, dividi�ndolos por un factor com�n. As�, la f�rmula emp�rica de la glucosa (C6H12O6) es CH2O, lo cual indica que por cada �tomo de C, hay dos �tomos de H y un �tomo de O. Los sub�ndices siempre son n�meros enteros y si son iguales a 1, no se escriben.\n\n");
	fprintf(archivo,"En compuestos i�nicos la f�rmula emp�rica es la �nica que podemos conocer, e indica la proporci�n entre el n�mero de iones de cada clase en la red i�nica. En el hidruro de magnesio, hay dos iones hidruro por cada i�n magnesio, luego su f�rmula emp�rica es MgH2.\n\n");
	fprintf(archivo,"En compuestos no-estequiom�tricos, como ciertos minerales, los sub�ndices pueden ser n�meros decimales. As�, el �xido de hierro (II) tiene una f�rmula emp�rica que var�a entre Fe0,84O y Fe0,95O, lo que indica la presencia de huecos, impurezas y defectos en la red.\n\n");
	fprintf(archivo,"- F�rmula molecular:\n");
	fprintf(archivo,"--------------------\n\n");
	fprintf(archivo,"La f�rmula molecular, indica el tipo de �tomos presentes en un compuesto molecular, y el n�mero de �tomos de cada clase. solo tiene sentido hablar de f�rmula molecular en compuestos covalentes. As� la f�rmula molecular de la glucosa es C6H12O6, lo cual indica que cada mol�cula est� formada por 6 �tomos de C, 12 �tomos de H y 6 �tomos de O, unidos siempre de una determinada manera.\n\n");
	fprintf(archivo,"- F�rmula estructural:\n");
	fprintf(archivo,"----------------------\n\n");
	fprintf(archivo," - Modelo de esqueleto, de armaz�n: no se dibujan los �tomos de C e H.\n");
	fprintf(archivo," - Modelo de bolas y barras, o de bolas y varillas.\n");
	fprintf(archivo," - Modelo de bolas, compacto o espacial s�lido.\n");
	fprintf(archivo," - Modelos poli�dricos: los �tomos se representan por tetraedros y octaedros. Que se unen por sus v�rtices y permiten ciertos giros o torsiones.\n\n");
	fprintf(archivo,"La f�rmula estructural es similar a las anteriores pero se�alando la geometr�a espacial de la mol�cula mediante la indicaci�n de distancias, �ngulos o el empleo de perspectivas en diagramas bi o tridimensionales.\n\n");
	fprintf(archivo,"Tambi�n hay diagramas 3D como la estructura o f�rmula de esqueleto (o de l�neas y �ngulos).\n\n");
	
	fclose(archivo);
}
