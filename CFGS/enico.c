void enico() {
	FILE *archivo;
	archivo = fopen("El enlace i�nico y el covalente a partir de la regla del octeto, utilizando los diagramas de Lewis.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("El enlace i%cnico y el covalente a partir de la regla del octeto, utilizando los diagramas de Lewis. Enlaces m%cltiples en el covalente para justificar mol%cculas como la de ox%cgeno o la de nitr%cgeno. Introducci%cn al enlace met%clico:\n",162,163,130,161,162,162,160);
	p("======================================================================================================================================================================================================================================\n\n");
	p("La regla de octeto o regla del octeto es una regla que se emplea en el contexto de la qu%cmica. La regla del octeto define la propiedad que tienen los %ctomos de completar su %cltimo nivel de energ%ca con ocho electrones para alcanzar estabilidad. Ya sea un enlace i%cnico, covalente o met%clico, los %ctomos van a tender a ceder o compartir para completar 8 electrones en la capa de valencia.\n\n",161,160,163,161,162,160,160);
	p("La base de esta regla son los gases nobles que tienen 8 electrones en su %cltima capa y son los elementos menos reactivos de toda la tabla peri%cdica. Lewis advirti%c que al unirse diferentes iones entre s%c, quieren lograr la configuraci%cn de un gas noble, consiguiendo 8 electrones en su %cltima capa.\n\n",163,162,162,161,162,163);
	p("Esta regla se aplica en la creaci%cn de enlaces qu%cmicos entre los %ctomos. El comportamiento y las propiedades de las mol%cculas depender%cn del tipo de enlace, n%cmero de enlaces por %ctomo y de las fuerzas intermoleculares.\n\n",162,161,160,130,160,163,160);
	
	system("pause");
	p("\n");
	
	p("Existen diferentes tipos de enlace qu%cmico, seg%cn la electronegatividad de los elementos. En cualquiera de los enlaces, los %ctomos tienden a roadearse de 8 electrones en la capa m%cs externa.\n\n",161,163,160,160);
	p(" - Enlace i%cnico.\n",162);
	p(" - Enlace convalente.\n");
	p(" - Enlace met%clico.\n\n",160);
	p("La mejor forma para ver de forma gr%cfica c%cmo funciona la 'regla del octeto' es la representaci%cn de Lewis de las mol%cculas. Antes de escribir la representaci%cn de la estructura de Lewis hay que conocer c%cmo est%cn unidos los %ctomos de verdad, ya que muchas veces la f%crmula no representa las uniones entre %ctomos. Por ejemplo aunque la f%crmula del %ccido n%ctrico con frecuencia se representa como HNO3, en realidad el hidr%cgeno est%c unido a un ox%cgeno, no al nitr%cgeno. La estructura es HONO2 y no HNO3.\n\n",160,162,162,130,162,162,160,160,162,160,162,160,161,162,160,161,162);
	
	system("pause");
	p("\n");
	
	p("- Excepciones regla del octeto:\n");
	p("-------------------------------\n\n");
	p(" - El hidr%cgeno al tener un %cnico orbital en su capa de valencia la cual puede aceptar como m%cximo dos electrones.\n",162,163,160);
	p(" - El berilio se completa en su %cltima capa con cuatro electrones.\n",163);
	p(" - El boro que requiere de seis electrones para llevar a cabo esta funci%cn.\n",162);
	p(" - El aluminio consigue la estabilidad con 6 electrones en su capa de valencia.\n\n");
	p("Tambi%cn los %ctomos no met%clicos a partir del tercer per%codo (F%csforo, yodo, xen%cn y Azufre) pueden tener m%cs de ocho electrones en su capa de valencia, colocando los electrones extra en subniveles.\n\n",130,160,160,161,162,162,160);
	
	fprintf(archivo,"El enlace i�nico y el covalente a partir de la regla del octeto, utilizando los diagramas de Lewis. Enlaces m�ltiples en el covalente para justificar mol�culas como la de ox�geno o la de nitr�geno. Introducci�n al enlace met�lico:\n");
	fprintf(archivo,"======================================================================================================================================================================================================================================\n\n");
	fprintf(archivo,"La regla de octeto o regla del octeto es una regla que se emplea en el contexto de la qu�mica. La regla del octeto define la propiedad que tienen los �tomos de completar su �ltimo nivel de energ�a con ocho electrones para alcanzar estabilidad. Ya sea un enlace i�nico, covalente o met�lico, los �tomos van a tender a ceder o compartir para completar 8 electrones en la capa de valencia.\n\n");
	fprintf(archivo,"La base de esta regla son los gases nobles que tienen 8 electrones en su �ltima capa y son los elementos menos reactivos de toda la tabla peri�dica. Lewis advirti� que al unirse diferentes iones entre s�, quieren lograr la configuraci�n de un gas noble, consiguiendo 8 electrones en su �ltima capa.\n\n");
	fprintf(archivo,"Esta regla se aplica en la creaci�n de enlaces qu�micos entre los �tomos. El comportamiento y las propiedades de las mol�culas depender�n del tipo de enlace, n�mero de enlaces por �tomo y de las fuerzas intermoleculares.\n\n");
	fprintf(archivo,"Existen diferentes tipos de enlace qu�mico, seg�n la electronegatividad de los elementos. En cualquiera de los enlaces, los �tomos tienden a roadearse de 8 electrones en la capa m�s externa.\n\n");
	fprintf(archivo," - Enlace i�nico.\n");
	fprintf(archivo," - Enlace convalente.\n");
	fprintf(archivo," - Enlace met�lico.\n\n");
	fprintf(archivo,"La mejor forma para ver de forma gr�fica c�mo funciona la 'regla del octeto' es la representaci�n de Lewis de las mol�culas. Antes de escribir la representaci�n de la estructura de Lewis hay que conocer c�mo est�n unidos los �tomos de verdad, ya que muchas veces la f�rmula no representa las uniones entre �tomos. Por ejemplo aunque la f�rmula del �cido n�trico con frecuencia se representa como HNO3, en realidad el hidr�geno est� unido a un ox�geno, no al nitr�geno. La estructura es HONO2 y no HNO3.\n\n");
	fprintf(archivo,"- Excepciones regla del octeto:\n");
	fprintf(archivo,"-------------------------------\n\n");
	fprintf(archivo," - El hidr�geno al tener un �nico orbital en su capa de valencia la cual puede aceptar como m�ximo dos electrones.\n");
	fprintf(archivo," - El berilio se completa en su �ltima capa con cuatro electrones.\n");
	fprintf(archivo," - El boro que requiere de seis electrones para llevar a cabo esta funci�n.\n");
	fprintf(archivo," - El aluminio consigue la estabilidad con 6 electrones en su capa de valencia.\n\n");
	fprintf(archivo,"Tambi�n los �tomos no met�licos a partir del tercer per�odo (F�sforo, yodo, xen�n y Azufre) pueden tener m�s de ocho electrones en su capa de valencia, colocando los electrones extra en subniveles.\n\n");
	
	fclose(archivo);
}
