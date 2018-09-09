void deftrapen() {
	FILE *archivo;
	archivo = fopen("Definici�n de Trabajo. Potencia y energ�a.doc","w");
	if(archivo == NULL) {
		p("No se ha podido abrir el archivo.\n\n");
	}
	
	p("Definici%cn de Trabajo. Potencia y energ%ca:\n",162,161);
	p("==========================================\n\n");
	
	p("En la F%csica se habla de Trabajo Mec%cnico y se dice que una fuerza realiza trabajo cuando desplaza su punto de aplicaci%cn en su misma direcci%cn. Este trabajo tiene como finalidad explicar y precisar el significado de la energ%ca, trabajo y potencia en el %cmbito de las ciencias f%csicas, valoraremos la necesidad de tal precisi%cn para abordar muchos hechos cotidianos, investigar nuevas aplicaciones. Comprobaremos que el c%clculo de un trabajo (W), de una potencia (P) desarrollada por una m%cquina o el control de la energ%ca (E) consumida o almacenada, resultan muy %ctiles para el mantenimiento y desarrollo de la sociedad en que vivimos.\n\n",161,160,162,162,161,160,161,162,160,160,161,163);
	
	system("pause");
	p("\n");
	
	p("- Introducci%cn al trabajo mec%cnico:\n",162,160);
	p("-----------------------------------\n\n");
	
	p("El trabajo mec%cnico es una magnitud escalar que depende del m%cdulo de una fuerza aplicada sobre un punto material y el desplazamiento que esta le produce.\n\n",160,162);
	
	p("El trabajo que realiza una fuerza sobre un cuerpo equivale a la energ%ca necesaria para desplazar este cuerpo. El trabajo es una magnitud f%csica escalar que se representa con la letra W (del ingl%cs Work) y se expresa en unidades de energ%ca, esto es en julios o joules (J) en el Sistema Internacional de Unidades.\n\n",161,161,130,161);
	
	p("Ya que por definici%cn el trabajo es un tr%cnsito de energ%ca, nunca se refiere a %cl como incremento de trabajo. Se expresar%ca de la siguiente manera:\n\n",162,160,161,130,161);
	
	p("W = F * d = F * d * cos * a\n\n");
	
	p("Donde F es el m%cdulo de la fuerza, d es el desplazamiento y a es el %cngulo que forman entre s%c el vector fuerza y el vector desplazamiento. Cuando el vector fuerza es perpendicular al vector desplazamiento del cuerpo sobre el que se aplica, dicha fuerza no realiza trabajo alguno. Asimismo, si no hay desplazamiento, el trabajo tambi%cn ser%c nulo.\n\n",162,160,161,130,160);
	
	system("pause");
	p("\n");
	
	p("- Energ%ca:\n",161);
	p("----------\n\n");
	
	p("El concepto de energ%ca es uno de los m%cs importantes en F%csica y en general en casi cualquier ciencia experimental. Aunque estamos muy acostumbrados a emplearlo y forma parte de nuestro vocabulario habitual, es un concepto muy dif%ccil de definir con precisi%cn. Se puede definir informalmente la energ%ca que posee un cuerpo como 'una medida de su capacidad para realizar trabajo'.\n\n",161,160,161,161,162,161);
	
	p("La energ%ca es una magnitud abstracta que est%c ligada al estado din%cmico de un sistema cerrado y que permanece invariable con el tiempo. Se trata de una abstracci%cn que se le asigna al estado de un sistema f%csico. Debido a diversas propiedades, todos los cuerpos poseen energ%ca.\n\n",161,160,160,162,161,161);
	
	system("pause");
	p("\n");
	
	p("- Energ%ca cin%ctica:\n",161,130);
	p("-------------------\n\n");
	
	p("Es la energ%ca que un objeto tiene debido a su movimiento. La energ%ca cin%ctica depende de la masa y la velocidad del objeto seg%cn la siguiente ecuaci%cn:\n\n",161,161,130,163,162);
	
	p(" E = %c m v%c\n\n",171,253);
	
	p("Donde 'm' es la masa del objeto y v%c la velocidad del mismo elevada al cuadrado. El valor de E tambi%cn pude derivarse de la ecuaci%cn E = (m * a) 'd' donde 'a' es la aceleraci%cn de la masa 'm' y 'd' es la distancia a lo largo de la cual se acelera.\n\n",253,130,162,162);
	
	p("Las relaciones entre la energ%ca cin%ctica y la energ%ca potencial, pueden ilustrarse elevando un objeto y dej%cndolo caer.\n\n",161,130,161,160);
	
	p("Cuando el objeto se levanta desde una superficie se le aplica una fuerza vertical. Al actuar esa fuerza a lo largo de una distancia, se transfiere energ%ca al objeto. La energ%ca asociada a un objeto situado a determinada altura sobre una superficie se denomina energ%ca potencial. Si se deja caer el objeto, la energ%ca potencial se convierte en energ%ca cin%ctica.\n\n",161,161,161,161,161,130);
	
	system("pause");
	p("\n");
	
	p("En resumen:\n\n");
	
	p("- La energ%ca cin%ctica es siempre mayor o igual que cero. No existen energ%cas cin%cticas negativas.\n\n",161,130,161,130);
	
	p("- Para una velocidad dada, la energ%ca cin%ctica es directamente proporcional a la masa del cuerpo, y para una masa dada es directamente proporcional al cuadrado del m%cdulo de su velocidad. La influencia de la velocidad es superior a la de la masa.\n\n",161,130,162);
	
	p("- La energ%ca cin%ctica de un cuerpo depende del m%cdulo de su velocidad, pero no de la direcci%cn o sentido de esta. Todos los objetos de la misma masa que se mueven con la misma rapidez tienen la misma energ%ca cin%ctica.\n\n",161,130,162,162,161,130);
	
	p("- La energ%ca cin%ctica de un cuerpo depende del sistema de referencia desde el que se estudia.\n\n",161,130);
	
	p("Existe un importante teorema relacionado con la energ%ca cin%ctica, el llamado teorema de la energ%ca cin%ctica o de las fuerzas vivas: El trabajo total realizado sobre un cuerpo es igual a su variaci%cn de energ%ca cin%ctica.\n\n",161,130,161,130,162,161,130);
	
	p("W total = D * E * C\n\n");
	
	p("En consecuencia, si no ha cambiado la rapidez con que se mueve un cuerpo, el trabajo total realizado sobre %cl es nulo.\n\n",130);
	
	system("pause");
	p("\n");
	
	p("- Energ%ca potencial gravitatoria:\n",161);
	p("---------------------------------\n\n");
	
	p("La energ%ca potencial gravitatoria es la energ%ca asociada con la fuerza gravitatoria. Esta depender%c de la altura relativa de un objeto a alg%cn punto de referencia, la masa, y la fuerza de la gravedad. Por ejemplo, si un libro apoyado en una mesa es elevado, una fuerza externa estar%c actuando en contra de la fuerza gravitacional. Si el libro cae, el mismo trabajo que el empleado para levantarlo, ser%c efectuado por la fuerza gravitacional. Por esto, un libro a un metro del piso tiene menos energ%ca potencial que otro a dos metros, o un libro de mayor masa a la misma altura.\n\n",161,161,160,163,160,160,161);
	
	p("Si bien la fuerza gravitacional var%ca junto a la altura, la diferencia es muy peque%ca como para ser considerada, por lo que se considera a la aceleraci%cn de la gravedad como una constante.\n\n",161,164,162);
	
	p("Para estos casos en los que la variaci%cn de la gravedad es insignificante, se aplica la siguiente f%crmula:\n\n",162,162);
	
	p(" U = M * G * H\n\n");
	
	p("Donde U es la energ%ca potencial, M la masa, G la aceleraci%cn de la gravedad, y H la altura.\n\n",161,162);
	
	system("pause");
	p("\n");
	
	p("- Energ%ca potencial del resorte:\n",161);	
	p("--------------------------------\n\n");
	
	p("Se tiene un resorte en su posici%cn de equilibrio X sub0 con un extremo fijo y en el otro se encuentra adosada una masa M. Deformamos el resorte alarg%cndolo una distancia A mediante una fuerza aplicada a M.\n\n",162,160);
	
	p("La fuerza utilizada para deformar el resorte no es constante en todo el proceso. Como el resorte es un cuerpo el%cstico, la fuerza aplicada en cada instante depender%c de la distancia a la posici%cn de equilibrio. De esta manera, la magnitud de la fuerza variar%c entre la fuerza inicial (Fi = 0) y la fuerza final m%cxima (Ff = KA). As%c, la fuerza promedio aplicada durante el proceso de deformaci%cn ser%c:\n\n",160,160,162,160,160,161,162,160);
	
	p("     Fi + Ff   0 + KA   1     \n");
	p(" F = ------- = ------ = - * KA\n");
	p("        2        2      2     \n\n");
	
	system("pause");
	p("\n");
	
	p("En la distancia A de la posici%cn de equilibrio, la energ%ca mec%cnica total del resorte (E) es igual a la energ%ca potencial el%cstica:\n\n",162,161,160,161,160);
	
	p("           1      \n");
	p(" E = Epe = - * KA%c\n",253);
	p("           2      \n\n");
	
	system("pause");
	p("\n");
	
	p("Cuando se suelta el resorte, la energ%ca potencial el%cstica se convierte en energ%ca cin%ctica (Ec), permaneciendo constante la energ%ca mec%cnica total durante todo el recorrido. Esto significa que en un instante cualquiera del movimiento del resorte, cuando este est%c regresando a su posici%cn inicial de equilibrio, se debe cumplir:\n\n",161,160,161,130,161,160,160,162);
	
	p("     1         1         1    \n");
	p(" E = - * KA%c = - * Kx%c + - * mV%c\n",253,253,253);
	p("     2         2         2    \n\n");
	
	system("pause");
	p("\n");
	
	p("Donde X es una posici%cn intermedia entre X sub0 y A; V es la velocidad con la que la masa M pasa por la posici%cn X.\n\n",162,162);
	
	p("Cuando el resorte regresa a la posici%cn inicial X sub0, la masa se mueve con una velocidad m%cxima Vm%cx, de manera que la energ%ca mec%cnica total es igual a la energ%ca cin%ctica m%cxima:\n\n",162,160,160,161,160,161,130,160);
	
	p("     1         1         \n");
	p(" E = - * KA%c = - * mV%cm%cx\n",253,253,160);
	p("     2         2         \n\n");
	
	system("pause");
	p("\n");
	
	p("Como vemos, se ha producido un intercambio de energ%ca potencial el%cstica a energ%ca cin%ctica, manteni%cndose constante la energ%ca mec%cnica total durante todo el proceso. Si existe fricci%cn dentro del propio resorte o con alguna estructura externa, la energ%ca mec%cnica se disipar%ca y ya no permanecer%ca constante.\n\n",161,160,161,130,130,161,160,162,161,160,161,161);
	
	system("pause");
	p("\n");
	
	p("- Conservaci%cn de la energ%ca mec%cnica:\n",162,161,160);
	p("--------------------------------------\n\n");
	
	p("Los cuerpos poseen energ%ca y esa energ%ca puede transformarse de un tipo en otro. Igualmente los cuerpos pueden transferirse energ%ca de unos a otros. Sin embargo, la energ%ca total del universo permanece constante: no se conoce ning%cn proceso que cree o destruya energ%ca.\n\n",161,161,161,161,163,161);
	
	p("Este principio se conoce como principio de conservaci%cn de la energ%ca, y es uno de los pilares fundamentales de la F%csica.\n\n",162,161,161);
	
	p("El principio de la conservaci%cn de la energ%ca mec%cnica describe que la suma de la energ%ca cin%ctica y potencial de un objeto en ca%cda libre permanece constante en cualquier instante.\n\n",162,161,160,161,130,161);
	
	p("Existen dos formas en las que los cuerpos pueden intercambiar energ%ca:\n\n",161);
	
	p(" - Mediante la aplicaci%cn de una fuerza que realiza un trabajo. Cuando calculamos el trabajo realizado por una fuerza, estamos calculando la energ%ca que el cuerpo que realiza la fuerza da o quita al cuerpo que sufre la fuerza. Como la cantidad de energ%ca total ha de permanecer constante, si un cuerpo realiza un trabajo positivo sobre otro y por tanto le comunica una cierta cantidad de energ%ca, %cl ha de perder una cantidad equivalente de energ%ca. De la misma forma si le quita energ%ca %cl ha de ganar esa misma cantidad de energ%ca.\n\n",162,161,161,161,130,161,161,130,161);
	
	p(" - La segunda forma de transmitir energ%ca de un cuerpo a otro es colocando en contacto dos cuerpos que se encuentran a diferente temperatura. En ese caso pasa energ%ca del cuerpo m%cs caliente al m%cs fr%co hasta que las temperaturas de ambos se igualan. Se trata aqu%c de un flujo de energ%ca t%crmica y se da el nombre de calor a la energ%ca intercambiada por los dos cuerpos.\n\n",161,161,160,160,161,161,161,130,161);
	
	system("pause");
	p("\n");
	
	p("- Potencia:\n");
	p("-----------\n\n");
	
	p("La potencia es una magnitud eminentemente pr%cctica. La potencia es trabajo mec%cnico que incorpora en su valor el par%cmetro tiempo. Es decir, la potencia se expresa con un n%cmero que cuantifica el trabajo efectuado durante un lapso de tiempo. Mientras m%cs r%cpido se realiza el trabajo, la potencia que se desarrolla es mayor.\n\n",160,160,160,163,160,160);
	
	p("Su unidad en el S.I. es el vatio (W). 1 W = 1 J/s, es decir, una potencia de un vatio indica que se realiza un trabajo de un julio cada segundo. Se utiliza tambi%cn mucho el kilovatio (kw) y, sobre todo en ingenier%ca, el caballo de vapor (C.V.).\n\n",130,161);
	
	p(" 1 C.V. = 735 W\n\n");
	
	p("Al multiplicar potencia por tiempo nos da trabajo o energ%ca. El kW/h (kilovatio por hora) es una unidad de energ%ca (no se emplea para trabajo) que equivale a la energ%ca producida o consumida por un dispositivo con una potencia de 1 kW al funcionar durante una hora. Su equivalencia con el julio es:\n\n",161,161,161);
	
	p(" 1 kW/h = 3.600.000 J\n\n");
	
	system("pause");
	p("\n");
	
	p("La potencia en t%crminos generales, expresa la capacidad para ejecutar un trabajo en el menor tiempo posible. La expresi%cn nos da la potencia media durante un cierto intervalo de tiempo. La potencia instant%cnea, P, se obtiene al tomar el l%cmite de la potencia media cuando el intervalo de tiempo tiende a 0, es decir, es la derivada del trabajo realizado respecto al tiempo.\n\n",130,162,160,161);
	
	p("Se puede demostrar, a partir de la anterior definici%cn, que la potencia instant%cnea desarrollada por una fuerza determinada es igual al producto de la fuerza por la velocidad del punto donde se aplica por el coseno del %cngulo que forman fuerza y velocidad:\n\n",162,160,160);
	
	p(" P = F * V * cos * Q\n\n");
	
	p("Otro concepto muy importante en la pr%cctica es el de rendimiento, R. Se puede aplicar tanto al trabajo (o energ%ca) como a la potencia y se define como el cociente (multiplicado por 100 si queremos darlo en tanto por ciento) entre el trabajo/potencia %ctil (a veces lo llaman pr%cctico, real, etc) o energ%ca obtenida, y el trabajo que te%cricamente esperar%camos obtener del dispositivo (trabajo/potencia te%crica, esperada, etc) o la energ%ca/potencia consumida en realidad por el dispositivo.\n\n",160,161,163,160,161,162,161,162,161);
	
	p("     P %ctil * 1      \n",163);
	p(" R = ---------- * 100\n");
	p("     P te%crica       \n\n",162);
	
	system("pause");
	p("\n");
	
	p("- Ley de Hooke:\n");
	p("---------------\n\n");
	
	p("La Ley de Hooke describe fen%cmenos el%csticos como los que exhiben los resortes. Esta ley afirma que la deformaci%cn el%cstica que sufre un cuerpo es proporcional a la fuerza que produce tal deformaci%cn, siempre y cuando no se sobrepase el l%cmite de elasticidad.\n\n",162,160,162,160,162,161);
	
	p("La Fuerza que devuelve un resorte a su posici%cn de equilibrio es proporcional al valor de la distancia que se desplaza de esa posici%cn.\n\n",162,162);
	
	p("Cuando un objeto se somete a fuerzas externas, sufre cambios de tama%co, o de forma, o de ambos. Esos cambios dependen del arreglo de los %ctomos y su enlace en el material. Cuando un peso jala y estira a otro y cuando se le quita este peso y regresa a su tama%co normal decimos que es un cuerpo el%cstico.\n\n",164,160,164,160);
	
	p("La ley de Hooke dice que la cantidad de estiramiento o de compresi%cn (cambio de longitud), es directamente proporcional a la fuerza aplicada.\n\n",162);
	
	system("pause");
	p("\n");
	
	p("- Impulso o %cmpetu:\n",161);
	p("-------------------\n\n");
	
	p("Se llama impulso a la magnitud f%csica, llamado normalmente I, definida como la variaci%cn en el momento lineal que experimenta un objeto en un sistema cerrado. El t%crmino difiere de lo que cotidianamente conocemos como impulso y fue acu%cado por Isaac Newton en su segunda ley, donde lo llam%c 'vis motrix', refiri%cndose a una especie de fuerza del movimiento.\n\n",161,162,130,164,162,130);
	
	p("El impulso es el producto entre una fuerza y el tiempo durante el cual est%c aplicada. Es una magnitud vectorial. El m%cdulo del impulso se representa como el %crea bajo la curva de la fuerza en el tiempo.\n\n",160,162,160);
	
	system("pause");
	p("\n");
	
	p("- Cantidad de movimiento o momentum\n");
	p("-----------------------------------\n\n");
	
	p("La cantidad de movimiento de un objeto de masa M y velocidad V es igual al producto de la masa y la velocidad. Tambi%cn puede verse que un barco de grandes dimensiones que navegue a baja velocidad tiene una gran cantidad de movimiento, como lo tiene una bala peque%ca disparada a alta velocidad. Y por supuesto, un objeto enorme que se desplace a alta velocidad.\n\n",130,164);
	
	p("Cuando una bala o un cami%cn chocan contra una pared, se ejerce contra %csta una gran fuerza. Esa fuerza viene de un cambio de velocidad. La fuerza de impacto es proporcional a la raz%cn de cambio de velocidad del objeto en movimiento. Y a mayor masa de ese objeto, mayor fuerza; as%c, la fuerza de impacto es tambi%cn proporcional a la masa del objeto en movimiento.\n\n",162,130,162,161,130);
	
	p("Cuando ocurre un cambio en la masa y en la velocidad en ambas a la vez, existir%c un cambio en la cantidad de movimiento del cuerpo considerado. Si la masa permanece constante pero la velocidad del cuerpo cambia de V1 a V2 se tendr%c que calcular lo siguiente:\n\n",160,160);
	
	p(" P1 = M * V1 en el primer instante.\n\n");
	
	p(" P2 = M * V2 en el segundo instante.\n\n");
	
	system("pause");
	p("\n");
	
	p("La variaci%cn de la cantidad de movimiento ser%c la siguiente:\n\n",162,160);
	
	p(" P2 - P1 = M * V2 - M * V1 -> P2 - P1 = M * (V2 - V1).\n\n");
	
	p(" P = M * V.\n\n");
	
	p("Estas ideas son congruentes con la segunda ley de Newton:\n\n");
	
	p(" F = M * A\n\n");
	
	p("La segunda ley de Newton, en t%crminos de la cantidad de movimiento, establece que la fuerza sobre un objeto es igual a la rapidez de cambio de la cantidad de movimiento del objeto.\n\n",130);
	
	p("Una bala se acelera cuando se ejerce una fuerza sobre ella. No obstante, depende de algo m%cs que de su masa y la fuerza impartida. La velocidad final depende del tiempo. Una fuerza sostenida por un tiempo largo empuja la bala a una velocidad mayor que la misma fuerza aplicada brevemente. Se puede expresar la segunda ley de Newton de otra forma, haciendo m%cs evidente el factor tiempo, sustituyendo el t%crmino para la aceleraci%cn por su definici%cn.\n\n",160,160,130,162,162);
	
	fprintf(archivo,"Definici�n de Trabajo. Potencia y energ�a:\n");
	fprintf(archivo,"==========================================\n\n");	
	fprintf(archivo,"En la F�sica se habla de Trabajo Mec�nico y se dice que una fuerza realiza trabajo cuando desplaza su punto de aplicaci�n en su misma direcci�n. Este trabajo tiene como finalidad explicar y precisar el significado de la energ�a, trabajo y potencia en el �mbito de las ciencias f�sicas, valoraremos la necesidad de tal precisi�n para abordar muchos hechos cotidianos, investigar nuevas aplicaciones. Comprobaremos que el c�lculo de un trabajo (W), de una potencia (P) desarrollada por una m�quina o el control de la energ�a (E) consumida o almacenada, resultan muy �tiles para el mantenimiento y desarrollo de la sociedad en que vivimos.\n\n");	
	fprintf(archivo,"- Introducci�n al trabajo mec�nico:\n");
	fprintf(archivo,"-----------------------------------\n\n");	
	fprintf(archivo,"El trabajo mec�nico es una magnitud escalar que depende del m�dulo de una fuerza aplicada sobre un punto material y el desplazamiento que esta le produce.\n\n");	
	fprintf(archivo,"El trabajo que realiza una fuerza sobre un cuerpo equivale a la energ�a necesaria para desplazar este cuerpo. El trabajo es una magnitud f�sica escalar que se representa con la letra W (del ingl�s Work) y se expresa en unidades de energ�a, esto es en julios o joules (J) en el Sistema Internacional de Unidades.\n\n");	
	fprintf(archivo,"Ya que por definici�n el trabajo es un tr�nsito de energ�a, nunca se refiere a �l como incremento de trabajo. Se expresar�a de la siguiente manera:\n\n");	
	fprintf(archivo,"W = F * d = F * d * cos\n\n");	
	fprintf(archivo,"Donde F es el m�dulo de la fuerza, d es el desplazamiento y a es el �ngulo que forman entre s� el vector fuerza y el vector desplazamiento. Cuando el vector fuerza es perpendicular al vector desplazamiento del cuerpo sobre el que se aplica, dicha fuerza no realiza trabajo alguno. Asimismo, si no hay desplazamiento, el trabajo tambi�n ser� nulo.\n\n");	
	fprintf(archivo,"- Energ�a:\n");
	fprintf(archivo,"----------\n\n");	
	fprintf(archivo,"El concepto de energ�a es uno de los m�s importantes en F�sica y en general en casi cualquier ciencia experimental. Aunque estamos muy acostumbrados a emplearlo y forma parte de nuestro vocabulario habitual, es un concepto muy dif�cil de definir con precisi�n. Se puede definir informalmente la energ�a que posee un cuerpo como 'una medida de su capacidad para realizar trabajo'.\n\n");	
	fprintf(archivo,"La energ�a es una magnitud abstracta que est� ligada al estado din�mico de un sistema cerrado y que permanece invariable con el tiempo. Se trata de una abstracci�n que se le asigna al estado de un sistema f�sico. Debido a diversas propiedades, todos los cuerpos poseen energ�a.\n\n");
	fprintf(archivo,"- Energ�a cin�tica:\n");
	fprintf(archivo,"-------------------\n\n");
	fprintf(archivo,"Es la energ�a que un objeto tiene debido a su movimiento. La energ�a cin�tica depende de la masa y la velocidad del objeto seg�n la siguiente ecuaci�n:\n\n");
	fprintf(archivo," E = � m v�\n\n");
	fprintf(archivo,"Donde 'm' es la masa del objeto y v� la velocidad del mismo elevada al cuadrado. El valor de E tambi�n pude derivarse de la ecuaci�n E = (m * a) 'd' donde 'a' es la aceleraci�n de la masa 'm' y 'd' es la distancia a lo largo de la cual se acelera.\n\n");
	fprintf(archivo,"Las relaciones entre la energ�a cin�tica y la energ�a potencial, pueden ilustrarse elevando un objeto y dej�ndolo caer.\n\n");
	fprintf(archivo,"Cuando el objeto se levanta desde una superficie se le aplica una fuerza vertical. Al actuar esa fuerza a lo largo de una distancia, se transfiere energ�a al objeto. La energ�a asociada a un objeto situado a determinada altura sobre una superficie se denomina energ�a potencial. Si se deja caer el objeto, la energ�a potencial se convierte en energ�a cin�tica.\n\n");
	fprintf(archivo,"En resumen:\n\n");
	fprintf(archivo,"- La energ�a cin�tica es siempre mayor o igual que cero. No existen energ�as cin�ticas negativas.\n\n");
	fprintf(archivo,"- Para una velocidad dada, la energ�a cin�tica es directamente proporcional a la masa del cuerpo, y para una masa dada es directamente proporcional al cuadrado del m�dulo de su velocidad. La influencia de la velocidad es superior a la de la masa.\n\n");
	fprintf(archivo,"- La energ�a cin�tica de un cuerpo depende del m�dulo de su velocidad, pero no de la direcci�n o sentido de esta. Todos los objetos de la misma masa que se mueven con la misma rapidez tienen la misma energ�a cin�tica.\n\n");
	fprintf(archivo,"- La energ�a cin�tica de un cuerpo depende del sistema de referencia desde el que se estudia.\n\n");
	fprintf(archivo,"Existe un importante teorema relacionado con la energ�a cin�tica, el llamado teorema de la energ�a cin�tica o de las fuerzas vivas: El trabajo total realizado sobre un cuerpo es igual a su variaci�n de energ�a cin�tica.\n\n");
	fprintf(archivo,"W total = D * E * C\n\n");
	fprintf(archivo,"En consecuencia, si no ha cambiado la rapidez con que se mueve un cuerpo, el trabajo total realizado sobre �l es nulo.\n\n");
	fprintf(archivo,"- Energ�a potencial gravitatoria:\n");
	fprintf(archivo,"---------------------------------\n\n");
	fprintf(archivo,"La energ�a potencial gravitatoria es la energ�a asociada con la fuerza gravitatoria. Esta depender� de la altura relativa de un objeto a alg�n punto de referencia, la masa, y la fuerza de la gravedad. Por ejemplo, si un libro apoyado en una mesa es elevado, una fuerza externa estar� actuando en contra de la fuerza gravitacional. Si el libro cae, el mismo trabajo que el empleado para levantarlo, ser� efectuado por la fuerza gravitacional. Por esto, un libro a un metro del piso tiene menos energ�a potencial que otro a dos metros, o un libro de mayor masa a la misma altura.\n\n");
	fprintf(archivo,"Si bien la fuerza gravitacional var�a junto a la altura, la diferencia es muy peque�a como para ser considerada, por lo que se considera a la aceleraci�n de la gravedad como una constante.\n\n");
	fprintf(archivo,"Para estos casos en los que la variaci�n de la gravedad es insignificante, se aplica la siguiente f�rmula:\n\n");
	fprintf(archivo," U = M * G * H\n\n");
	fprintf(archivo,"Donde U es la energ�a potencial, M la masa, G la aceleraci�n de la gravedad, y H la altura.\n\n");
	fprintf(archivo,"- Energ�a potencial del resorte:\n");
	fprintf(archivo,"--------------------------------\n\n");
	fprintf(archivo,"Se tiene un resorte en su posici�n de equilibrio X sub0 con un extremo fijo y en el otro se encuentra adosada una masa M. Deformamos el resorte alarg�ndolo una distancia A mediante una fuerza aplicada a M.\n\n");
	fprintf(archivo,"La fuerza utilizada para deformar el resorte no es constante en todo el proceso. Como el resorte es un cuerpo el�stico, la fuerza aplicada en cada instante depender� de la distancia a la posici�n de equilibrio. De esta manera, la magnitud de la fuerza variar� entre la fuerza inicial (Fi = 0) y la fuerza final m�xima (Ff = KA). As�, la fuerza promedio aplicada durante el proceso de deformaci�n ser�:\n\n");
	fprintf(archivo,"     Fi + Ff   0 + KA   1     \n");
	fprintf(archivo," F = ------- = ------ = - * KA\n");
	fprintf(archivo,"        2        2      2     \n\n");
	fprintf(archivo,"En la distancia A de la posici�n de equilibrio, la energ�a mec�nica total del resorte (E) es igual a la energ�a potencial el�stica:\n\n");	
	fprintf(archivo,"           1      \n");
	fprintf(archivo," E = Epe = - * KA�\n");
	fprintf(archivo,"           2      \n\n");
	fprintf(archivo,"Cuando se suelta el resorte, la energ�a potencial el�stica se convierte en energ�a cin�tica (Ec), permaneciendo constante la energ�a mec�nica total durante todo el recorrido. Esto significa que en un instante cualquiera del movimiento del resorte, cuando este est� regresando a su posici�n inicial de equilibrio, se debe cumplir:\n\n");	
	fprintf(archivo,"     1         1         1    \n");
	fprintf(archivo," E = - * KA� = - * Kx� + - * mV�\n");
	fprintf(archivo,"     2         2         2    \n\n");
	fprintf(archivo,"Donde X es una posici�n intermedia entre X sub0 y A; V es la velocidad con la que la masa M pasa por la posici�n X.\n\n");
	fprintf(archivo,"Cuando el resorte regresa a la posici�n inicial X sub0, la masa se mueve con una velocidad m�xima Vm�x, de manera que la energ�a mec�nica total es igual a la energ�a cin�tica m�xima:\n\n");
	fprintf(archivo,"     1         1         \n");
	fprintf(archivo," E = - * KA� = - * mV�m�x\n");
	fprintf(archivo,"     2         2         \n\n");
	fprintf(archivo,"Como vemos, se ha producido un intercambio de energ�a potencial el�stica a energ�a cin�tica, manteni�ndose constante la energ�a mec�nica total durante todo el proceso. Si existe fricci�n dentro del propio resorte o con alguna estructura externa, la energ�a mec�nica se disipar�a y ya no permanecer�a constante.\n\n");
	fprintf(archivo,"- Conservaci�n de la energ�a mec�nica:\n");
	fprintf(archivo,"--------------------------------------\n\n");
	fprintf(archivo,"Los cuerpos poseen energ�a y esa energ�a puede transformarse de un tipo en otro. Igualmente los cuerpos pueden transferirse energ�a de unos a otros. Sin embargo, la energ�a total del universo permanece constante: no se conoce ning�n proceso que cree o destruya energ�a.\n\n");
	fprintf(archivo,"Este principio se conoce como principio de conservaci�n de la energ�a, y es uno de los pilares fundamentales de la F�sica.\n\n");
	fprintf(archivo,"El principio de la conservaci�n de la energ�a mec�nica describe que la suma de la energ�a cin�tica y potencial de un objeto en ca�da libre permanece constante en cualquier instante.\n\n");
	fprintf(archivo,"Existen dos formas en las que los cuerpos pueden intercambiar energ�a:\n\n");
	fprintf(archivo," - Mediante la aplicaci�n de una fuerza que realiza un trabajo. Cuando calculamos el trabajo realizado por una fuerza, estamos calculando la energ�a que el cuerpo que realiza la fuerza da o quita al cuerpo que sufre la fuerza. Como la cantidad de energ�a total ha de permanecer constante, si un cuerpo realiza un trabajo positivo sobre otro y por tanto le comunica una cierta cantidad de energ�a, �l ha de perder una cantidad equivalente de energ�a. De la misma forma si le quita energ�a �l ha de ganar esa misma cantidad de energ�a.\n\n");
	fprintf(archivo," - La segunda forma de transmitir energ�a de un cuerpo a otro es colocando en contacto dos cuerpos que se encuentran a diferente temperatura. En ese caso pasa energ�a del cuerpo m�s caliente al m�s fr�o hasta que las temperaturas de ambos se igualan. Se trata aqu� de un flujo de energ�a t�rmica y se da el nombre de calor a la energ�a intercambiada por los dos cuerpos.\n\n");
	fprintf(archivo,"- Potencia:\n");
	fprintf(archivo,"-----------\n\n");
	fprintf(archivo,"La potencia es una magnitud eminentemente pr�ctica. La potencia es trabajo mec�nico que incorpora en su valor el par�metro tiempo. Es decir, la potencia se expresa con un n�mero que cuantifica el trabajo efectuado durante un lapso de tiempo. Mientras m�s r�pido se realiza el trabajo, la potencia que se desarrolla es mayor.\n\n");
	fprintf(archivo,"Su unidad en el S.I. es el vatio (W). 1 W = 1 J/s, es decir, una potencia de un vatio indica que se realiza un trabajo de un julio cada segundo. Se utiliza tambi�n mucho el kilovatio (kw) y, sobre todo en ingenier�a, el caballo de vapor (C.V.).\n\n");
	fprintf(archivo," 1 C.V. = 735 W\n\n");
	fprintf(archivo,"Al multiplicar potencia por tiempo nos da trabajo o energ�a. El kW/h (kilovatio por hora) es una unidad de energ�a (no se emplea para trabajo) que equivale a la energ�a producida o consumida por un dispositivo con una potencia de 1 kW al funcionar durante una hora. Su equivalencia con el julio es:\n\n");
	fprintf(archivo," 1 kW/h = 3.600.000 J\n\n");
	fprintf(archivo,"La potencia en t�rminos generales, expresa la capacidad para ejecutar un trabajo en el menor tiempo posible. La expresi�n nos da la potencia media durante un cierto intervalo de tiempo. La potencia instant�nea, P, se obtiene al tomar el l�mite de la potencia media cuando el intervalo de tiempo tiende a 0, es decir, es la derivada del trabajo realizado respecto al tiempo.\n\n");
	fprintf(archivo,"Se puede demostrar, a partir de la anterior definici�n, que la potencia instant�nea desarrollada por una fuerza determinada es igual al producto de la fuerza por la velocidad del punto donde se aplica por el coseno del �ngulo que forman fuerza y velocidad:\n\n");
	fprintf(archivo," P = F * V * cos * Q\n\n");
	fprintf(archivo,"Otro concepto muy importante en la pr�ctica es el de rendimiento, R. Se puede aplicar tanto al trabajo (o energ�a) como a la potencia y se define como el cociente (multiplicado por 100 si queremos darlo en tanto por ciento) entre el trabajo/potencia �til (a veces lo llaman pr�ctico, real, etc) o energ�a obtenida, y el trabajo que te�ricamente esperar�amos obtener del dispositivo (trabajo/potencia te�rica, esperada, etc) o la energ�a/potencia consumida en realidad por el dispositivo.\n\n");	
	fprintf(archivo,"     P �til * 1      \n");
	fprintf(archivo," R = ---------- * 100\n");
	fprintf(archivo,"     P te�rica       \n\n");
	fprintf(archivo,"- Ley de Hooke:\n");
	fprintf(archivo,"---------------\n\n");
	fprintf(archivo,"La Ley de Hooke describe fen�menos el�sticos como los que exhiben los resortes. Esta ley afirma que la deformaci�n el�stica que sufre un cuerpo es proporcional a la fuerza que produce tal deformaci�n, siempre y cuando no se sobrepase el l�mite de elasticidad.\n\n");
	fprintf(archivo,"La Fuerza que devuelve un resorte a su posici�n de equilibrio es proporcional al valor de la distancia que se desplaza de esa posici�n.\n\n");
	fprintf(archivo,"Cuando un objeto se somete a fuerzas externas, sufre cambios de tama�o, o de forma, o de ambos. Esos cambios dependen del arreglo de los �tomos y su enlace en el material. Cuando un peso jala y estira a otro y cuando se le quita este peso y regresa a su tama�o normal decimos que es un cuerpo el�stico.\n\n");
	fprintf(archivo,"La ley de Hooke dice que la cantidad de estiramiento o de compresi�n (cambio de longitud), es directamente proporcional a la fuerza aplicada.\n\n");
	fprintf(archivo,"- Impulso o �mpetu:\n");
	fprintf(archivo,"-------------------\n\n");
	fprintf(archivo,"Se llama impulso a la magnitud f�sica, llamado normalmente I, definida como la variaci�n en el momento lineal que experimenta un objeto en un sistema cerrado. El t�rmino difiere de lo que cotidianamente conocemos como impulso y fue acu�ado por Isaac Newton en su segunda ley, donde lo llam� 'vis motrix', refiri�ndose a una especie de fuerza del movimiento.\n\n");
	fprintf(archivo,"El impulso es el producto entre una fuerza y el tiempo durante el cual est� aplicada. Es una magnitud vectorial. El m�dulo del impulso se representa como el �rea bajo la curva de la fuerza en el tiempo.\n\n");
	fprintf(archivo,"- Cantidad de movimiento o momentum\n");
	fprintf(archivo,"-----------------------------------\n\n");
	fprintf(archivo,"La cantidad de movimiento de un objeto de masa M y velocidad V es igual al producto de la masa y la velocidad. Tambi�n puede verse que un barco de grandes dimensiones que navegue a baja velocidad tiene una gran cantidad de movimiento, como lo tiene una bala peque�a disparada a alta velocidad. Y por supuesto, un objeto enorme que se desplace a alta velocidad.\n\n");
	fprintf(archivo,"Cuando una bala o un cami�n chocan contra una pared, se ejerce contra �sta una gran fuerza. Esa fuerza viene de un cambio de velocidad. La fuerza de impacto es proporcional a la raz�n de cambio de velocidad del objeto en movimiento. Y a mayor masa de ese objeto, mayor fuerza; as�, la fuerza de impacto es tambi�n proporcional a la masa del objeto en movimiento.\n\n");
	fprintf(archivo,"Cuando ocurre un cambio en la masa y en la velocidad en ambas a la vez, existir� un cambio en la cantidad de movimiento del cuerpo considerado. Si la masa permanece constante pero la velocidad del cuerpo cambia de V1 a V2 se tendr� que calcular lo siguiente:\n\n");
	fprintf(archivo," P1 = M * V1 en el primer instante.\n\n");
	fprintf(archivo," P2 = M * V2 en el segundo instante.\n\n");
	fprintf(archivo,"La variaci�n de la cantidad de movimiento ser� la siguiente:\n\n");
	fprintf(archivo," P2 - P1 = M * V2 - M * V1 -> P2 - P1 = M * (V2 - V1).\n\n");
	fprintf(archivo," P = M * V.\n\n");
	fprintf(archivo,"Estas ideas son congruentes con la segunda ley de Newton:\n\n");
	fprintf(archivo," F = M * A\n\n");
	fprintf(archivo,"La segunda ley de Newton, en t�rminos de la cantidad de movimiento, establece que la fuerza sobre un objeto es igual a la rapidez de cambio de la cantidad de movimiento del objeto.\n\n");
	fprintf(archivo,"Una bala se acelera cuando se ejerce una fuerza sobre ella. No obstante, depende de algo m�s que de su masa y la fuerza impartida. La velocidad final depende del tiempo. Una fuerza sostenida por un tiempo largo empuja la bala a una velocidad mayor que la misma fuerza aplicada brevemente. Se puede expresar la segunda ley de Newton de otra forma, haciendo m�s evidente el factor tiempo, sustituyendo el t�rmino para la aceleraci�n por su definici�n.\n\n");
	
	fclose(archivo);
}
