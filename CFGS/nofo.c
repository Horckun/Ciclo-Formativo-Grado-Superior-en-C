void nofo() {
	FILE *archivo;
	archivo = fopen("Nomenclatura y formulación IUPAC para estos compuestos.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Nomenclatura y formulaci%cn IUPAC para estos compuestos:\n",162);
	p("=======================================================\n\n");
	p("El t%crmino latino nomenclatura se refiere a una lista de nombres, al igual que al nomenclador; esta palabra puede indicar un proveedor o el locutor de los nombres, en qu%cmica org%cnica es una metodolog%ca establecida para denominar y agrupar los compuestos org%cnicos.\n\n",130,161,160,161,160);
	p("Nombrar 'cosas' es una parte de nuestra comunicaci%cn en general por uso de palabras y el lenguaje: es un aspecto de la taxonom%ca cotidiana para distinguir los objetos de nuestra experiencia, junto con sus similitudes y diferencias, para identificar, nombrar y clasificar. El uso de nombres, as%c como los diferentes tipos de sustantivos incorporados en diferentes idiomas, conecta a la nomenclatura con la ling%c%cstica te%crica, mientras que la forma de la estructura mental que se utiliza para comprender el mundo en relaci%cn con el significado de las palabras se estudia a trav%cs de la l%cgica conceptual y la filosof%ca del lenguaje.\n\n",162,161,161,129,161,162,162,130,162,161);
	p("Actualmente, la Uni%cn Internacional de Qu%cmica Pura y Aplicada (IUPAC) es la m%cxima autoridad en materia de nomenclatura qu%cmica, la cual se encarga de establecer las reglas correspondientes.\n\n",162,161,160,161);
	p("Las cadenas de Simplified Molecular Input Line Entry Specification (SMILES) se utilizan de forma com%cn para describir compuestos org%cnicos, y es una forma de 'denominarlos'.\n\n",163,160);
	
	system("pause");
	p("\n");
	
	p("- Sistemas de Nomenclatura:\n");
	p("---------------------------\n\n");
	p("Un sistema de nomenclatura consiste en una serie de procedimientos en el cual se toma como referencia un compuesto patr%cn y por medio de descriptores de modificaci%cn de estructura, composici%cn o conectividad se define el nombre del compuesto. Dichos descriptores pueden presentarse en el nombre como lexemas, sufijos, prefijos, infijos, n%cmeros o letras griegas. Los sistemas m%cs comunes de nomenclatura son:\n\n",162,162,162,163,160);
	p(" - Nomenclatura de sustituci%cn:\n\n",162);
	p(" La nomenclatura sustitutiva implica el intercambio de uno o m%cs %ctomos de hidr%cgeno por otro %ctomo o grupo.\n\n",160,160,162,160);
	p(" Un sustituyente es una partici%cn molecular (es decir, no representa a una unidad molecular ni a un compuesto) que tiene uno (univalente) o varios (multivalente) enlaces libres, disponibles para una operaci%cn de intercambio de hidr%cgeno. Ejemplos de sustituyentes son el metilo (CH3—), etilo (CH3-CH2—), carboxilo (HOOC—) o el 2-hidroxipropilo (CH3-CH(OH)-CH2—). En muchas ocasiones, cuando la sustituci%cn se lleva a cabo por %ctomos en determinado patr%cn de conectividad, se denominan grupos funcionales y estos pueden ser denominados reemplazando el sufijo del hidruro padre por un sufijo funcional.\n\n",162,162,162,162,160,162);
	p(" - Nomenclatura radicofuncional:\n");
	p(" La nomenclatura radicofuncional considera dos especies qu%cmicas: una equivalente a un ani%cn y otra equivalente a un cati%cn o un sustituyente (no necesariamente se encuentran enlazados i%cnicamente en el compuesto; solo es una construcci%cn hipot%ctica). La especie tipo ani%cn se nombra primero como sustantivo y el cati%cn (o sustituyente) se nombra como adjetivo (utiliz%cndose el sufijo '-ico') o se adjetiva con la preposici%cn 'de'.\n\n",161,162,162,162,162,130,162,162,160,162);
	
	system("pause");
	p("\n");
	
	p(" - Nomenclatura de reemplazo:\n\n");
	p(" La nomenclatura de reemplazo implica el intercambio de un %ctomo de carbono por un hetero%ctomo. Se utilizan sobre todo en:\n\n",160,160);
	p("  - prefijos especiales relacionados con el %ctomo a reemplazar, que por regla general terminan en 'a'.\n",160);
	p("  - n%cmeros que indican la posici%cn del %ctomo reemplazado.\n\n",163,162,160);
	p(" Tambi%cn se puede utilizar nomenclatura de reemplazo para el ox%cgeno. En este caso se utilizan infijos que terminan en '-o-'.\n\n",130,161);
	p(" - Nomenclatura aditiva:\n\n");
	p(" El sistema de nomenclatura aditiva es utilizada por lo general en compuestos patr%cn insaturados, arom%cticos o con pares libres; los compuestos se nombran como derivados de adici%cn (Por lo general de hidr%cgeno) sobre las insaturaciones o los pares libres. Pueden utilizarse la numeraci%cn posicional, prefijos o infijos de adici%cn.\n\n",162,160,162,162,162,162);
	p(" - Nomenclatura multiplicativa:\n\n");
	p(" La nomenclatura multiplicativa se utiliza cuando dos o m%cs unidades repetidas, ya sean simples o complejas, se conectan por medio un grupo o %ctomo. En este caso se utilizan numerales de posici%cn para indicar el sitio de conexi%cn, se menciona el %ctomo o grupo vinculante (Puente), prefijos de multiplicidad, localizadores (distinguidos por ap%cstrofos, el n%cmero con ap%cstrofo se denomina primado) y el nombre de la unidad repetida como compuesto (no como sustituyente).\n\n",160,160,162,162,160,162,163,162);
	
	system("pause");
	p("\n");
	
	p(" - Sistemas especiales de nomenclatura:\n\n");
	p(" Los sistemas especiales de nomenclatura se establecieron para nombrar compuestos org%cnicos cuyos esqueletos tienen un grado de complejidad mayor a los sistemas ac%cclicos y monoc%cclicos y requieren consideraciones especiales. La estereoqu%cmica de los esqueletos tambi%cn genera descriptores especiales en los nombres de los compuestos.\n\n",160,161,161,161,130);
	p("  - Sistema de nomenclatura de fusi%cn: Un compuesto de fusi%cn considera dos sistemas c%cclicos que comparten un enlace covalente. Este sistema establece definiciones y descriptores para los tipos de fusi%cn, la orientaci%cn, cantidad y tipo de anillos fusionados, numeraci%cn, sustituyentes y nombres triviales.\n\n",162,162,161,162,162,162);
	p("  - Sistema de nomenclatura de von Baeyer: Un nombre de von Baeyer se genera cuando a un compuesto monoc%cclico se le a%cade una cadena lateral de carbono que se vuelve a conectar en el monociclo para formar un nuevo compuesto bic%cclico. El fundamento es la definici%cn y descripci%cn de los carbonos de conexi%cn (Cabezas de puente) y los carbonos que forman cada ciclo (Carbonos puente).\n\n",161,164,161,162,162,162);
	p("  - Sistema de nomenclatura de Hantzsch-Widman: Un compuesto heteroc%cclico es aquel que forma una estructura c%cclica en la cual al menos uno de los %ctomos que la conforman no es carbono. Este sistema genera nombres para compuestos monoheteroc%cclicos patr%cn de no m%cs de 10 miembros. Los descriptores surgen a partir del tipo y cantidad de hetero%ctomos, saturaci%cn y n%cmero de miembros del ciclo.\n\n",161,161,160,161,162,160,160,162,163);
	p("  - Sistema de nomenclatura de ciclofanos: Un ciclofano es un compuesto polic%cclico que consiste en un sistema de dos o m%cs ciclos unidos por dos o m%cs cadenas que los conectan en carbonos diferentes. El principio es visualizar al ciclofano como un hiperciclo y a cada ciclo incluido como un hiper%ctomo.\n\n",161,160,160,160);
	
	system("pause");
	p("\n");
	
	p("  - Sistema de nomenclatura de iones y radicales: Esta nomenclatura define c%cmo nombrar especies con electrones no apareados (Radicales libres), cargadas negativa (Aniones) o positivamente (Cationes).\n\n",162);
	p("  - Sistema de nomenclatura estereoqu%cmica: Este sistema define descriptores para nombrar propiedades geom%ctricas y estereoqu%cmicas que distinguen a los compuestos por su configuraci%cn. Se encuentran incluidos el sistema cis-trans, el sistema de Cahn-Ingold-Prelog y el sistema D-L.\n\n",161,130,161,162);
	p("  - Sistema de nomenclatura de productos naturales: La mayor%ca de los productos naturales tienen sus nombres a partir de nombres triviales de estructuras base, y se establecen descriptores especiales, tales como numeraci%cn, operaciones estructurales (Sustituci%cn, reemplazo, adici%cn, homologaci%cn, eliminaci%cn, ciclaci%cn, contracci%cn o expansi%cn de anillo), polimerizaci%cn o estereoqu%cmica.\n\n",161,162,162,162,162,162,162,162,162,162,161);
	p("Existen diversas convenciones que establecen compuestos patr%cn con nombres triviales, tales como los sistemas de nomenclatura de sac%cridos, %ccidos grasos, esfingol%cpidos, nucle%ctidos, terpenos, esteroides, carotenos, tetrapirroles, flavonoides, alcaloides y amino%ccidos.\n\n",162,160,160,161,162,160);
	
	fprintf(archivo,"Nomenclatura y formulación IUPAC para estos compuestos:\n");
	fprintf(archivo,"=======================================================\n\n");
	fprintf(archivo,"El término latino nomenclatura se refiere a una lista de nombres, al igual que al nomenclador; esta palabra puede indicar un proveedor o el locutor de los nombres, en química orgánica es una metodología establecida para denominar y agrupar los compuestos orgánicos.\n\n");
	fprintf(archivo,"Nombrar 'cosas' es una parte de nuestra comunicación en general por uso de palabras y el lenguaje: es un aspecto de la taxonomía cotidiana para distinguir los objetos de nuestra experiencia, junto con sus similitudes y diferencias, para identificar, nombrar y clasificar. El uso de nombres, así como los diferentes tipos de sustantivos incorporados en diferentes idiomas, conecta a la nomenclatura con la lingüística teórica, mientras que la forma de la estructura mental que se utiliza para comprender el mundo en relación con el significado de las palabras se estudia a través de la lógica conceptual y la filosofía del lenguaje.\n\n");
	fprintf(archivo,"Actualmente, la Unión Internacional de Química Pura y Aplicada (IUPAC) es la máxima autoridad en materia de nomenclatura química, la cual se encarga de establecer las reglas correspondientes.\n\n");
	fprintf(archivo,"Las cadenas de Simplified Molecular Input Line Entry Specification (SMILES) se utilizan de forma común para describir compuestos orgánicos, y es una forma de 'denominarlos'.\n\n");
	fprintf(archivo,"- Sistemas de Nomenclatura:\n");
	fprintf(archivo,"---------------------------\n\n");
	fprintf(archivo,"Un sistema de nomenclatura consiste en una serie de procedimientos en el cual se toma como referencia un compuesto patrón y por medio de descriptores de modificación de estructura, composición o conectividad se define el nombre del compuesto. Dichos descriptores pueden presentarse en el nombre como lexemas, sufijos, prefijos, infijos, números o letras griegas. Los sistemas más comunes de nomenclatura son:\n\n");
	fprintf(archivo," - Nomenclatura de sustitución:\n\n");
	fprintf(archivo," La nomenclatura sustitutiva implica el intercambio de uno o más átomos de hidrógeno por otro átomo o grupo.\n\n");
	fprintf(archivo," Un sustituyente es una partición molecular (es decir, no representa a una unidad molecular ni a un compuesto) que tiene uno (univalente) o varios (multivalente) enlaces libres, disponibles para una operación de intercambio de hidrógeno. Ejemplos de sustituyentes son el metilo (CH3—), etilo (CH3-CH2—), carboxilo (HOOC—) o el 2-hidroxipropilo (CH3-CH(OH)-CH2—). En muchas ocasiones, cuando la sustitución se lleva a cabo por átomos en determinado patrón de conectividad, se denominan grupos funcionales y estos pueden ser denominados reemplazando el sufijo del hidruro padre por un sufijo funcional.\n\n");
	fprintf(archivo," - Nomenclatura radicofuncional:\n");
	fprintf(archivo," La nomenclatura radicofuncional considera dos especies químicas: una equivalente a un anión y otra equivalente a un catión o un sustituyente (no necesariamente se encuentran enlazados iónicamente en el compuesto; solo es una construcción hipotética). La especie tipo anión se nombra primero como sustantivo y el catión (o sustituyente) se nombra como adjetivo (utilizándose el sufijo '-ico') o se adjetiva con la preposición 'de'.\n\n");
	fprintf(archivo," - Nomenclatura de reemplazo:\n\n");
	fprintf(archivo," La nomenclatura de reemplazo implica el intercambio de un átomo de carbono por un heteroátomo. Se utilizan sobre todo en:\n\n");
	fprintf(archivo,"  - prefijos especiales relacionados con el átomo a reemplazar, que por regla general terminan en 'a'.\n");
	fprintf(archivo,"  - números que indican la posición del átomo reemplazado.\n\n");
	fprintf(archivo," También se puede utilizar nomenclatura de reemplazo para el oxígeno. En este caso se utilizan infijos que terminan en '-o-'.\n\n");
	fprintf(archivo," - Nomenclatura aditiva:\n\n");
	fprintf(archivo," El sistema de nomenclatura aditiva es utilizada por lo general en compuestos patrón insaturados, aromáticos o con pares libres; los compuestos se nombran como derivados de adición (Por lo general de hidrógeno) sobre las insaturaciones o los pares libres. Pueden utilizarse la numeración posicional, prefijos o infijos de adición.\n\n");
	fprintf(archivo," - Nomenclatura multiplicativa:\n\n");
	fprintf(archivo," La nomenclatura multiplicativa se utiliza cuando dos o más unidades repetidas, ya sean simples o complejas, se conectan por medio un grupo o átomo. En este caso se utilizan numerales de posición para indicar el sitio de conexión, se menciona el átomo o grupo vinculante (Puente), prefijos de multiplicidad, localizadores (distinguidos por apóstrofos, el número con apóstrofo se denomina primado) y el nombre de la unidad repetida como compuesto (no como sustituyente).\n\n");
	fprintf(archivo," - Sistemas especiales de nomenclatura:\n\n");
	fprintf(archivo," Los sistemas especiales de nomenclatura se establecieron para nombrar compuestos orgánicos cuyos esqueletos tienen un grado de complejidad mayor a los sistemas acíclicos y monocíclicos y requieren consideraciones especiales. La estereoquímica de los esqueletos también genera descriptores especiales en los nombres de los compuestos.\n\n");
	fprintf(archivo,"  - Sistema de nomenclatura de fusión: Un compuesto de fusión considera dos sistemas cíclicos que comparten un enlace covalente. Este sistema establece definiciones y descriptores para los tipos de fusión, la orientación, cantidad y tipo de anillos fusionados, numeración, sustituyentes y nombres triviales.\n\n");
	fprintf(archivo,"  - Sistema de nomenclatura de von Baeyer: Un nombre de von Baeyer se genera cuando a un compuesto monocíclico se le añade una cadena lateral de carbono que se vuelve a conectar en el monociclo para formar un nuevo compuesto bicíclico. El fundamento es la definición y descripción de los carbonos de conexión (Cabezas de puente) y los carbonos que forman cada ciclo (Carbonos puente).\n\n");
	fprintf(archivo,"  - Sistema de nomenclatura de Hantzsch-Widman: Un compuesto heterocíclico es aquel que forma una estructura cíclica en la cual al menos uno de los átomos que la conforman no es carbono. Este sistema genera nombres para compuestos monoheterocíclicos patrón de no más de 10 miembros. Los descriptores surgen a partir del tipo y cantidad de heteroátomos, saturación y número de miembros del ciclo.\n\n");
	fprintf(archivo,"  - Sistema de nomenclatura de ciclofanos: Un ciclofano es un compuesto policíclico que consiste en un sistema de dos o más ciclos unidos por dos o más cadenas que los conectan en carbonos diferentes. El principio es visualizar al ciclofano como un hiperciclo y a cada ciclo incluido como un hiperátomo.\n\n");
	fprintf(archivo,"  - Sistema de nomenclatura de iones y radicales: Esta nomenclatura define cómo nombrar especies con electrones no apareados (Radicales libres), cargadas negativa (Aniones) o positivamente (Cationes).\n\n");
	fprintf(archivo,"  - Sistema de nomenclatura estereoquímica: Este sistema define descriptores para nombrar propiedades geométricas y estereoquímicas que distinguen a los compuestos por su configuración. Se encuentran incluidos el sistema cis-trans, el sistema de Cahn-Ingold-Prelog y el sistema D-L.\n\n");
	fprintf(archivo,"  - Sistema de nomenclatura de productos naturales: La mayoría de los productos naturales tienen sus nombres a partir de nombres triviales de estructuras base, y se establecen descriptores especiales, tales como numeración, operaciones estructurales (Sustitución, reemplazo, adición, homologación, eliminación, ciclación, contracción o expansión de anillo), polimerización o estereoquímica.\n\n");
	fprintf(archivo,"Existen diversas convenciones que establecen compuestos patrón con nombres triviales, tales como los sistemas de nomenclatura de sacáridos, ácidos grasos, esfingolípidos, nucleótidos, terpenos, esteroides, carotenos, tetrapirroles, flavonoides, alcaloides y aminoácidos.\n\n");
	
	fclose(archivo);
}
