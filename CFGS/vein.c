void vein() {
	FILE *archivo;
	archivo = fopen("Vector Intensidad de campo el�ctrico. Potencial el�ctrico. Diferencia de potencial entre dos puntos de un campo el�ctrico.doc","w");
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
	
	fprintf(archivo,"Vector Intensidad de campo el�ctrico. Potencial el�ctrico. Diferencia de potencial entre dos puntos de un campo el�ctrico:\n");
	fprintf(archivo,"==========================================================================================================================\n\n");
	fprintf(archivo,"- Potencial el�ctrico:\n");
	fprintf(archivo,"----------------------\n\n");
	fprintf(archivo,"El potencial el�ctrico en un punto del espacio es una magnitud escalar que nos permite obtener una medida del campo el�ctrico en dicho punto a trav�s de la energ�a potencial electrost�tica que adquirir�a una carga si la situ�semos en ese punto.\n\n");
	fprintf(archivo,"El hecho de que todas las magnitudes sean escalares, permite que el estudio del campo el�ctrico sea m�s sencillo.\n\n");
	fprintf(archivo,"- Superficies equipotenciales:\n");
	fprintf(archivo,"------------------------------\n\n");
	fprintf(archivo,"Aquellos puntos contiguos donde el valor del potencial el�ctrico es el mismo, reciben el nombre de superficie equipotencial. Cada punto de una superficie equipotencial se caracteriza por que:\n\n");
	fprintf(archivo," - El campo el�ctrico es perpendicular a la superficie en dicho punto y se dirige hacia valores decrecientes de potencial el�ctrico.\n\n");
	fprintf(archivo," - Cada punto solo puede pertenecer a una superficie equipotencial, ya que el potencial el�ctrico es un �nico valor en cada punto.\n\n");
	fprintf(archivo,"- Potencial el�ctrico creado por una carga puntual:\n");
	fprintf(archivo,"---------------------------------------------------\n\n");
	fprintf(archivo,"Tal y como estudiamos en el apartado de intensidad del campo el�ctrico, una �nica carga es capaz de crear un campo el�ctrico a su alrededor.\n\n");
	fprintf(archivo,"El potencial el�ctrico del campo el�ctrico creado por una carga puntual se obtiene por medio de la siguiente expresi�n:\n\n");
	fprintf(archivo,"         q\n");
	fprintf(archivo," V = K * -\n");
	fprintf(archivo,"         r\n\n");
	fprintf(archivo," - V es el potencial el�ctrico en un punto. En el S.I. se mide en Voltios (V).\n\n");
	fprintf(archivo," - K es la constante de la ley de Coulomb. En el S.I. se mide en N*m�/C�.\n\n");
	fprintf(archivo," - q es la carga puntual que crea el campo el�ctrico. En el S.I. se mide en culombios (C).\n\n");
	fprintf(archivo," - r es la distancia entre la carga y el punto donde medimos el potencial. En el S.I. se mide en metros (m).\n\n");
	fprintf(archivo,"- Potencial el�ctrico creado por varias cargas puntuales:\n");
	fprintf(archivo,"---------------------------------------------------------\n\n");
	fprintf(archivo,"Una �nica carga es capaz de crear un campo el�ctrico a su alrededor.\n\n");
	fprintf(archivo,"El potencial el�ctrico originado por cargas puntuales en un punto de un campo el�ctrico es la suma escalar de los potenciales el�ctricos en dicho punto creados por cada una de las cargas por separado.\n\n");
	fprintf(archivo,"Diferencia de Potencial El�ctrico:\n");
	fprintf(archivo,"----------------------------------\n\n");
	fprintf(archivo,"Si dos puntos de un campo el�ctrico poseen distinto potencial el�ctrico, entre ambos puntos existe lo que se denomina una diferencia de potencial o tensi�n. Este valor se encuentra �ntimamente relacionado con el trabajo el�ctrico.\n\n");
	
	fclose(archivo);
}
