void clafuo() {
	FILE *archivo;
	archivo = fopen("Clasificaci�n de las funciones org�nicas.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Tambi%cn conocidos como Grupos funcionales org%cnicos. Son %ctomos o grupos de %ctomos que presentan propiedades comunes a todos los compuestos que la integran. El resto de la mol%ccula, diferente al grupo funcional, se llama radical, representado con R, R', R''.\n\n",130,160,160,160,130);
	p("En otras palabras, un grupo funcional es un %ctomo o grupo de %ctomos que le confieren caracter%csticas f%csicas y qu%cmicas a un compuesto que lo diferencia de los otros.\n\n",160,160,161,161,161);
	p("Normalmente, la parte activa del compuesto es el grupo funcional, el cual permite distinguir cualidades comunes a ellos, mientras que los radicales son la parte inactiva de la sustancia.\n\n");
	
	system("pause");
	p("\n");
	
	p("===================================================\n");
	p("=                   =           =                 =\n");
	p("= NOMBRE            = PREFIJO   = SUFIJO          =\n");
	p("=                   =           =                 =\n");
	p("===================================================\n");
	p("= %ccido carboxilico = %ccido     = oico            =\n",160,160);
	p("===================================================\n");
	p("= Anh%cdrido         = anh%cdrido = oico            =\n",161,161);
	p("===================================================\n");
	p("= Haluro de %ccido   = Haluro de = oico            =\n",160);
	p("===================================================\n");
	p("= %cster             =           = oato de alquilo =\n",130);
	p("===================================================\n");
	p("= Amida             =           = amida           =\n");
	p("===================================================\n");
	p("= Nitrilo           =           = nitrilo         =\n");
	p("===================================================\n");
	p("= Aldeh%cdo          =           = al              =\n",161);
	p("===================================================\n");
	p("= Cetona            =           = ona             =\n");
	p("===================================================\n");
	p("= Alcohol           =           = ol              =\n");
	p("===================================================\n");
	p("= Mercaptano        =           = tiol            =\n");
	p("===================================================\n");
	
	system("pause");
	p("\n");
	
	p("= Amina             =           = amina           =\n");
	p("===================================================\n");
	p("= %cter              =           = %cter (oxi)      =\n",130,130);
	p("===================================================\n");
	p("= Alquinos          =           = ino             =\n");
	p("===================================================\n");
	p("= Alquenos          =           = eno             =\n");
	p("===================================================\n");
	p("= Alcanos           =           = ano             =\n");
	p("===================================================\n\n");	
	
	fprintf(archivo,"Tambi�n conocidos como Grupos funcionales org�nicos. Son �tomos o grupos de �tomos que presentan propiedades comunes a todos los compuestos que la integran. El resto de la mol�cula, diferente al grupo funcional, se llama radical, representado con R, R', R''.\n\n");
	fprintf(archivo,"En otras palabras, un grupo funcional es un �tomo o grupo de �tomos que le confieren caracter�sticas f�sicas y qu�micas a un compuesto que lo diferencia de los otros.\n\n");
	fprintf(archivo,"Normalmente, la parte activa del compuesto es el grupo funcional, el cual permite distinguir cualidades comunes a ellos, mientras que los radicales son la parte inactiva de la sustancia.\n\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"=                   =           =                 =\n");
	fprintf(archivo,"= NOMBRE            = PREFIJO   = SUFIJO          =\n");
	fprintf(archivo,"=                   =           =                 =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= �cido carboxilico = �cido     = oico            =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= Anh�drido         = anh�drido = oico            =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= Haluro de �cido   = Haluro de = oico            =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= �ster             =           = oato de alquilo =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= Amida             =           = amida           =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= Nitrilo           =           = nitrilo         =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= Aldeh�do          =           = al              =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= Cetona            =           = ona             =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= Alcohol           =           = ol              =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= Mercaptano        =           = tiol            =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= Amina             =           = amina           =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= �ter              =           = �ter (oxi)      =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= Alquinos          =           = ino             =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= Alquenos          =           = eno             =\n");
	fprintf(archivo,"===================================================\n");
	fprintf(archivo,"= Alcanos           =           = ano             =\n");
	fprintf(archivo,"===================================================\n");
	
	fclose(archivo);
}
