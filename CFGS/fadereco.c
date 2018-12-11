void fadereco() {
	FILE *archivo;
	archivo = fopen("Factores de los que depende la resistencia de un conductor.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo");
	}
	
	p("Factores de los que depende la resistencia de un conductor:\n");
	p("===========================================================\n\n");
	
	p("El factor m%cs importante que determinan la resistencia el%cctrica es la resistividad del material, sin embargo existen otros tres tipos de factores que son tambi%cn importantes, estos son:\n\n",160,130,130);
	
	p(" - La longitud: Esta se determina por lo largo del conductor. A mayor longitud de un conductor, mayor es la resistencia del mismo. La resistencia de un conductor es directamente proporcional a su longitud. La raz%cn de esto se debe a que los electrones han de desplazarse a mayor distancia por el material conductor.\n\n",162);
	
	p(" - La secci%n transversal: Esta es determinada por el espesor o di%cmetro del conductor. Un conductor de gran di%cmetro tiene menos resistencia que los conductores con menor di%cmetro. La raz%cn es que un conductor con mayor di%cmetro tiene m%cs electrones libres por unidad de longitud que un conductor de menor di%cmetro del mismo material. La resistencia de un conductor es inversamente proporcional a su secci%cn transversal. Si se duplica la secci%cn transversal, se reduce la resistencia.",162,160,160,160,162,160,160,160,162,162);
	
	p(" - La temperatura: En los materiales o conductores, la resistencia cambia al cambiar la temperatura. Un aumento de temperatura causa un aumento de resistencia. Los materiales que responden en esta forma se dice que tienen un coeficiente de temperatura positiva. Con un material con estas caracter%csticas, su resistencia aumentar%ca al aumentar la temperatura y se reducir%ca al disminuir la temperatura.\n\n",161,161,161);
	
	fprintf(archivo,"Factores de los que depende la resistencia de un conductor:\n");
	fprintf(archivo,"===========================================================\n\n");
	fprintf(archivo,"El factor más importante que determinan la resistencia eléctrica es la resistividad del material, sin embargo existen otros tres tipos de factores que son también importantes, estos son:\n\n");
	fprintf(archivo," - La longitud: Esta se determina por lo largo del conductor. A mayor longitud de un conductor, mayor es la resistencia del mismo. La resistencia de un conductor es directamente proporcional a su longitud. La razón de esto se debe a que los electrones han de desplazarse a mayor distancia por el material conductor.\n\n");
	fprintf(archivo," - La sección transversal: Esta es determinada por el espesor o diámetro del conductor. Un conductor de gran diámetro tiene menos resistencia que los conductores con menor diámetro. La razón es que un conductor con mayor diámetro tiene más electrones libres por unidad de longitud que un conductor de menor diámetro del mismo material. La resistencia de un conductor es inversamente proporcional a su sección transversal. Si se duplica la sección transversal, se reduce la resistencia.");
	fprintf(archivo," - La temperatura: En los materiales o conductores, la resistencia cambia al cambiar la temperatura. Un aumento de temperatura causa un aumento de resistencia. Los materiales que responden en esta forma se dice que tienen un coeficiente de temperatura positiva. Con un material con estas características, su resistencia aumentaría al aumentar la temperatura y se reduciría al disminuir la temperatura.\n\n");
	
	fclose(archivo);
}
