void procom() {
	FILE *archivo;
	archivo = fopen("Propiedades de los compuestos como consecuencia del enlace. S�lidos covalentes, s�lidos at�micos, s�lidos i�nicos y s�lidos met�licos.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Propiedades de los compuestos como consecuencia del enlace. S%clidos covalentes, s%clidos at%cmicos, s%clidos i%cnicos y s%clidos met%clicos:\n",162,162,162,162,162,162,160);
	p("======================================================================================================================================\n\n");
	p("Los s%clidos pueden ser clasificados de acuerdo a la naturaleza del enlace entre sus componentes at%cmicos o moleculares. La clasificaci%cn tradicional distingue cuatro tipos de enlace:\n\n",162,162,162);
	p(" - Enlace covalente.\n");
	p(" - Enlace i%cnico.\n",162);
	p(" - Enlace met%clico.\n",160);
	p(" - Enlace intermolecular d%cbil.\n\n",130);
	
	system("pause");
	p("\n");
	
	p("Los miembros t%cpicos de estas clases tienen distribuciones electr%cnicas distintivas, as%c como propiedades termodin%cmicas, electr%cnicas y mec%cnicas tambi%cn distintivas. En particular, las energ%cas de enlace de estas interacciones var%can ampliamente. Sin embargo, el enlace en s%clidos puede ser de tipos mezclados o intermedios, de ah%c que no todos los s%clidos tienen las propiedades t%cpicas de una clase en particular, y algunos pueden ser descritos como formas intermedias.\n\n",161,162,161,160,162,160,130,161,161,162,161,162,161);
	p("- Clases b%csicas de s%clidos:\n",160,162);
	p("----------------------------\n\n");
	p(" - S%clidos de red covalente:\n",162);
	p(" Un s%clido de red covalente consiste en un conjunto de %ctomos mantenidos juntos por una red de enlaces covalentes (pares de electrones compartidos entre %ctomos de similar electronegatividad), y de ah%c que puedan ser considerados como una sola gran mol%ccula. El ejemplo cl%csico es el diamante; otros ejemplos incluyen el silicio, el cuarzo y el grafito.\n\n",162,160,160,161,130,160);
	p(" T%cpicamente, los s%clidos de red covalente tienen una gran fuerza, un gran m%cdulo el%cstico, y un elevado punto de fusi%cn. Su fuerza, rigidez, y alto punto de fusi%cn son consecuencia de la fuerza y rigidez del enlace covalente que los mantiene unidos. Tambi%cn son caracter%csticamente quebradizos, debido a que la naturaleza direccional de los enlaces covalentes resiste fuertemente los movimientos asociados con el flujo pl%cstico, y son, en efecto, rotos cuando ocurre dicho tipo de movimientos. Esta propiedad resulta en la fragilidad, por razones estudiadas en el campo de la mec%cnica de fractura. Los s%clidos de red covalente var%can en su comportamiento desde aislantes hasta semiconductores, dependiendo del tama%co de la banda prohibida del material. en estado s%clido los covalentes conducen la electricidad.\n\n",161,162,162,160,162,162,130,161,160,160,162,161,164,162);
	
	system("pause");
	p("\n");
	
	p(" - S%clidos i%cnicos:\n",162,162);
	p(" Un s%clido i%cnico est%cndar consiste en un conjunto de aniones y cationes que se mantienen juntos por enlaces i%cnicos, esto es, por la atracci%cn electrost%ctica de cargas opuestas (el resultado de la transferencia de electrones del %ctomo de menor electronegatividad al de mayor electronegatividad). Entre los s%clidos i%cnicos est%cn los compuestos formados por metales alcalinos y metales alcalinot%crreos, en combinaci%cn con hal%cgenos; un ejemplo cl%csico es la sal de mesa, cloruro de sodio.\n\n",162,162,160,162,162,160,160,162,162,160,130,162,162,160);
	p(" T%cpicamente, los s%clidos i%cnicos son de una fuerza intermedia, y son extremadamente quebradizos. Los puntos de fusi%cn son moderadamente altos, pero algunas combinaciones de cationes y aniones moleculares producen un l%cquido i%cnico con un punto de fusi%cn inferior a la temperatura ambiental. En todos los casos, las presiones de vapor son extraordinariamente bajas; esto es consecuencia de la gran energ%ca requerida para mover una carga (o par de cargas) de un medio i%cnico hacia el espacio libre. Los s%clidos i%cnicos tienen bandas prohibidas muy grandes, de ah%c que sean aislantes.\n\n",161,162,162,162,161,162,162,161,162,162,162,161);
	
	system("pause");
	p("\n");
	
	p(" - S%clidos met%clicos:\n",162,160);
	p(" Los s%clidos met%clicos se mantienen unidos por una alta densidad de electrones deslocalizados, compartidos, lo que resulta en un 'enlace met%clico'. Los ejemplos cl%csicos son los metales tales como el cobre y el aluminio, pero algunos materiales son metales en un sentido electr%cnico, pero tienen un enlace met%clico despreciable en un sentido mec%cnico o termodin%cmico.\n\n",162,160,160,160,162,160,160,160);
	p(" Los s%clidos con enlace met%clico puro son d%cctiles y, en su forma pura, tienen una resistencia baja; sus puntos de fusi%cn son variables (dependiendo del metal, el mercurio se funde a -39 %cC). Estas propiedades son consecuencia de la naturaleza no direccional y no polar del enlace met%clico, en el que los planos de %ctomos pueden deslizarse uno sobre otro, sin perturbar las interacciones con el mar circundante de electrones deslocalizados. La mayor fuerza puede ser debida a la interferencia con las dislocaciones que median en las transformaciones pl%csticas. M%cs a%cn, algunos metales de transici%cn exhiben enlace direccional, adem%cs de enlace met%clico; esto incrementa los esfuerzos cortantes y reduce la ductilidad. Los s%clidos met%clicos no tienen, por definici%cn, banda prohibida en el nivel de Fermi, de ah%c que sean conductores.\n\n",162,160,162,162,167,160,160,160,106,163,162,160,160,162,160,162,161);
	
	system("pause");
	p("\n");
	
	p(" - S%clidos moleculares:\n",162);
	p(" Un s%clido molecular cl%csico consiste de peque%cas mol%cculas covalentes no polares, y es mantenido junto por fuerzas de dispersi%cn de London; un ejemplo cl%csico es la cera de parafina. Estas fuerzas son d%cbiles, y resultan en unas energ%cas de enlace entre pares en el orden de 1/100 de los enlaces covalentes, i%cnicos, y met%clicos. Las energ%cas de enlace tienden a incrementarse con el incremento del tama%co molecular y la polaridad.\n\n",162,160,164,130,162,160,130,161,162,160,161,164);
	
	fprintf(archivo,"Propiedades de los compuestos como consecuencia del enlace. S�lidos covalentes, s�lidos at�micos, s�lidos i�nicos y s�lidos met�licos:\n");
	fprintf(archivo,"======================================================================================================================================\n\n");
	fprintf(archivo,"Los s�lidos pueden ser clasificados de acuerdo a la naturaleza del enlace entre sus componentes at�micos o moleculares. La clasificaci�n tradicional distingue cuatro tipos de enlace:\n\n");
	fprintf(archivo," - Enlace covalente.\n");
	fprintf(archivo," - Enlace i�nico.\n");
	fprintf(archivo," - Enlace met�lico.\n");
	fprintf(archivo," - Enlace intermolecular d�bil.\n\n");
	fprintf(archivo,"Los miembros t�picos de estas clases tienen distribuciones electr�nicas distintivas, as� como propiedades termodin�micas, electr�nicas y mec�nicas tambi�n distintivas. En particular, las energ�as de enlace de estas interacciones var�an ampliamente. Sin embargo, el enlace en s�lidos puede ser de tipos mezclados o intermedios, de ah� que no todos los s�lidos tienen las propiedades t�picas de una clase en particular, y algunos pueden ser descritos como formas intermedias.\n\n");
	fprintf(archivo,"- Clases b�sicas de s�lidos:\n");
	fprintf(archivo,"----------------------------\n\n");
	fprintf(archivo," - S�lidos de red covalente:\n");
	fprintf(archivo," Un s�lido de red covalente consiste en un conjunto de �tomos mantenidos juntos por una red de enlaces covalentes (pares de electrones compartidos entre �tomos de similar electronegatividad), y de ah� que puedan ser considerados como una sola gran mol�cula. El ejemplo cl�sico es el diamante; otros ejemplos incluyen el silicio, el cuarzo y el grafito.\n\n");
	fprintf(archivo," T�picamente, los s�lidos de red covalente tienen una gran fuerza, un gran m�dulo el�stico, y un elevado punto de fusi�n. Su fuerza, rigidez, y alto punto de fusi�n son consecuencia de la fuerza y rigidez del enlace covalente que los mantiene unidos. Tambi�n son caracter�sticamente quebradizos, debido a que la naturaleza direccional de los enlaces covalentes resiste fuertemente los movimientos asociados con el flujo pl�stico, y son, en efecto, rotos cuando ocurre dicho tipo de movimientos. Esta propiedad resulta en la fragilidad, por razones estudiadas en el campo de la mec�nica de fractura. Los s�lidos de red covalente var�an en su comportamiento desde aislantes hasta semiconductores, dependiendo del tama�o de la banda prohibida del material. en estado s�lido los covalentes conducen la electricidad.\n\n");
	fprintf(archivo," - S�lidos i�nicos:\n");
	fprintf(archivo," Un s�lido i�nico est�ndar consiste en un conjunto de aniones y cationes que se mantienen juntos por enlaces i�nicos, esto es, por la atracci�n electrost�tica de cargas opuestas (el resultado de la transferencia de electrones del �tomo de menor electronegatividad al de mayor electronegatividad). Entre los s�lidos i�nicos est�n los compuestos formados por metales alcalinos y metales alcalinot�rreos, en combinaci�n con hal�genos; un ejemplo cl�sico es la sal de mesa, cloruro de sodio.\n\n");
	fprintf(archivo," T�picamente, los s�lidos i�nicos son de una fuerza intermedia, y son extremadamente quebradizos. Los puntos de fusi�n son moderadamente altos, pero algunas combinaciones de cationes y aniones moleculares producen un l�quido i�nico con un punto de fusi�n inferior a la temperatura ambiental. En todos los casos, las presiones de vapor son extraordinariamente bajas; esto es consecuencia de la gran energ�a requerida para mover una carga (o par de cargas) de un medio i�nico hacia el espacio libre. Los s�lidos i�nicos tienen bandas prohibidas muy grandes, de ah� que sean aislantes.\n\n");
	fprintf(archivo," - S�lidos met�licos:\n");
	fprintf(archivo," Los s�lidos met�licos se mantienen unidos por una alta densidad de electrones deslocalizados, compartidos, lo que resulta en un 'enlace met�lico'. Los ejemplos cl�sicos son los metales tales como el cobre y el aluminio, pero algunos materiales son metales en un sentido electr�nico, pero tienen un enlace met�lico despreciable en un sentido mec�nico o termodin�mico.\n\n");
	fprintf(archivo," Los s�lidos con enlace met�lico puro son d�ctiles y, en su forma pura, tienen una resistencia baja; sus puntos de fusi�n son variables (dependiendo del metal, el mercurio se funde a -39 �C). Estas propiedades son consecuencia de la naturaleza no direccional y no polar del enlace met�lico, en el que los planos de �tomos pueden deslizarse uno sobre otro, sin perturbar las interacciones con el mar circundante de electrones deslocalizados. La mayor fuerza puede ser debida a la interferencia con las dislocaciones que median en las transformaciones pl�sticas. M�s a�n, algunos metales de transici�n exhiben enlace direccional, adem�s de enlace met�lico; esto incrementa los esfuerzos cortantes y reduce la ductilidad. Los s�lidos met�licos no tienen, por definici�n, banda prohibida en el nivel de Fermi, de ah� que sean conductores.\n\n");
	fprintf(archivo," - S�lidos moleculares:\n");
	fprintf(archivo," Un s�lido molecular cl�sico consiste de peque�as mol�culas covalentes no polares, y es mantenido junto por fuerzas de dispersi�n de London; un ejemplo cl�sico es la cera de parafina. Estas fuerzas son d�biles, y resultan en unas energ�as de enlace entre pares en el orden de 1/100 de los enlaces covalentes, i�nicos, y met�licos. Las energ�as de enlace tienden a incrementarse con el incremento del tama�o molecular y la polaridad.\n\n");
	
	fclose(archivo);
}
