void procom() {
	FILE *archivo;
	archivo = fopen("Propiedades de los compuestos como consecuencia del enlace. Sólidos covalentes, sólidos atómicos, sólidos iónicos y sólidos metálicos.doc","w");
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
	
	fprintf(archivo,"Propiedades de los compuestos como consecuencia del enlace. Sólidos covalentes, sólidos atómicos, sólidos iónicos y sólidos metálicos:\n");
	fprintf(archivo,"======================================================================================================================================\n\n");
	fprintf(archivo,"Los sólidos pueden ser clasificados de acuerdo a la naturaleza del enlace entre sus componentes atómicos o moleculares. La clasificación tradicional distingue cuatro tipos de enlace:\n\n");
	fprintf(archivo," - Enlace covalente.\n");
	fprintf(archivo," - Enlace iónico.\n");
	fprintf(archivo," - Enlace metálico.\n");
	fprintf(archivo," - Enlace intermolecular débil.\n\n");
	fprintf(archivo,"Los miembros típicos de estas clases tienen distribuciones electrónicas distintivas, así como propiedades termodinámicas, electrónicas y mecánicas también distintivas. En particular, las energías de enlace de estas interacciones varían ampliamente. Sin embargo, el enlace en sólidos puede ser de tipos mezclados o intermedios, de ahí que no todos los sólidos tienen las propiedades típicas de una clase en particular, y algunos pueden ser descritos como formas intermedias.\n\n");
	fprintf(archivo,"- Clases básicas de sólidos:\n");
	fprintf(archivo,"----------------------------\n\n");
	fprintf(archivo," - Sólidos de red covalente:\n");
	fprintf(archivo," Un sólido de red covalente consiste en un conjunto de átomos mantenidos juntos por una red de enlaces covalentes (pares de electrones compartidos entre átomos de similar electronegatividad), y de ahí que puedan ser considerados como una sola gran molécula. El ejemplo clásico es el diamante; otros ejemplos incluyen el silicio, el cuarzo y el grafito.\n\n");
	fprintf(archivo," Típicamente, los sólidos de red covalente tienen una gran fuerza, un gran módulo elástico, y un elevado punto de fusión. Su fuerza, rigidez, y alto punto de fusión son consecuencia de la fuerza y rigidez del enlace covalente que los mantiene unidos. También son característicamente quebradizos, debido a que la naturaleza direccional de los enlaces covalentes resiste fuertemente los movimientos asociados con el flujo plástico, y son, en efecto, rotos cuando ocurre dicho tipo de movimientos. Esta propiedad resulta en la fragilidad, por razones estudiadas en el campo de la mecánica de fractura. Los sólidos de red covalente varían en su comportamiento desde aislantes hasta semiconductores, dependiendo del tamaño de la banda prohibida del material. en estado sólido los covalentes conducen la electricidad.\n\n");
	fprintf(archivo," - Sólidos iónicos:\n");
	fprintf(archivo," Un sólido iónico estándar consiste en un conjunto de aniones y cationes que se mantienen juntos por enlaces iónicos, esto es, por la atracción electrostática de cargas opuestas (el resultado de la transferencia de electrones del átomo de menor electronegatividad al de mayor electronegatividad). Entre los sólidos iónicos están los compuestos formados por metales alcalinos y metales alcalinotérreos, en combinación con halógenos; un ejemplo clásico es la sal de mesa, cloruro de sodio.\n\n");
	fprintf(archivo," Típicamente, los sólidos iónicos son de una fuerza intermedia, y son extremadamente quebradizos. Los puntos de fusión son moderadamente altos, pero algunas combinaciones de cationes y aniones moleculares producen un líquido iónico con un punto de fusión inferior a la temperatura ambiental. En todos los casos, las presiones de vapor son extraordinariamente bajas; esto es consecuencia de la gran energía requerida para mover una carga (o par de cargas) de un medio iónico hacia el espacio libre. Los sólidos iónicos tienen bandas prohibidas muy grandes, de ahí que sean aislantes.\n\n");
	fprintf(archivo," - Sólidos metálicos:\n");
	fprintf(archivo," Los sólidos metálicos se mantienen unidos por una alta densidad de electrones deslocalizados, compartidos, lo que resulta en un 'enlace metálico'. Los ejemplos clásicos son los metales tales como el cobre y el aluminio, pero algunos materiales son metales en un sentido electrónico, pero tienen un enlace metálico despreciable en un sentido mecánico o termodinámico.\n\n");
	fprintf(archivo," Los sólidos con enlace metálico puro son dúctiles y, en su forma pura, tienen una resistencia baja; sus puntos de fusión son variables (dependiendo del metal, el mercurio se funde a -39 °C). Estas propiedades son consecuencia de la naturaleza no direccional y no polar del enlace metálico, en el que los planos de átomos pueden deslizarse uno sobre otro, sin perturbar las interacciones con el mar circundante de electrones deslocalizados. La mayor fuerza puede ser debida a la interferencia con las dislocaciones que median en las transformaciones plásticas. Más aún, algunos metales de transición exhiben enlace direccional, además de enlace metálico; esto incrementa los esfuerzos cortantes y reduce la ductilidad. Los sólidos metálicos no tienen, por definición, banda prohibida en el nivel de Fermi, de ahí que sean conductores.\n\n");
	fprintf(archivo," - Sólidos moleculares:\n");
	fprintf(archivo," Un sólido molecular clásico consiste de pequeñas moléculas covalentes no polares, y es mantenido junto por fuerzas de dispersión de London; un ejemplo clásico es la cera de parafina. Estas fuerzas son débiles, y resultan en unas energías de enlace entre pares en el orden de 1/100 de los enlaces covalentes, iónicos, y metálicos. Las energías de enlace tienden a incrementarse con el incremento del tamaño molecular y la polaridad.\n\n");
	
	fclose(archivo);
}
