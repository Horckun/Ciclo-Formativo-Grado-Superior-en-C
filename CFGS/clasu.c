void clasu() {
	FILE *archivo;
	archivo = fopen("La clasificación de las sustancias.doc","w");
	if(archivo == NULL) {
		p("No se ha podido abrir el archivo.\n\n");
	}
	
	p("La clasificaci%cn de las sustancias: elementos, compuestos y mezclas:\n",162);
	p("====================================================================\n\n");
	
	p(" - Clasificaci%cn de la materia:\n",162);
	p(" ------------------------------\n\n");
	
	p(" La materia la podemos encontrar en la naturaleza en forma de sustancias puras y de mezclas.\n\n");
	
	p(" Las sustancias puras son aquellas que no var%can sea cual sea su estado. Se dividen en dos grandes grupos: Elementos y Compuestos.\n\n",161);
	p("  - Elementos: Son sustancias puras que no pueden descomponerse en otras sustancias puras m%cs sencillas por ning%cn procedimiento. Ejemplo: Todos los elementos de la tabla peri%cdica: Ox%cgeno, hierro, carbono, sodio, cloro, cobre, etc. Se representan mediante su s%cmbolo qu%cmico y se conocen 115 en la actualidad.\n\n",160,163,162,161,161,161);
	
	p("  - Compuestos: Son sustancias puras que est%cn constituidas por 2 o m%cs elementos combinados en proporciones fijas. Los compuestos se pueden descomponer mediante procedimientos qu%cmicos en los elementos que los constituyen. Ejemplo:  Agua, de f%crmula H2O, est%c constituida por los elementos hidr%cgeno (H) y ox%cgeno (O) y se puede descomponer en ellos mediante la acci%cn de una corriente el%cctrica (electr%clisis). Los compuestos se representan mediante f%crmulas qu%cmicas en las que se especifican los elementos que forman el compuesto y el n%cmero de %ctomos de cada uno de ellos que compone la mol%ccula. Ejemplo: En el agua hay 2 %ctomos del elemento hidr%cgeno y 1 %ctomo del elemento ox%cgeno formando la mol%ccula H2O.\n\n",160,160,161,162,160,162,161,162,130,162,162,161,163,160,130,160,162,160,161,130);
	
	system("pause");
	p("\n");
	
	p(" Cuando una sustancia pura est%c formada por un solo tipo de elemento, se dice que es una sustancia simple. Esto ocurre cuando la mol%ccula contiene varios %ctomos pero todos son del mismo elemento. Ejemplo: Ox%cgeno gaseoso (O2), ozono (O3), etc. Est%cn constituidas sus mol%cculas por varios %ctomos del elemento ox%cgeno.\n\n",160,130,160,161,160,130,160,161);
	
	p(" Las mezclas se encuentran formadas por 2 o m%cs sustancias puras. Su composici%cn es variable. Se distinguen dos grandes grupos: Mezclas homog%cneas y Mezclas heterog%cneas.\n\n",160,162,130,130);
	
	p("  - Mezclas homog%cneas: Tambi%cn llamadas Disoluciones. Son mezclas en las que no se pueden distinguir sus componentes a simple vista. Ejemplo: Disoluci%cn de sal en agua, el aire, una aleaci%cn de oro y cobre, etc.\n\n",130,130,162,162);
	
	p("  - Mezclas heterog%cneas: Son mezclas en las que se pueden distinguir a los componentes a simple vista. Ejemplo: Agua con aceite, granito, arena en agua, etc.\n\n",130);
	
	system("pause");
	p("\n");
	
	p(" - M%ctodos de separaci%cn de mezclas heterog%cneas:\n",130,162,130);
	p(" ------------------------------------------------\n\n");
	
	p(" Los procedimientos f%csicos m%cs empleados para separar los componentes de una mezcla heterog%cnea son: la filtraci%cn, la decantaci%cn y la separaci%cn magn%ctica. Estos m%ctodos de separaci%cn son bastante sencillos por el hecho de que en estas mezclas se distinguen muy bien los componentes.\n\n",161,160,130,162,162,162,130,130,162);
	
	p("  - Filtraci%cn: Este procedimiento se emplea para separar un l%cquido de un s%clido insoluble. Ejemplo: Separaci%cn de agua con arena. A trav%cs de materiales porosos como el papel filtro, algod%cn o arena se puede separar un s%clido que se encuentra suspendido en un l%cquido. Estos materiales permiten solamente el paso del l%cquido reteniendo el s%clido.\n\n",162,161,162,162,130,162,162,161,161,162);
	
	p("  - Decantaci%cn: Esta t%ccnica se emplea para separar 2 l%cquidos no miscibles entre s%c. Ejemplo: Agua y aceite. La decantaci%cn se basa en la diferencia de densidad entre los dos componentes, que hace que dejados en reposo, ambos se separen hasta situarse el m%cs denso en la parte inferior del envase que los contiene. De esta forma, podemos vaciar el contenido por arriba (si queremos tomar el componente menos denso) o por abajo (si queremos tomar el m%cs denso).\n\n",162,130,161,161,162,160,160);
	
	p(" En la separaci%cn de dos l%cquidos no miscibles, como el agua y el aceite, se utiliza un embudo de decantaci%cn que consiste en un recipiente transparente provisto de una llave en su parte inferior. Al abrir la llave, pasa primero el l%cquido de mayor densidad y cuando %cste se ha agotado se impide el paso del otro l%cquido cerrando la llave. La superficie de separaci%cn entre ambos l%cquidos se observa en el tubo estrecho de goteo.\n\n",162,161,162,161,130,161,162,161);
	
	p("  - Separaci%cn magn%ctica: Esta t%ccnica sirve para separar sustancias magn%cticas de otras que no lo son. Al aproximar a la mezcla el im%cn, este atrae a las limaduras de hierro, que se separan as%c del resto de la mezcla.\n\n",162,130,130,130,160,161);
	
	system("pause");
	p("\n");
	
	p(" - Las disoluciones:\n");
	p(" -------------------\n\n");
	
	p(" Una disoluci%cn es una mezcla homog%cnea formada por 2 o m%cs sustancias puras en proporci%cn variable. Las disoluciones pueden ser binarias (2 componentes), ternarias (3 componentes), etc. Ejemplo: Una mezcla de agua con sal es una disoluci%cn.\n\n",162,130,160,162,162);
	
	p(" El componente de la disoluci%cn que se encuentra en mayor cantidad se llama disolvente y el o los que aparecen en menor cantidad se llaman solutos. Ejemplo: En una disoluci%cn de sal en agua, la sal es el soluto y el agua es el disolvente.\n\n",162,162);
	
	p(" Las disoluciones binarias se clasifican seg%cn el estado de agregaci%cn en que se encuentran soluto y disolvente.\n\n",163,162);
	
	p(" - Concentraci%cn de una disoluci%cn:\n",162,162);
	
	p(" Las disoluciones pueden clasificarse en concentradas o diluidas seg%cn la cantidad de soluto sea grande o peque%ca con respecto a la cantidad de disolvente. Pero estos t%crminos son cualitativos, no dan una cantidad exacta medible. Para ello, se emplea el t%crmino concentraci%cn.\n\n",163,164,130,130,162);
	
	p(" La concentraci%cn de una disoluci%cn es la cantidad de soluto que hay disuelto en una determinada cantidad de disolvente o en una determinada cantidad de disoluci%cn.\n\n",162,162,162);
	
	system("pause");
	p("\n");
	
	p(" Existen distintas formas de expresar la concentraci%cn de una disoluci%cn:\n\n",162,162);
	
	p("  - Tanto por ciento en masa:\n\n");
	
	p("   Es la masa de soluto (en gramos) que hay en 100 gramos de disoluci%cn.\n\n",162);
	
	p("    % en masa del soluto = (masa de soluto / masa de disoluci%cn) x 100.\n\n",162);
	
	p("  - Tanto por ciento en volumen:\n\n");
	
	p("   Es el volumen de soluto que hay en 100 vol%cmenes de disoluci%cn.\n\n",163,162);
	
	p("    % en volumen del soluto = (volumen de soluto / volumen de disoluci%cn) x 100.\n\n",162);
	
	p("  - Concentraci%cn en masa:\n\n",162);
	
	p("   Es la masa de soluto que hay disuelta por cada unidad de volumen de disoluci%cn.\n\n",162);
	
	p("    Concentraci%cn en masa = masa de soluto / volumen de disoluci%cn.\n\n",162,162);
	
	p("    La unidad de concentraci%cn en masa, es el kg/m%c, pero en la pr%cctica se emplea el g/l.\n\n",162,252,160);
	
	system("pause");
	p("\n");
	
	p(" - Solubilidad:\n");
	p(" --------------\n\n");
	
	p(" La cantidad de soluto que se puede disolver en una cantidad determinada de un disolvente es limitada. El az%ccar, por ejemplo, es soluble en agua, pero si en un vaso de agua a%cadimos cada vez m%cs y m%cs az%ccar, llegar%c un momento en el que esta ya no se disuelva m%cs y se deposite en el fondo. Adem%cs, se disuelve m%cs cantidad de az%ccar en agua caliente que en agua fr%ca.\n\n",163,164,160,160,163,160,160,160,160,163,161);
	
	p(" La cantidad m%cxima (en gramos) de cualquier soluto que se puede disolver en 100 g de un disolvente a una temperatura dada se denomina solubilidad de ese soluto a esa temperatura. As%c, la solubilidad se expresa en gramos de soluto por 100 g de disolvente.\n\n",160,161);
	
	p(" La solubilidad de una sustancia pura en un determinado disolvente y a una temperatura dada es otra de sus propiedades caracter%csticas.\n\n",161);
	
	p(" Cuando una disoluci%cn contiene la m%cxima cantidad posible de soluto disuelto a una temperatura dada, decimos que est%c saturada a esa temperatura. En este caso, si a%cadimos m%cs soluto, este se quedar%c sin disolver.\n\n",162,160,160,164,160,160);
	
	p("  - La solubilidad de los gases:\n\n");
	
	p("  Cuando se eleva la temperatura de una disoluci%cn de un gas en un l%cquido, se observa, por lo com%cn, que el gas se desprende. Esto se produce porque la solubilidad de los gases en los l%cquidos disminuye al aumentar la temperatura. Ejemplo: Una bebida carb%cnica a temperatura ambiente tiene menos gas disuelto que si est%c fr%ca, esto se debe a que a mayor temperatura se disuelve menos cantidad de gas y parte de este se escapa.\n\n",162,161,163,161,162,160,161);
	
	p("  - Curvas de solubilidad:\n\n");
	
	p("  En general, la solubilidad de una sustancia en un determinado disolvente aumenta a medida que se eleva la temperatura.\n\n");
	
	system("pause");
	p("\n");
	
	p(" - M%ctodos de separaci%cn de mezclas homog%cneas:\n",130,162,130);
	p(" ----------------------------------------------\n\n");
	
	p(" Existen varios m%ctodos para separar los componentes de una mezcla homog%cnea o disoluci%cn. Entre los m%cs utilizados est%cn la cristalizaci%cn y la destilaci%cn simple.\n\n",130,130,162,160,160,162,162);
	
	p("  - Cristalizaci%cn: Esta t%ccnica consiste en hacer que cristalice un soluto s%clido con objeto de separarlo del disolvente en el que est%c disuelto. Para ello es conveniente evaporar parte del disolvente o dejar que el proceso ocurra a temperatura ambiente. Si el enfriamiento es r%cpido se obtienen cristales peque%cos y si es lento se formar%cn cristales de mayor tama%co.\n\n",162,130,162,160,160,164,160,164);
	 
	p("  - Destilaci%cn simple: Esta t%ccnica se emplea para separar l%cquidos de una disoluci%cn en funci%cn de sus diferentes puntos de ebullici%cn. Es el caso, de una disoluci%cn de dos componentes, uno de los cuales es vol%ctil. Cuando se hace hervir la disoluci%cn contenida en el matraz, el disolvente vol%ctil, que tiene un punto de ebullici%cn menor, se evapora y deja un residuo de soluto no vol%ctil. Para recoger el disolvente as%c evaporado se hace pasar por un condensador por el que circula agua fr%ca. Ah%c se condensa el vapor, que cae en un vaso o en un erlenmeyer.\n\n",162,130,161,162,162,162,162,160,162,160,162,160,161,161,161);
	
	p("   Ejemplo: Esta t%ccnica se emplea para separar mezclas de agua y alcohol. El alcohol es m%cs vol%ctil que el agua y es la primera sustancia en hervir, enfri%cndose despu%cs y separ%cndose as%c del agua.\n\n",130,160,160,160,130,160,161);
	
	fprintf(archivo,"La clasificación de las sustancias: elementos, compuestos y mezclas:\n");
	fprintf(archivo,"====================================================================\n\n");
	fprintf(archivo," - Clasificación de la materia:\n");
	fprintf(archivo," ------------------------------\n\n");
	fprintf(archivo," La materia la podemos encontrar en la naturaleza en forma de sustancias puras y de mezclas.\n\n");
	fprintf(archivo," Las sustancias puras son aquellas que no varían sea cual sea su estado. Se dividen en dos grandes grupos: Elementos y Compuestos.\n\n");
	fprintf(archivo,"  - Elementos: Son sustancias puras que no pueden descomponerse en otras sustancias puras más sencillas por ningún procedimiento. Ejemplo: Todos los elementos de la tabla periódica: Oxígeno, hierro, carbono, sodio, cloro, cobre, etc. Se representan mediante su símbolo químico y se conocen 115 en la actualidad.\n\n");
	fprintf(archivo,"  - Compuestos: Son sustancias puras que están constituidas por 2 o más elementos combinados en proporciones fijas. Los compuestos se pueden descomponer mediante procedimientos químicos en los elementos que los constituyen. Ejemplo:  Agua, de fórmula H2O, está constituida por los elementos hidrógeno (H) y oxígeno (O) y se puede descomponer en ellos mediante la acción de una corriente eléctrica (electrólisis). Los compuestos se representan mediante fórmulas químicas en las que se especifican los elementos que forman el compuesto y el número de átomos de cada uno de ellos que compone la molécula. Ejemplo: En el agua hay 2 átomos del elemento hidrógeno y 1 átomo del elemento oxígeno formando la molécula H2O.\n\n");
	fprintf(archivo," Cuando una sustancia pura está formada por un solo tipo de elemento, se dice que es una sustancia simple. Esto ocurre cuando la molécula contiene varios átomos pero todos son del mismo elemento. Ejemplo: Oxígeno gaseoso (O2), ozono (O3), etc. Están constituidas sus moléculas por varios átomos del elemento oxígeno.\n\n");
	fprintf(archivo," Las mezclas se encuentran formadas por 2 o más sustancias puras. Su composición es variable. Se distinguen dos grandes grupos: Mezclas homogéneas y Mezclas heterogéneas.\n\n");
	fprintf(archivo,"  - Mezclas homogéneas: También llamadas Disoluciones. Son mezclas en las que no se pueden distinguir sus componentes a simple vista. Ejemplo: Disolución de sal en agua, el aire, una aleación de oro y cobre, etc.\n\n");
	fprintf(archivo,"  - Mezclas heterogéneas: Son mezclas en las que se pueden distinguir a los componentes a simple vista. Ejemplo: Agua con aceite, granito, arena en agua, etc.\n\n");
	fprintf(archivo," - Métodos de separación de mezclas heterogéneas:\n");
	fprintf(archivo," ------------------------------------------------\n\n");
	fprintf(archivo," Los procedimientos físicos más empleados para separar los componentes de una mezcla heterogénea son: la filtración, la decantación y la separación magnética. Estos métodos de separación son bastante sencillos por el hecho de que en estas mezclas se distinguen muy bien los componentes.\n\n");
	fprintf(archivo,"  - Filtración: Este procedimiento se emplea para separar un líquido de un sólido insoluble. Ejemplo: Separación de agua con arena. A través de materiales porosos como el papel filtro, algodón o arena se puede separar un sólido que se encuentra suspendido en un líquido. Estos materiales permiten solamente el paso del líquido reteniendo el sólido.\n\n");
	fprintf(archivo,"  - Decantación: Esta técnica se emplea para separar 2 líquidos no miscibles entre sí. Ejemplo: Agua y aceite. La decantación se basa en la diferencia de densidad entre los dos componentes, que hace que dejados en reposo, ambos se separen hasta situarse el más denso en la parte inferior del envase que los contiene. De esta forma, podemos vaciar el contenido por arriba (si queremos tomar el componente menos denso) o por abajo (si queremos tomar el más denso).\n\n");
	fprintf(archivo," En la separación de dos líquidos no miscibles, como el agua y el aceite, se utiliza un embudo de decantación que consiste en un recipiente transparente provisto de una llave en su parte inferior. Al abrir la llave, pasa primero el líquido de mayor densidad y cuando éste se ha agotado se impide el paso del otro líquido cerrando la llave. La superficie de separación entre ambos líquidos se observa en el tubo estrecho de goteo.\n\n");
	fprintf(archivo,"  - Separación magnética: Esta técnica sirve para separar sustancias magnéticas de otras que no lo son. Al aproximar a la mezcla el imán, este atrae a las limaduras de hierro, que se separan así del resto de la mezcla.\n\n");
	fprintf(archivo," - Las disoluciones:\n");
	fprintf(archivo," -------------------\n\n");
	fprintf(archivo," Una disolución es una mezcla homogénea formada por 2 o más sustancias puras en proporción variable. Las disoluciones pueden ser binarias (2 componentes), ternarias (3 componentes), etc. Ejemplo: Una mezcla de agua con sal es una disolución.\n\n");
	fprintf(archivo," El componente de la disolución que se encuentra en mayor cantidad se llama disolvente y el o los que aparecen en menor cantidad se llaman solutos. Ejemplo: En una disolución de sal en agua, la sal es el soluto y el agua es el disolvente.\n\n");
	fprintf(archivo," Las disoluciones binarias se clasifican según el estado de agregación en que se encuentran soluto y disolvente.\n\n");
	fprintf(archivo," - Concentración de una disolución:\n");
	fprintf(archivo," Las disoluciones pueden clasificarse en concentradas o diluidas según la cantidad de soluto sea grande o pequeña con respecto a la cantidad de disolvente. Pero estos términos son cualitativos, no dan una cantidad exacta medible. Para ello, se emplea el término concentración.\n\n");
	fprintf(archivo," La concentración de una disolución es la cantidad de soluto que hay disuelto en una determinada cantidad de disolvente o en una determinada cantidad de disolución.\n\n");
	fprintf(archivo," Existen distintas formas de expresar la concentración de una disolución:\n\n");
	fprintf(archivo,"  - Tanto por ciento en masa:\n\n");
	fprintf(archivo,"   Es la masa de soluto (en gramos) que hay en 100 gramos de disolución.\n\n");
	fprintf(archivo,"    % en masa del soluto = (masa de soluto / masa de disolución) x 100.\n\n");
	fprintf(archivo,"  - Tanto por ciento en volumen:\n\n");
	fprintf(archivo,"   Es el volumen de soluto que hay en 100 volúmenes de disolución.\n\n");
	fprintf(archivo,"    % en volumen del soluto = (volumen de soluto / volumen de disolución) x 100.\n\n");
	fprintf(archivo,"  - Concentración en masa:\n\n");
	fprintf(archivo,"   Es la masa de soluto que hay disuelta por cada unidad de volumen de disolución.\n\n");
	fprintf(archivo,"    Concentración en masa = masa de soluto / volumen de disolución.\n\n");
	fprintf(archivo,"    La unidad de concentración en masa, es el kg/m³, pero en la práctica se emplea el g/l.\n\n");
	fprintf(archivo," - Solubilidad:\n");
	fprintf(archivo," --------------\n\n");
	fprintf(archivo," La cantidad de soluto que se puede disolver en una cantidad determinada de un disolvente es limitada. El azúcar, por ejemplo, es soluble en agua, pero si en un vaso de agua añadimos cada vez más y más azúcar, llegará un momento en el que esta ya no se disuelva más y se deposite en el fondo. Además, se disuelve más cantidad de azúcar en agua caliente que en agua fría.\n\n");
	fprintf(archivo," La cantidad máxima (en gramos) de cualquier soluto que se puede disolver en 100 g de un disolvente a una temperatura dada se denomina solubilidad de ese soluto a esa temperatura. Así, la solubilidad se expresa en gramos de soluto por 100 g de disolvente.\n\n");
	fprintf(archivo," La solubilidad de una sustancia pura en un determinado disolvente y a una temperatura dada es otra de sus propiedades características.\n\n");
	fprintf(archivo," Cuando una disolución contiene la máxima cantidad posible de soluto disuelto a una temperatura dada, decimos que está saturada a esa temperatura. En este caso, si añadimos más soluto, este se quedará sin disolver.\n\n");
	fprintf(archivo,"  - La solubilidad de los gases:\n\n");
	fprintf(archivo,"  Cuando se eleva la temperatura de una disolución de un gas en un líquido, se observa, por lo común, que el gas se desprende. Esto se produce porque la solubilidad de los gases en los líquidos disminuye al aumentar la temperatura. Ejemplo: Una bebida carbónica a temperatura ambiente tiene menos gas disuelto que si está fría, esto se debe a que a mayor temperatura se disuelve menos cantidad de gas y parte de este se escapa.\n\n");
	fprintf(archivo,"  - Curvas de solubilidad:\n\n");
	fprintf(archivo,"  En general, la solubilidad de una sustancia en un determinado disolvente aumenta a medida que se eleva la temperatura.\n\n");
	fprintf(archivo," - Métodos de separación de mezclas homogéneas:\n");
	fprintf(archivo," ----------------------------------------------\n\n");
	fprintf(archivo," Existen varios métodos para separar los componentes de una mezcla homogénea o disolución. Entre los más utilizados están la cristalización y la destilación simple.\n\n");
	fprintf(archivo,"  - Cristalización: Esta técnica consiste en hacer que cristalice un soluto sólido con objeto de separarlo del disolvente en el que está disuelto. Para ello es conveniente evaporar parte del disolvente o dejar que el proceso ocurra a temperatura ambiente. Si el enfriamiento es rápido se obtienen cristales pequeños y si es lento se formarán cristales de mayor tamaño.\n\n");
	fprintf(archivo,"  - Destilación simple: Esta técnica se emplea para separar líquidos de una disolución en función de sus diferentes puntos de ebullición. Es el caso, de una disolución de dos componentes, uno de los cuales es volátil. Cuando se hace hervir la disolución contenida en el matraz, el disolvente volátil, que tiene un punto de ebullición menor, se evapora y deja un residuo de soluto no volátil. Para recoger el disolvente así evaporado se hace pasar por un condensador por el que circula agua fría. Ahí se condensa el vapor, que cae en un vaso o en un erlenmeyer.\n\n");
	fprintf(archivo,"   Ejemplo: Esta técnica se emplea para separar mezclas de agua y alcohol. El alcohol es más volátil que el agua y es la primera sustancia en hervir, enfriándose después y separándose así del agua.\n\n");
	
	fclose(archivo);
}
