void leocico() {
	FILE *archivo;
	archivo = fopen("Ley de Ohm para un circuito completo. Asociaciones de resistencias.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Ley de Ohm para un circuito completo. Asociaciones de resistencias:\n");
	p("===================================================================\n\n");
	
	p("Interesa, en ocasiones, conseguir que entre dos puntos de un circuito exista una resistencia determinada, de la que no disponemos en ese momento. Para solucionar el problema, asociamos resistencias, uni%cndolas de distintas maneras que podemos resumir:\n\n",130);
	
	p(" - En serie.\n");
	p(" - En paralelo.\n\n");
	
	p("En cada uno de los casos, se llama resistencia equivalente de la asociaci%cn a una resistencia %cnica que equivale a las asociadas y puede sustituirlas sin producir modificaci%cn alguna al circuito.\n\n",162,163,162);
	
	p("Las f%crmulas correspondientes a la asociaci%cn seg%cn el caso son las siguientes:\n\n",162,162,163);
	
	system("pause");
	p("\n");
	
	p(" - En serie:\n");
	p(" -----------\n\n");
	
	p(" Cuando diferentes elementos de circuito se conectan en secuencia con una sola trayectoria para la corriente entre los puntos, decimos que est%cn conectados en serie.\n\n",160);
	
	p(" Si los resistores est%cn en serie, la corriente debe ser igual en todos ellos. La corriente no se consume conforme pasa por un circuito.\n\n",160);
	
	p(" La resistencia equivalente a una asociaci%cn en serie es igual a la suma de las resistencias asociadas.\n\n",162);
	
	system("pause");
	p("\n");
	
	p(" - En paralelo:\n");
	p(" --------------\n\n");
	
	p(" Cuando cada resistor proporciona una trayectoria alternativa entre los puntos decimos que est%cn conectados en paralelo.\n\n",160);
	
	p(" Si los resistores est%cn en paralelo, la corriente en cada resistor no necesariamente es igual, pero la diferencia de potencial entre los terminales de cada resistor debe ser la misma.\n\n",160);
	
	p(" La corriente total debe ser igual a la suma de las corrientes en los resistores.\n\n");
	
	fprintf(archivo,"Ley de Ohm para un circuito completo. Asociaciones de resistencias:\n");
	fprintf(archivo,"===================================================================\n\n");
	fprintf(archivo,"Interesa, en ocasiones, conseguir que entre dos puntos de un circuito exista una resistencia determinada, de la que no disponemos en ese momento. Para solucionar el problema, asociamos resistencias, uniéndolas de distintas maneras que podemos resumir:\n\n");
	fprintf(archivo," - En serie.\n");
	fprintf(archivo," - En paralelo.\n\n");
	fprintf(archivo,"En cada uno de los casos, se llama resistencia equivalente de la asociación a una resistencia única que equivale a las asociadas y puede sustituirlas sin producir modificación alguna al circuito.\n\n");
	fprintf(archivo,"Las fórmulas correspondientes a la asociación según el caso son las siguientes:\n\n");
	fprintf(archivo," - En serie:\n");
	fprintf(archivo," -----------\n\n");
	fprintf(archivo," Cuando diferentes elementos de circuito se conectan en secuencia con una sola trayectoria para la corriente entre los puntos, decimos que están conectados en serie.\n\n");
	fprintf(archivo," Si los resistores están en serie, la corriente debe ser igual en todos ellos. La corriente no se consume conforme pasa por un circuito.\n\n");
	fprintf(archivo," La resistencia equivalente a una asociación en serie es igual a la suma de las resistencias asociadas.\n\n");
	fprintf(archivo," - En paralelo:\n");
	fprintf(archivo," --------------\n\n");
	fprintf(archivo," Cuando cada resistor proporciona una trayectoria alternativa entre los puntos decimos que están conectados en paralelo.\n\n");
	fprintf(archivo," Si los resistores están en paralelo, la corriente en cada resistor no necesariamente es igual, pero la diferencia de potencial entre los terminales de cada resistor debe ser la misma.\n\n");
	fprintf(archivo," La corriente total debe ser igual a la suma de las corrientes en los resistores.\n\n");
	
	fclose(archivo);
}
