void ine() {
	FILE *archivo;
	archivo = fopen("Interacción eléctrica. Ley de Coulomb. Estudio del campo eléctrico.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Interacci%cn el%cctrica. Ley de Coulomb. Estudio del campo el%cctrico:\n",162,130,130);
	p("===================================================================\n\n");
	
	p("Una de las interacciones fundamentales descritas por la f%csica es la electricidad. Aunque conocidos desde antiguo, los fen%cmenos el%cctricos no empezaron a ser explicados de forma sistem%ctica hasta las postrimer%cas del siglo XVIII, y s%clo a mediados del XIX se descubri%c su estrecha relaci%cn con otra manifestaci%cn com%cn de la naturaleza: el magnetismo.\n\n",161,162,130,160,161,162,162,162,162,163);
	
	p("- La electricidad en la naturaleza:\n");
	p("-----------------------------------\n\n");
	
	p("La carga el%cctrica es una de las propiedades b%csicas de la materia. Aunque la comprensi%cn extensa de sus manifestaciones se resisti%c durante siglos al escrutinio de la ciencia, ya hacia el a%co 600 a. C. los fil%csofos griegos describieron con detalle el experimento por el cual una barra de %cmbar frotado atrae peque%cos pedacitos de paja u otro material ligero (electrizaci%cn por frotamiento).\n\n",130,160,162,162,164,162,160,164,162);
	
	p("Los fen%cmenos el%cctricos, indivisiblemente unidos a los magn%cticos, est%cn presentes en todas partes, ya sea en las tormentas, la radiaci%cn solar o el cerebro humano. Modernamente, sus propiedades se aprovechan en m%cltiples campos de actividad, y la electricidad se ha convertido en una forma esencial de consumo y transporte de energ%ca.\n\n",162,130,130,160,162,163,161);
	
	p("Por su naturaleza el%cctrica, los cuerpos f%csicos se clasifican en conductores, que transmiten la electricidad f%ccilmente, y aislantes o diel%cctricos, que oponen una resistencia elevada a su paso. Los semiconductores presentan una conductividad intermedia entre estas dos clases.\n\n",130,161,160,130);
	
	system("pause");
	p("\n");
	
	p("- Cargas el%cctricas:\n",130);
	p("--------------------\n\n");
	
	p("La esencia de la electricidad es la carga el%cctrica. Esta cualidad existe en dos clases distintas, que se denominan cargas positivas y negativas. Las cargas el%cctricas de la misma clase o signo se repelen mutuamente y las de signo distinto se atraen.\n\n",130,130);
	
	fprintf(archivo,"Interacción eléctrica. Ley de Coulomb. Estudio del campo eléctrico:\n");
	fprintf(archivo,"===================================================================\n\n");
	fprintf(archivo,"Una de las interacciones fundamentales descritas por la física es la electricidad. Aunque conocidos desde antiguo, los fenómenos eléctricos no empezaron a ser explicados de forma sistemática hasta las postrimerías del siglo XVIII, y sólo a mediados del XIX se descubrió su estrecha relación con otra manifestación común de la naturaleza: el magnetismo.\n\n");
	fprintf(archivo,"- La electricidad en la naturaleza:\n");
	fprintf(archivo,"-----------------------------------\n\n");
	fprintf(archivo,"La carga eléctrica es una de las propiedades básicas de la materia. Aunque la comprensión extensa de sus manifestaciones se resistió durante siglos al escrutinio de la ciencia, ya hacia el año 600 a. C. los filósofos griegos describieron con detalle el experimento por el cual una barra de ámbar frotado atrae pequeños pedacitos de paja u otro material ligero (electrización por frotamiento).\n\n");
	fprintf(archivo,"Los fenómenos eléctricos, indivisiblemente unidos a los magnéticos, están presentes en todas partes, ya sea en las tormentas, la radiación solar o el cerebro humano. Modernamente, sus propiedades se aprovechan en múltiples campos de actividad, y la electricidad se ha convertido en una forma esencial de consumo y transporte de energía.\n\n");
	fprintf(archivo,"Por su naturaleza eléctrica, los cuerpos físicos se clasifican en conductores, que transmiten la electricidad fácilmente, y aislantes o dieléctricos, que oponen una resistencia elevada a su paso. Los semiconductores presentan una conductividad intermedia entre estas dos clases.\n\n");
	fprintf(archivo,"- Cargas eléctricas:\n");
	fprintf(archivo,"--------------------\n\n");
	fprintf(archivo,"La esencia de la electricidad es la carga eléctrica. Esta cualidad existe en dos clases distintas, que se denominan cargas positivas y negativas. Las cargas eléctricas de la misma clase o signo se repelen mutuamente y las de signo distinto se atraen.\n\n");
	
	fclose(archivo);
}
