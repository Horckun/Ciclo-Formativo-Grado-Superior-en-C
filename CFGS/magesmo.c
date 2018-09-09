void magesmo() {
	FILE *archivo;
	archivo = fopen("Magnitudes estudio movimiento.doc","w");
	if(archivo == NULL) {
		p("No se ha podido abrir el archivo.\n\n");
	}
	
	p("Magnitudes para el estudio del movimiento: posici%cn, distancia recorrida, velocidad y aceleraci%cn.\n",162,162);
	p("==================================================================================================\n\n");
	
	fprintf(archivo,"Magnitudes para el estudio del movimiento: posici�n, distancia recorrida, velocidad y aceleraci�n.\n");
	fprintf(archivo,"==================================================================================================\n\n");
	
	p("Movimiento:\n");
	p("-----------\n\n");
	
	p("El estudio del movimiento se puede realizar a trav%cs de la cinem%ctica o de la din%cmica. En funci%cn de la elecci%cn del sistema de referencia quedar%cn definidas las ecuaciones del movimiento, ecuaciones que determinar%cn la posici%cn, la velocidad y la aceleraci%cn del cuerpo en cada instante de tiempo. Todo movimiento puede representarse y estudiarse mediante gr%cficas. Las m%cs habituales son las que representan el espacio, la velocidad o la aceleraci%cn en funci%cn del tiempo.\n\n",130,160,160,162,162,160,160,162,162,160,160,162,162);
	
	fprintf(archivo,"Movimiento:\n");
	fprintf(archivo,"-----------\n\n");
	fprintf(archivo,"El estudio del movimiento se puede realizar a trav�s de la cinem�tica o de la din�mica. En funci�n de la elecci�n del sistema de referencia quedaran definidas las ecuaciones del movimiento, ecuaciones que determinar�n la posici�n, la velocidad y la aceleraci�n del cuerpo en cada instante de tiempo. Todo movimiento puede representarse y estudiarse mediante gr�ficas. Las m�s habituales son las que representan el espacio, la velocidad o la aceleraci�n en funci�n del tiempo.\n\n",130,160,160,162,162,160,162,162,160,160,162,162);
	
	system("pause");
	p("\n");
	
	p("Cinem%ctica:\n",160);
	p("-----------\n\n");
	
	p("La cinem%ctica es la rama de la mec%cnica cl%csica que estudia las leyes del movimiento de los cuerpos sin tener en cuenta las causas que lo producen, limit%cndose, esencialmente, al estudio de la trayectoria en funci%cn del tiempo.\n\n",160,160,160,160,162);
	
	p("En la cinem%ctica se utiliza en un sistema de coordenadas para describir las trayectorias, denominado sistema de referencia. La velocidad es el ritmo con que cambia la posici%cn un cuerpo. La aceleraci%cn es el ritmo con que cambia su velocidad. La velocidad y la aceleraci%cn son las dos principales cantidades que describen c%cmo cambia su posici%cn en funci%cn del tiempo.\n\n",160,162,162,162,162,162,162);
	
	p("- Movimiento rectil%cneo uniforme: Un movimiento es rectil%cneo cuando describe una trayectoria recta.\n\n",161,161);
	
	p("- Movimiento circular: El movimiento circular es el que se basa en un eje de giro y radio constante.\n\n");
	
	p("- Movimiento arm%cnico simple: Es un tipo de movimiento oscilatorio ejecutado por una part%ccula a partir de un centro o punto de equilibrio.\n\n",162,161);
	
	p("- Movimiento parab%clico: Se denomina movimiento parab%clico al realizado por un objeto cuya trayectoria describe una par%cbola.\n\n",162,162,160);
	
	p("- Movimiento pendular: El movimiento pendular es una forma de desplazamiento que presentan algunos sistemas f%csicos como aplicaci%cn pr%cctica de movimiento cuasi-arm%cnico.\n\n",161,162,160,162);
	
	p("- Movimiento de s%clido r%cgido: Es el que se da en un s%clido cuyas part%cculas se mueven conjuntamente de tal manera que las distancias relativas entre ellas permanecen constantes a lo largo del tiempo.\n\n",162,161,162,161);
	
	system("pause");
	p("\n");
	
	p("- Movimiento ondulatorio: Se denomina movimiento ondulatorio al movimiento que se da sobre un medio cont%cnuo en el que una perturbaci%cn se propaga desde una part%ccula a las part%cculas vecinas sin que exista un flujo neto de masa, a%cn cuando s%c halla transporte de energ%ca en el medio.\n\n",161,162,161,161,163,161,161);
	
	p("- Posici%cn: Es la distancia en l%cnea recta desde el sistema de referencia hasta el lugar en el que se encuentra un m%cvil en un instante.\n\n",162,161,162);
	
	p("- Desplazamiento: Es la distancia en l%cnea recta entre dos posiciones del m%cvil.\n\n",161,162);
	
	p("- Trayectoria: Es la l%cnea imaginaria que une todos los puntos por los que pasa el m%cvil.\n\n",161,162);
	
	p("- Espacio: Es la distancia entre dos posiciones medidas sobre la trayectoria.\n\n");
	
	p("- Fuerza: La fuerza es una magnitud f%csica que mide la intensidad del intercambio de momento lineal entre dos part%cculas o sistemas de part%cculas.\n\n",161,161,161);
	
	p("- Energ%ca: La energ%ca se define como la capacidad para realizar un trabajo, se manifiesta en los cambios f%csicos, por ejemplo, al elevar un objeto, transportarlo, deformarlo o calentarlo.\n\n",161,161,161);
	
	p("- Aceleraci%cn: El t%crmino aceleraci%cn es una magnitud vectorial que se aplica tanto a los aumentos como a las disminuciones de rapidez en una unidad de tiempo.\n\n",162,130,162);
	
	p("- Velocidad y rapidez: La velocidad es una magnitud f%csica de car%ccter vectorial que expresa el desplazamiento de un objeto por unidad de tiempo.\n\n",161,160);
	
	fprintf(archivo,"Cinem�tica:\n");
	fprintf(archivo,"-----------\n\n");	
	fprintf(archivo,"La cinem�tica es la rama de la mec�nica cl�sica que estudia las leyes del movimiento de los cuerpos sin tener en cuenta las causas que lo producen, limit�ndose, esencialmente, al estudio de la trayectoria en funci�n del tiempo.\n\n");	
	fprintf(archivo,"En la cinem�tica se utiliza en un sistema de coordenadas para describir las trayectorias, denominado sistema de referencia. La velocidad es el ritmo con que cambia la posici�n un cuerpo. La aceleraci�n es el ritmo con que cambia su velocidad. La velocidad y la aceleraci�n son las dos principales cantidades que describen c�mo cambia su posici�n en funci�n del tiempo.\n\n");	
	fprintf(archivo,"- Movimiento rectil�neo uniforme: Un movimiento es rectil�neo cuando describe una trayectoria recta.\n\n");	
	fprintf(archivo,"- Movimiento circular: El movimiento circular es el que se basa en un eje de giro y radio constante.\n\n");	
	fprintf(archivo,"- Movimiento arm�nico simple: Es un tipo de movimiento oscilatorio ejecutado por una part�cula a partir de un centro o punto de equilibrio.\n\n");	
	fprintf(archivo,"- Movimiento parab�lico: Se denomina movimiento parab�lico al realizado por un objeto cuya trayectoria describe una par�bola.\n\n");	
	fprintf(archivo,"- Movimiento pendular: El movimiento pendular es una forma de desplazamiento que presentan algunos sistemas f�sicos como aplicaci�n pr�ctica de movimiento cuasi-arm�nico.\n\n");	
	fprintf(archivo,"- Movimiento de s�lido r�gido: Es el que se da en un s�lido cuyas part�culas se mueven conjuntamente de tal manera que las distancias relativas entre ellas permanecen constantes a lo largo del tiempo.\n\n");	
	fprintf(archivo,"- Movimiento ondulatorio: Se denomina movimiento ondulatorio al movimiento que se da sobre un medio cont�nuo en el que una perturbaci�n se propaga desde una part�cula a las part�culas vecinas sin que exista un flujo neto de masa, a�n cuando s� halla transporte de energ�a en el medio.\n\n");	
	fprintf(archivo,"- Posici�n: Es la distancia en l�nea recta desde el sistema de referencia hasta el lugar en el que se encuentra un m�vil en un instante.\n\n");	
	fprintf(archivo,"- Desplazamiento: Es la distancia en l�nea recta entre dos posiciones del m�vil.\n\n");	
	fprintf(archivo,"- Trayectoria: Es la l�nea imaginaria que une todos los puntos por los que pasa el m�vil.\n\n");	
	fprintf(archivo,"- Espacio: Es la distancia entre dos posiciones medidas sobre la trayectoria.\n\n");	
	fprintf(archivo,"- Fuerza: La fuerza es una magnitud f�sica que mide la intensidad del intercambio de momento lineal entre dos part�culas o sistemas de part�culas.\n\n");	
	fprintf(archivo,"- Energ�a: La energ�a se define como la capacidad para realizar un trabajo, se manifiesta en los cambios f�sicos, por ejemplo, al elevar un objeto, transportarlo, deformarlo o calentarlo.\n\n");	
	fprintf(archivo,"- Aceleraci�n: El t�rmino aceleraci�n es una magnitud vectorial que se aplica tanto a los aumentos como a las disminuciones de rapidez en una unidad de tiempo.\n\n");	
	fprintf(archivo,"- Velocidad y rapidez: La velocidad es una magnitud f�sica de car�cter vectorial que expresa el desplazamiento de un objeto por unidad de tiempo.\n\n");
	
	system("pause");
	p("\n");
	
	p("Din%cmica:\n",160);
	p("---------\n\n");
	
	p("La din%cmica es la rama de la f%csica que describe la evoluci%cn en el tiempo de un sistema f%csico en relaci%cn con las causas que provocan los cambios de estado f%csico y/o estado de movimiento. El objetivo de la din%cmica es describir los factores capaces de producir alteraciones de un sistema f%csico, cuantificarlos y plantear ecuaciones de movimiento o ecuaciones de evoluci%cn para dicho sistema de operaci%cn.\n\n",160,161,162,161,162,161,160,161,162,162);
	
	fprintf(archivo,"Din�mica:\n");
	fprintf(archivo,"---------\n\n");	
	fprintf(archivo,"La din�mica es la rama de la f�sica que describe la evoluci�n en el tiempo de un sistema f�sico en relaci�n con las causas que provocan los cambios de estado f�sico y/o estado de movimiento. El objetivo de la din�mica es describir los factores capaces de producir alteraciones de un sistema f�sico, cuantificarlos y plantear ecuaciones de movimiento o ecuaciones de evoluci�n para dicho sistema de operaci�n.\n\n");
	
	system("pause");
	p("\n");
	
	p("Inercia:\n");
	p("--------\n\n");
	
	p("En f%csica se dice que un sistema tiene m%cs inercia cuando resulta m%cs dif%ccil lograr un cambio en el estado f%csico del mismo. Los dos usos m%cs frecuentes en f%csica son la inercia mec%cnica y la inercia t%crmica. La primera de ellas aparece en mec%cnica y es una medida de dificultad para cambiar el estado de movimiento o reposo de un cuerpo. La inercia mec%cnica depende de la cantidad de masa y del tensor de inercia del cuerpo. La inercia t%crmica mide la dificultad con la que un cuerpo cambia su temperatura al estar en contacto con otros cuerpos o ser calentado. La inercia t%crmica depende de la cantidad de masa y de la capacidad calor%cfica.\n\n",161,160,160,161,161,160,161,160,130,160,160,130,130,161);
	
	p("Las llamadas fuerzas de inercia son fuerzas ficticias o aparentes para un observador en un sistema de referencia no-inercial.\n\n");
	
	fprintf(archivo,"Inercia:\n");
	fprintf(archivo,"--------\n\n");	
	fprintf(archivo,"En f�sica se dice que un sistema tiene m�s inercia cuando resulta m�s dif�cil lograr un cambio en el estado f�sico del mismo. Los dos usos m�s frecuentes en f�sica son la inercia mec�nica y la inercia t�rmica. La primera de ellas aparece en mec�nica y es una medida de dificultad para cambiar el estado de movimiento o reposo de un cuerpo. La inercia mec�nica depende de la cantidad de masa y del tensor de inercia del cuerpo. La inercia t�rmica mide la dificultad con la que un cuerpo cambia su temperatura al estar en contacto con otros cuerpos o ser calentado. La inercia t�rmica depende de la cantidad de masa y de la capacidad calor�fica.\n\n");	
	fprintf(archivo,"Las llamadas fuerzas de inercia son fuerzas ficticias o aparentes para un observador en un sistema de referencia no-inercial.\n\n");
		
	fclose(archivo);
}
