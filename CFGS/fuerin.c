void fuerin() {
	FILE *archivo;
	archivo = fopen("Fuerzas intermoleculares. Enlaces de hidrógeno y fuerzas de Van der Waals.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Fuerzas intermoleculares. Enlaces de hidr%cgeno y fuerzas de Van der Waals:\n",162);
	p("==========================================================================\n\n");
	p("Cuando tenemos mol%cculas covalentes polares, estas forman un dipolo permanente que establecer%c fuerzas electrost%cticas con los dipolos de las mol%cculas vecinas.\n\n",130,160,160,130);
	
	system("pause");
	p("\n");
	
	p("Vamos a repasar brevemente qu%c tiene que ocurrir para que una mol%ccula covalente sea polar:\n\n",130,130);
	p(" - Que algunos de sus enlaces o todos ellos sean polares, por estar formados por %ctomos con distinta electronegatividad, es decir, enlace intramoleculares con un momento dipolar permanente (distribuci%cn asim%ctrica de la carga). El %ctomo m%cs electronegativo atrae hacia s%c los electrones del enlace.\n",160,162,130,160,160,161);
	p(" - Que los momentos dipolares de los distintos enlaces de la mol%ccula no se anulen entre s%c por geometr%ca, de forma que la mol%ccula presente un momento dipolar total neto distinto de cero.\n\n",130,161,161,130);
	p("Por tanto, existen mol%cculas covalentes polares en funci%cn de la diferencia de electronegatividad de sus %ctomos y de su geometr%ca, por lo que formar%cn dipolos permanentes que se atraer%cn entre s%c por fuerzas electrost%cticas.\n\n",130,162,160,161,162,160,161,160);
	p("Aunque la naturaleza de este tipo de fuerzas intermoleculares siempre es la misma, la formaci%cn de dipolos permanentes, se clasifican en dos tipos de fuerzas distintas:\n\n",162);
	p(" - Enlaces de hidr%cgeno: cuando la mol%ccula polar presenta enlaces formados por un %ctomo de hidr%cgeno y un %ctomo peque%co y electronegativo (nitr%cgeno, ox%cgeno o fl%cor; N,O,F). Dentro de los dos tipos de fuerzas intermoleculares entre mol%cculas polares son los m%cs intensos, y oscilan, generalmente, entre 8 y 40 kJ/mol.\n",162,130,160,162,160,164,162,161,163,130,160);
	p(" - Fuerzas de van der Waals: clasificaremos las fuerzas intermoleculares dentro de este grupo cuando tengamos el resto de combinaciones posibles, es decir, cualquier enlace polar que no est%c formado por hidr%cgeno enlazado a N,O,F. Suelen oscilar de 0.1 a 30 kJ/mol (este %cltimo valor tan elevado, en casos particulares)\n\n",130,162,163);
	p("En primer lugar, para tratar en mayor profundidad los enlaces de hidr%cgeno (tambi%cn llamados puentes de hidr%cgeno), consideraremos la mol%ccula de agua, que es una mol%ccula covalente polar. Dado que los enlaces de esta mol%ccula son O-H, se clasificar%cn como 'enlaces de hidr%cgeno'.\n\n",162,130,162,130,130,130,160,162);
	
	system("pause");
	p("\n");
	
	p("Puesto que los enlaces de hidr%cgeno presentan en general una intensidad mayor que las fuerzas de Van der Waals, las mol%cculas que los forman presentan unos puntos de fusi%cn y ebullici%cn anormalmente elevados, en comparaci%cn con los compuestos an%clogos de su mismo grupo. En el caso del grupo de los anf%cgenos: H2O, H2S, H2Se y H2Te, los puntos de ebullici%cn son:\n\n",162,130,162,162,162,160,161,162);
	p("H2O: 100%cC.\n",167);
	p("H2S: -59.6%cC.\n",167);
	p("H2Se: -42%cC.\n",167);
	p("H2Te: -1.8%cC.\n\n",167);
	
	system("pause");
	p("\n");
	
	p("El punto de ebullici%cn del agua, por ser el de menor masa molecular, deber%ca ser el menor de todos ellos, dado que sabemos que, en general, a mayor masa molecular de una sustancia mayor punto de ebullici%cn. Sin embargo vemos que es el mayor de la serie y con una diferencia muy considerable. Esto es debido que, puesto que en las mol%cculas de agua se forman enlaces de hidr%cgeno, costar%c m%cs separarlas, habr%c que aportar una mayor cantidad de energ%ca y, por tanto, mayor temperatura. De hecho, es la formaci%cn de enlaces de hidr%cgeno lo que le confiere sus peculiares propiedades f%csicas que la hacen un compuesto indispensable para el desarrollo de la vida y la qu%cmica de los seres vivos, pues la inmensa mayor%ca de reacciones que se dan en las c%clulas tiene lugar en disoluci%cn.\n\n",162,161,162,130,162,160,160,160,161,162,162,161,161,161,130,162);
	p("Adem%cs, la formaci%cn de puentes de hidr%cgeno es tambi%cn la causa de la estructura altamente ordenada del hielo.\n\n",160,162,162,130);
	
	system("pause");
	p("\n");
	
	p("Otras mol%cculas de la serie, como H2S y H2Se, ser%cn levemente polares (electronegatividad del S: 2.5; electronegatividad del Se: 2.4; electronegatividad del H: 2.1). Pero, dado que las diferencias de electronegatividad son peque%cas, la magnitud de los dipolos permanentes formados ser%c muy inferior a la de las mol%cculas de agua y, por este motivo, tambi%cn ser%c menor la magnitud de las fuerzas intermoleculares formadas (que en este caso ser%cn Fuerzas de Van der Waals o dipolo-dipolo, por no cumplir las condiciones para ser designadas como enlaces de hidr%cgeno). Por este motivo, costar%c menos separar las mol%cculas y sus puntos de ebullici%cn son muy inferiores a los del agua, a pesar de tener mayor masa molecular.\n\n",130,160,164,160,130,130,160,160,162,160,130,162);
	
	fprintf(archivo,"Fuerzas intermoleculares. Enlaces de hidrógeno y fuerzas de Van der Waals:\n");
	fprintf(archivo,"==========================================================================\n\n");
	fprintf(archivo,"Cuando tenemos moléculas covalentes polares, estas forman un dipolo permanente que establecerá fuerzas electrostáticas con los dipolos de las moléculas vecinas.\n\n");
	fprintf(archivo,"Vamos a repasar brevemente qué tiene que ocurrir para que una molécula covalente sea polar:\n\n");
	fprintf(archivo," - Que algunos de sus enlaces o todos ellos sean polares, por estar formados por átomos con distinta electronegatividad, es decir, enlace intramoleculares con un momento dipolar permanente (distribución asimétrica de la carga). El átomo más electronegativo atrae hacia sí los electrones del enlace.\n");
	fprintf(archivo," - Que los momentos dipolares de los distintos enlaces de la molécula no se anulen entre sí por geometría, de forma que la molécula presente un momento dipolar total neto distinto de cero.\n\n");
	fprintf(archivo,"Por tanto, existen moléculas covalentes polares en función de la diferencia de electronegatividad de sus átomos y de su geometría, por lo que formarán dipolos permanentes que se atraerán entre sí por fuerzas electrostáticas.\n\n");
	fprintf(archivo,"Aunque la naturaleza de este tipo de fuerzas intermoleculares siempre es la misma, la formación de dipolos permanentes, se clasifican en dos tipos de fuerzas distintas:\n\n");
	fprintf(archivo," - Enlaces de hidrógeno: cuando la molécula polar presenta enlaces formados por un átomo de hidrógeno y un átomo pequeño y electronegativo (nitrógeno, oxígeno o flúor; N,O,F). Dentro de los dos tipos de fuerzas intermoleculares entre moléculas polares son los más intensos, y oscilan, generalmente, entre 8 y 40 kJ/mol.\n");
	fprintf(archivo," - Fuerzas de van der Waals: clasificaremos las fuerzas intermoleculares dentro de este grupo cuando tengamos el resto de combinaciones posibles, es decir, cualquier enlace polar que no esté formado por hidrógeno enlazado a N,O,F. Suelen oscilar de 0.1 a 30 kJ/mol (este último valor tan elevado, en casos particulares)\n\n");
	fprintf(archivo,"En primer lugar, para tratar en mayor profundidad los enlaces de hidrógeno (también llamados puentes de hidrógeno), consideraremos la molécula de agua, que es una molécula covalente polar. Dado que los enlaces de esta molécula son O-H, se clasificarán como 'enlaces de hidrógeno'.\n\n");
	fprintf(archivo,"Puesto que los enlaces de hidrógeno presentan en general una intensidad mayor que las fuerzas de Van der Waals, las moléculas que los forman presentan unos puntos de fusión y ebullición anormalmente elevados, en comparación con los compuestos análogos de su mismo grupo. En el caso del grupo de los anfígenos: H2O, H2S, H2Se y H2Te, los puntos de ebullición son:\n\n");
	fprintf(archivo,"H2O: 100ºC.\n");
	fprintf(archivo,"H2S: -59.6ºC.\n");
	fprintf(archivo,"H2Se: -42ºC.\n");
	fprintf(archivo,"H2Te: -1.8ºC.\n\n");
	fprintf(archivo,"El punto de ebullición del agua, por ser el de menor masa molecular, debería ser el menor de todos ellos, dado que sabemos que, en general, a mayor masa molecular de una sustancia mayor punto de ebullición. Sin embargo vemos que es el mayor de la serie y con una diferencia muy considerable. Esto es debido que, puesto que en las moléculas de agua se forman enlaces de hidrógeno, costará más separarlas, habrá que aportar una mayor cantidad de energía y, por tanto, mayor temperatura. De hecho, es la formación de enlaces de hidrógeno lo que le confiere sus peculiares propiedades físicas que la hacen un compuesto indispensable para el desarrollo de la vida y la química de los seres vivos, pues la inmensa mayoría de reacciones que se dan en las células tiene lugar en disolución.\n\n");
	fprintf(archivo,"Además, la formación de puentes de hidrógeno es también la causa de la estructura altamente ordenada del hielo.\n\n");
	fprintf(archivo,"Otras moléculas de la serie, como H2S y H2Se, serán levemente polares (electronegatividad del S: 2.5; electronegatividad del Se: 2.4; electronegatividad del H: 2.1). Pero, dado que las diferencias de electronegatividad son pequeñas, la magnitud de los dipolos permanentes formados será muy inferior a la de las moléculas de agua y, por este motivo, también será menor la magnitud de las fuerzas intermoleculares formadas (que en este caso serán Fuerzas de Van der Waals o dipolo-dipolo, por no cumplir las condiciones para ser designadas como enlaces de hidrógeno). Por este motivo, costará menos separar las moléculas y sus puntos de ebullición son muy inferiores a los del agua, a pesar de tener mayor masa molecular.\n\n");
	
	fclose(archivo);
}
