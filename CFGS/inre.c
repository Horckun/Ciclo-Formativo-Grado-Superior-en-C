void inre() {
	FILE *archivo;
	archivo = fopen("Introducci�n de las reglas de la IUPAC para la formulaci�n de los compuestos binarios m�s comunes.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Introducci%cn de las reglas de la IUPAC para la formulaci%cn de los compuestos binarios m%cs comunes. Nomenclatura y formulaci%cn IUPAC para compuestos inorg%cnicos sencillos:\n",162,162,160,162,160);
	p("==========================================================================================================================================================================\n\n");
	p("- Introducci%cn:\n",162);
	p("---------------\n\n");
	p("La IUPAC es el organismo internacional encargado de elaborar las normas y recomendaciones relativas a la nomenclatura en Qu%cmica.\n\n",161);
	p("En el caso concreto de la nomenclatura en Qu%cmica Inorg%cnica, estas recomendaciones est%cn recogidas en Nomenclatura de Qu%cmica Inorg%cnica. Recomendaciones IUPAC 2005 (Libro Rojo 2007).\n\n",161,160,160,161,160);
	
	system("pause");
	p("\n");
	
	p("- Objetivos de la nomenclatura qu%cmica:\n",161);
	p("---------------------------------------\n\n");
	p("El fin principal de la nomenclatura qu%cmica es proporcionar una metodolog%ca para asignar nombres y f%crmulas a las sustancias qu%cmicas, de manera que puedan identificarse sin ambig�edad.\n\n",161,161,162,161,129);
	p("Aunque no debemos ser muy estrictos en cuanto a exigir un nombre %cnico para cada sustancia, el n%cmero de nombres aceptables para cada sustancia debe minimizarse.\n\n",163,163);
	p("Un sistema %ctil de nomenclatura debe ser identificable, preciso y general. Por tanto, debe rechazarse el uso de nombres locales y de abreviaturas en el lenguaje cient%cfico formal.\n\n",163,161);
	
	system("pause");
	p("\n");
	
	p("- F%crmulas de los compuestos:\n",162);
	p("-----------------------------\n\n");
	p(" - Criterios para la escritura de los s%cmbolos:\n\n",161);
	p("  - Electronegatividad:\n\n");
	p("  Los s%cmbolos se escriben seg%cn las electronegatividades relativas de los elementos representados, de manera que se coloca en primer lugar el elemento menos electronegativo y a su derecha el resto de elementos en orden creciente de electronegatividad.\n\n",161,163);
	p("  Por convenio, el elemento menos electronegativo es el m%cs pr%cximo al final en la tabla.\n\n",160,162);
	p("  - Orden alfanum%crico:\n\n",130);
	p("   - S%cmbolos at%cmicos:\n\n",161,162);
	p("    - Los s%cmbolos de una sola letra anteceden siempre a los de dos letras con la misma letra inicial (B antes que Be).\n",161);
	p("    - Los s%cmbolos de dos letras se ordenan alfab%cticamente entre ellos (Ba precede a Be).\n\n",161,130);
	p("   - Agrupaciones at%cmicas:\n\n",162);
	p("    - Los s%cmbolos de dos letras se ordenan alfab%cticamente entre ellos (Ba precede a Be).\n",161,130);
	p("    - La ordenaci%cn se realiza de forma alfanum%crica, seg%cn el orden de los s%cmbolos at%cmicos y el de sus sub%cndices.\n\n",162,130,163,161,162,161);
	
	system("pause");
	p("\n");
	
	p("- M%ctodos de la nomenclatura inorg%cnica:\n",130,160);
	p("----------------------------------------\n\n");
	p("La denominaci%cn sistem%ctica de una sustancia inorg%cnica implica la construcci%cn de un nombre a partir de entidades que se manejan seg%cn procedimientos definidos que proporcionan informaci%cn sobre la composici%cn y/o estructura de la sustancia.\n\n",162,160,160,162,163,162,162);
	p("Estos procedimientos se conocen como Sistemas de Nomenclatura.\n\n");
	p("En Qu%cmica Inorg%cnica, los tres sistemas de nomenclatura m%cs importantes son:\n\n",161,160,160);
	p(" - Nomenclatura de sustituci%cn.\n",162);
	p(" - Nomenclatura de adici%cn.\n",162);
	p(" - Nomenclatura de composici%cn.\n\n",162);
	
	system("pause");
	p("\n");
	
	p(" - Nomenclatura de sustituci%cn.\n\n",162);
	p(" En la nomenclatura de sustituci%cn los nombres se basan en los de los hidruros progenitores en los que se ha realizado la sustituci%cn de %ctomos de hidr%cgeno por grupos sustituyentes.\n\n",162,162,160,162);
	
	system("pause");
	p("\n");
	
	p(" - Nomenclatura de adici%cn.\n\n",162);
	p(" La utilizaci%cn de este tipo de nomenclatura supone conocer la estructura de la mol%ccula y, por consiguiente, se desaconseja su utilizaci%cn en los estudios no universitarios. Opcionalmente se puede abordar la formulaci%cn de %ccidos inorg%cnicos de uso com%cn mediante este sistema de nomenclatura, como ejemplos ilustrativos de la sistem%ctica a seguir, en el segundo curso de Bachillerato.\n\n",162,130,162,162,160,160,163,160);
	
	system("pause");
	p("\n");
	
	p(" - Nomenclatura de composici%cn.\n\n",162);
	p(" En la nomenclatura de composici%cn la construcci%cn de un nombre est%c basada %cnicamente en la composici%cn de las sustancias o especies que se van a nombrar. Se trata de un nombre estequiom%ctrico que solamente refleja las proporciones de los constituyentes en la f%crmula emp%crica o en la f%crmula molecular.\n\n",162,162,160,163,162,130,162,161,162);
	p(" Este sistema de nomenclatura es el que debe prevalecer en los estudios no universitarios, al menos en el nivel de la ESO y con aportaciones de los otros dos sistemas en el nivel de Bachillerato.\n\n");
	
	system("pause");
	p("\n");
	
	p(" Las proporciones de los elementos constituyentes en los nombres estequiom%ctricos se unen a ellos sin espacios ni guiones. Estas proporciones pueden indicarse de tres maneras: mediante prefijos multiplicadores; n%cmeros de oxidaci%cn y n%cmeros de carga.\n\n",130,163,162,163);
	p("  - Prefijos multiplicadores.\n\n");
	p("   1 - (mono).\n");
	p("   2 - (di); (bis) para nombres compuestos.\n");
	p("   3 - (tri) (tris).\n");
	p("   4 - (tetra) (tetrakis).\n");
	p("   5 - (penta) (pentakis).\n");
	p("   6 - (hexa) (hexakis).\n\n");
	p("  Las vocales finales de los prefijos num%cricos no deben elidirse, con excepci%cn de �mon%cxido�.\n\n",130,162,162);
	
	system("pause");
	p("\n");
	
	p("  - N%cmero de oxidaci%cn.\n\n",163,162);
	p("  Se indica con un n%cmero romano encerrado entre par%cntesis que sigue inmediatamente al nombre del elemento al que se refiere, modificado si fuese necesario. El n%cmero de oxidaci%cn puede ser positivo, negativo o cero (0).\n\n",163,130,163);
	p("  El signo positivo no se usa nunca. Los n%cmeros de oxidaci%cn fraccionarios no se usan en nomenclatura.\n\n",163,162);
	
	system("pause");
	p("\n");
	
	p("  - N%cmero de carga.\n\n",163);
	p("  - El n%cmero de carga es un n%cmero cuya magnitud representa la carga i%cnica. Se escribe entre par%cntesis inmediatamente despu%cs del nombre de un i%cn y sin espacio entre ellos. La carga se escribe con n%cmeros ar%cbigos seguidos de su signo.\n\n",163,163,162,130,130,162,163,160);
	
	fprintf(archivo,"Introducci%cn de las reglas de la IUPAC para la formulaci�n de los compuestos binarios m�s comunes. Nomenclatura y formulaci�n IUPAC para compuestos inorg�nicos sencillos:\n");
	fprintf(archivo,"==========================================================================================================================================================================\n\n");
	fprintf(archivo,"- Introducci�n:\n");
	fprintf(archivo,"---------------\n\n");
	fprintf(archivo,"La IUPAC es el organismo internacional encargado de elaborar las normas y recomendaciones relativas a la nomenclatura en Qu�mica.\n\n");
	fprintf(archivo,"En el caso concreto de la nomenclatura en Qu�mica Inorg�nica, estas recomendaciones est�n recogidas en Nomenclatura de Qu�mica Inorg�nica. Recomendaciones IUPAC 2005 (Libro Rojo 2007).\n\n");
	fprintf(archivo,"- Objetivos de la nomenclatura qu�mica:\n");
	fprintf(archivo,"---------------------------------------\n\n");
	fprintf(archivo,"El fin principal de la nomenclatura qu�mica es proporcionar una metodolog�a para asignar nombres y f�rmulas a las sustancias qu�micas, de manera que puedan identificarse sin ambig�edad.\n\n");
	fprintf(archivo,"Aunque no debemos ser muy estrictos en cuanto a exigir un nombre �nico para cada sustancia, el n�mero de nombres aceptables para cada sustancia debe minimizarse.\n\n");
	fprintf(archivo,"Un sistema �til de nomenclatura debe ser identificable, preciso y general. Por tanto, debe rechazarse el uso de nombres locales y de abreviaturas en el lenguaje cient�fico formal.\n\n");
	fprintf(archivo,"- F�rmulas de los compuestos:\n");
	fprintf(archivo,"-----------------------------\n\n");
	fprintf(archivo," - Criterios para la escritura de los s�mbolos:\n\n");
	fprintf(archivo,"  - Electronegatividad:\n\n");
	fprintf(archivo,"  Los s�mbolos se escriben seg�n las electronegatividades relativas de los elementos representados, de manera que se coloca en primer lugar el elemento menos electronegativo y a su derecha el resto de elementos en orden creciente de electronegatividad.\n\n");
	fprintf(archivo,"  Por convenio, el elemento menos electronegativo es el m�s pr�ximo al final en la tabla.\n\n");
	fprintf(archivo,"  - Orden alfanum�rico:\n\n");
	fprintf(archivo,"   - S�mbolos at�micos:\n\n");
	fprintf(archivo,"    - Los s�mbolos de una sola letra anteceden siempre a los de dos letras con la misma letra inicial (B antes que Be).\n");
	fprintf(archivo,"    - Los s�mbolos de dos letras se ordenan alfab�ticamente entre ellos (Ba precede a Be).\n\n");
	fprintf(archivo,"   - Agrupaciones at�micas:\n\n");
	fprintf(archivo,"    - Los s�mbolos de dos letras se ordenan alfab�ticamente entre ellos (Ba precede a Be).\n");
	fprintf(archivo,"    - La ordenaci�n se realiza de forma alfanum�rica, seg�n el orden de los s�mbolos at�micos y el de sus sub�ndices.\n\n");
	fprintf(archivo,"- M�todos de la nomenclatura inorg�nica:\n");
	fprintf(archivo,"----------------------------------------\n\n");
	fprintf(archivo,"La denominaci�n sistem�tica de una sustancia inorg�nica implica la construcci�n de un nombre a partir de entidades que se manejan seg�n procedimientos definidos que proporcionan informaci�n sobre la composici�n y/o estructura de la sustancia.\n\n");
	fprintf(archivo,"Estos procedimientos se conocen como Sistemas de Nomenclatura.\n\n");
	fprintf(archivo,"En Qu�mica Inorg�nica, los tres sistemas de nomenclatura m�s importantes son:\n\n");
	fprintf(archivo," - Nomenclatura de sustituci�n.\n");
	fprintf(archivo," - Nomenclatura de adici�n.\n");
	fprintf(archivo," - Nomenclatura de composici�n.\n\n");
	fprintf(archivo," - Nomenclatura de sustituci�n.\n\n");
	fprintf(archivo," En la nomenclatura de sustituci�n los nombres se basan en los de los hidruros progenitores en los que se ha realizado la sustituci�n de �tomos de hidr�geno por grupos sustituyentes.\n\n");
	fprintf(archivo," - Nomenclatura de adici�n.\n\n");
	fprintf(archivo," La utilizaci�n de este tipo de nomenclatura supone conocer la estructura de la mol�cula y, por consiguiente, se desaconseja su utilizaci�n en los estudios no universitarios. Opcionalmente se puede abordar la formulaci�n de �cidos inorg�nicos de uso com�n mediante este sistema de nomenclatura, como ejemplos ilustrativos de la sistem�tica a seguir, en el segundo curso de Bachillerato.\n\n");
	fprintf(archivo," - Nomenclatura de composici�n.\n\n");
	fprintf(archivo," En la nomenclatura de composici�n la construcci�n de un nombre est� basada �nicamente en la composici�n de las sustancias o especies que se van a nombrar. Se trata de un nombre estequiom�trico que solamente refleja las proporciones de los constituyentes en la f�rmula emp�rica o en la f�rmula molecular.\n\n");
	fprintf(archivo," Este sistema de nomenclatura es el que debe prevalecer en los estudios no universitarios, al menos en el nivel de la ESO y con aportaciones de los otros dos sistemas en el nivel de Bachillerato.\n\n");
	fprintf(archivo," Las proporciones de los elementos constituyentes en los nombres estequiom�tricos se unen a ellos sin espacios ni guiones. Estas proporciones pueden indicarse de tres maneras: mediante prefijos multiplicadores; n�meros de oxidaci�n y n�meros de carga.\n\n");
	fprintf(archivo,"  - Prefijos multiplicadores.\n\n");
	fprintf(archivo,"   1 - (mono).\n");
	fprintf(archivo,"   2 - (di); (bis) para nombres compuestos.\n");
	fprintf(archivo,"   3 - (tri) (tris).\n");
	fprintf(archivo,"   4 - (tetra) (tetrakis).\n");
	fprintf(archivo,"   5 - (penta) (pentakis).\n");
	fprintf(archivo,"   6 - (hexa) (hexakis).\n\n");
	fprintf(archivo,"  Las vocales finales de los prefijos num�ricos no deben elidirse, con excepci�n de �mon�xido�.\n\n");
	fprintf(archivo,"  - N�mero de oxidaci�n.\n\n");
	fprintf(archivo,"  Se indica con un n�mero romano encerrado entre par�ntesis que sigue inmediatamente al nombre del elemento al que se refiere, modificado si fuese necesario. El n�mero de oxidaci�n puede ser positivo, negativo o cero (0).\n\n");
	fprintf(archivo,"  El signo positivo no se usa nunca. Los n�meros de oxidaci�n fraccionarios no se usan en nomenclatura.\n\n");
	fprintf(archivo,"  - N�mero de carga.\n\n");
	fprintf(archivo,"  - El n�mero de carga es un n�mero cuya magnitud representa la carga i�nica. Se escribe entre par�ntesis inmediatamente despu�s del nombre de un i�n y sin espacio entre ellos. La carga se escribe con n�meros ar�bigos seguidos de su signo.\n\n");
	
	fclose(archivo);
}
