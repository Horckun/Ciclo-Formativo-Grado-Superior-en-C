void enico() {
	FILE *archivo;
	archivo = fopen("El enlace iónico y el covalente a partir de la regla del octeto, utilizando los diagramas de Lewis.doc","w");
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
	
	fprintf(archivo,"El enlace iónico y el covalente a partir de la regla del octeto, utilizando los diagramas de Lewis. Enlaces múltiples en el covalente para justificar moléculas como la de oxígeno o la de nitrógeno. Introducción al enlace metálico:\n");
	fprintf(archivo,"======================================================================================================================================================================================================================================\n\n");
	fprintf(archivo,"La regla de octeto o regla del octeto es una regla que se emplea en el contexto de la química. La regla del octeto define la propiedad que tienen los átomos de completar su último nivel de energía con ocho electrones para alcanzar estabilidad. Ya sea un enlace iónico, covalente o metálico, los átomos van a tender a ceder o compartir para completar 8 electrones en la capa de valencia.\n\n");
	fprintf(archivo,"La base de esta regla son los gases nobles que tienen 8 electrones en su última capa y son los elementos menos reactivos de toda la tabla periódica. Lewis advirtió que al unirse diferentes iones entre sí, quieren lograr la configuración de un gas noble, consiguiendo 8 electrones en su última capa.\n\n");
	fprintf(archivo,"Esta regla se aplica en la creación de enlaces químicos entre los átomos. El comportamiento y las propiedades de las moléculas dependerán del tipo de enlace, número de enlaces por átomo y de las fuerzas intermoleculares.\n\n");
	fprintf(archivo,"Existen diferentes tipos de enlace químico, según la electronegatividad de los elementos. En cualquiera de los enlaces, los átomos tienden a roadearse de 8 electrones en la capa más externa.\n\n");
	fprintf(archivo," - Enlace iónico.\n");
	fprintf(archivo," - Enlace convalente.\n");
	fprintf(archivo," - Enlace metálico.\n\n");
	fprintf(archivo,"La mejor forma para ver de forma gráfica cómo funciona la 'regla del octeto' es la representación de Lewis de las moléculas. Antes de escribir la representación de la estructura de Lewis hay que conocer cómo están unidos los átomos de verdad, ya que muchas veces la fórmula no representa las uniones entre átomos. Por ejemplo aunque la fórmula del ácido nítrico con frecuencia se representa como HNO3, en realidad el hidrógeno está unido a un oxígeno, no al nitrógeno. La estructura es HONO2 y no HNO3.\n\n");
	fprintf(archivo,"- Excepciones regla del octeto:\n");
	fprintf(archivo,"-------------------------------\n\n");
	fprintf(archivo," - El hidrógeno al tener un único orbital en su capa de valencia la cual puede aceptar como máximo dos electrones.\n");
	fprintf(archivo," - El berilio se completa en su última capa con cuatro electrones.\n");
	fprintf(archivo," - El boro que requiere de seis electrones para llevar a cabo esta función.\n");
	fprintf(archivo," - El aluminio consigue la estabilidad con 6 electrones en su capa de valencia.\n\n");
	fprintf(archivo,"También los átomos no metálicos a partir del tercer período (Fósforo, yodo, xenón y Azufre) pueden tener más de ocho electrones en su capa de valencia, colocando los electrones extra en subniveles.\n\n");
	
	fclose(archivo);
}
