void vein() {
	FILE *archivo;
	archivo = fopen("Vector Intensidad de campo eléctrico. Potencial eléctrico. Diferencia de potencial entre dos puntos de un campo eléctrico.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Vector Intensidad de campo el%cctrico. Potencial el%cctrico. Diferencia de potencial entre dos puntos de un campo el%cctrico.\n",130,130,130);
	p("==========================================================================================================================\n\n");
	
	p("- Potencial el%cctrico:\n",130);
	p("----------------------\n\n");
	
	p("El potencial el%cctrico en un punto del espacio es una magnitud escalar que nos permite obtener una medida del campo el%cctrico en dicho punto a trav%cs de la energ%ca potencial electrost%ctica que adquirir%ca una carga si la situ%csemos en ese punto.\n\n",130,130,130,161,160,161,160);
	
	p("El hecho de que todas las magnitudes sean escalares, permite que el estudio del campo el%cctrico sea m%cs sencillo.\n\n",130,160);
	
	p("- Superficies equipotenciales:\n");
	p("------------------------------\n\n");
	
	p("Aquellos puntos contiguos donde el valor del potencial el%cctrico es el mismo, reciben el nombre de superficie equipotencial. Cada punto de una superficie equipotencial se caracteriza por que:\n\n",130);
	
	p(" - El campo el%cctrico es perpendicular a la superficie en dicho punto y se dirige hacia valores decrecientes de potencial el%cctrico.\n\n",130,130);
	
	p(" - Cada punto solo puede pertenecer a una superficie equipotencial, ya que el potencial el%cctrico es un %cnico valor en cada punto.\n\n",130,163);
	
	p("- Potencial el%cctrico creado por una carga puntual:\n",130);
	p("---------------------------------------------------\n\n");
	
	p("Tal y como estudiamos en el apartado de intensidad del campo el%cctrico, una %cnica carga es capaz de crear un campo el%cctrico a su alrededor.\n\n",130,163);
	
	p("El potencial el%cctrico del campo el%cctrico creado por una carga puntual se obtiene por medio de la siguiente expresi%cn:\n\n",130,130,162);
	
	p("         q\n");
	p(" V = K * -\n");
	p("         r\n\n");
	
	p(" - V es el potencial el%cctrico en un punto. En el S.I. se mide en Voltios (V).\n\n",130);
	p(" - K es la constante de la ley de Coulomb. En el S.I. se mide en N*m%c/C%c.\n\n",253,253);
	p(" - q es la carga puntual que crea el campo el%cctrico. En el S.I. se mide en culombios (C).\n\n",130);
	p(" - r es la distancia entre la carga y el punto donde medimos el potencial. En el S.I. se mide en metros (m).\n\n");
	
	p("- Potencial el%cctrico creado por varias cargas puntuales:\n",130);
	p("---------------------------------------------------------\n\n");
	
	p("Una %cnica carga es capaz de crear un campo el%cctrico a su alrededor.\n\n",163,130);
	
	p("El potencial el%cctrico originado por cargas puntuales en un punto de un campo el%cctrico es la suma escalar de los potenciales el%cctricos en dicho punto creados por cada una de las cargas por separado.\n\n",130,130,130);
	
	p("Diferencia de Potencial El%cctrico:\n",130);
	p("----------------------------------\n\n");
	
	p("Si dos puntos de un campo el%cctrico poseen distinto potencial el%cctrico, entre ambos puntos existe lo que se denomina una diferencia de potencial o tensi%cn. Este valor se encuentra %cntimamente relacionado con el trabajo el%cctrico.\n\n",130,130,162,161,130);
	
	fprintf(archivo,"Vector Intensidad de campo eléctrico. Potencial eléctrico. Diferencia de potencial entre dos puntos de un campo eléctrico:\n");
	fprintf(archivo,"==========================================================================================================================\n\n");
	fprintf(archivo,"- Potencial eléctrico:\n");
	fprintf(archivo,"----------------------\n\n");
	fprintf(archivo,"El potencial eléctrico en un punto del espacio es una magnitud escalar que nos permite obtener una medida del campo eléctrico en dicho punto a través de la energía potencial electrostática que adquiriría una carga si la situásemos en ese punto.\n\n");
	fprintf(archivo,"El hecho de que todas las magnitudes sean escalares, permite que el estudio del campo eléctrico sea más sencillo.\n\n");
	fprintf(archivo,"- Superficies equipotenciales:\n");
	fprintf(archivo,"------------------------------\n\n");
	fprintf(archivo,"Aquellos puntos contiguos donde el valor del potencial eléctrico es el mismo, reciben el nombre de superficie equipotencial. Cada punto de una superficie equipotencial se caracteriza por que:\n\n");
	fprintf(archivo," - El campo eléctrico es perpendicular a la superficie en dicho punto y se dirige hacia valores decrecientes de potencial eléctrico.\n\n");
	fprintf(archivo," - Cada punto solo puede pertenecer a una superficie equipotencial, ya que el potencial eléctrico es un único valor en cada punto.\n\n");
	fprintf(archivo,"- Potencial eléctrico creado por una carga puntual:\n");
	fprintf(archivo,"---------------------------------------------------\n\n");
	fprintf(archivo,"Tal y como estudiamos en el apartado de intensidad del campo eléctrico, una única carga es capaz de crear un campo eléctrico a su alrededor.\n\n");
	fprintf(archivo,"El potencial eléctrico del campo eléctrico creado por una carga puntual se obtiene por medio de la siguiente expresión:\n\n");
	fprintf(archivo,"         q\n");
	fprintf(archivo," V = K * -\n");
	fprintf(archivo,"         r\n\n");
	fprintf(archivo," - V es el potencial eléctrico en un punto. En el S.I. se mide en Voltios (V).\n\n");
	fprintf(archivo," - K es la constante de la ley de Coulomb. En el S.I. se mide en N*m²/C².\n\n");
	fprintf(archivo," - q es la carga puntual que crea el campo eléctrico. En el S.I. se mide en culombios (C).\n\n");
	fprintf(archivo," - r es la distancia entre la carga y el punto donde medimos el potencial. En el S.I. se mide en metros (m).\n\n");
	fprintf(archivo,"- Potencial eléctrico creado por varias cargas puntuales:\n");
	fprintf(archivo,"---------------------------------------------------------\n\n");
	fprintf(archivo,"Una única carga es capaz de crear un campo eléctrico a su alrededor.\n\n");
	fprintf(archivo,"El potencial eléctrico originado por cargas puntuales en un punto de un campo eléctrico es la suma escalar de los potenciales eléctricos en dicho punto creados por cada una de las cargas por separado.\n\n");
	fprintf(archivo,"Diferencia de Potencial Eléctrico:\n");
	fprintf(archivo,"----------------------------------\n\n");
	fprintf(archivo,"Si dos puntos de un campo eléctrico poseen distinto potencial eléctrico, entre ambos puntos existe lo que se denomina una diferencia de potencial o tensión. Este valor se encuentra íntimamente relacionado con el trabajo eléctrico.\n\n");
	
	fclose(archivo);
}
