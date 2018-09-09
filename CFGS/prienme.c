void prienme() {
	FILE *archivo;
	archivo = fopen("Principio de conservación de la energía mecánica en ausencia de fuerzas disipativas.doc","w");
	if(archivo == NULL) {
		p("No se ha podido crear el archivo.\n\n");
	}
	
	p("Principio de conservaci%cn de la energ%ca mec%cnica en ausencia de fuerzas disipativas:\n",162,161,160);
	p("====================================================================================\n\n");
	
	p("La energ%ca mec%cnica de un cuerpo se mantiene constante cuando todas las fuerzas que act%can sobre %cl son conservativas.\n\n",161,160,163,130);
	
	p("Imagina una pelota colgada del techo que cae sobre un muelle. Seg%cn el principio de conservaci%cn de la energ%ca mec%cnica, la energ%ca mec%cnica de la bola es siempre la misma y por tanto durante todo el proceso, dicha energ%ca permanecer%c constante, tan solo cambiar%cn las aportaciones de los distintos tipos de energ%ca que conforman la energ%ca mec%cnica.\n\n",163,162,161,160,161,160,161,160,160,161,161,160);
	
	p("Antes de caer, la energ%ca mec%cnica de la bola est%c formada %cnicamente por energ%ca potencial gravitatoria. Al caer y adquirir una velocidad, la energ%ca potencial gravitatoria se convierte en energ%ca cin%ctica, dejando constante la energ%ca mec%cnica. Por %cltimo, al impactar contra el muelle, lo comienza a comprimir, provocando que la energ%ca mec%cnica se componga de energ%ca cin%ctica, energ%ca potencial gravitatoria y energ%ca potencial el%cstica.\n\n",161,160,160,163,161,161,161,130,161,160,163,161,160,161,130,161,161,160);
	
	fprintf(archivo,"Principio de conservación de la energía mecánica en ausencia de fuerzas disipativas:\n");
	fprintf(archivo,"====================================================================================\n\n");
	fprintf(archivo,"La energía mecánica de un cuerpo se mantiene constante cuando todas las fuerzas que actúan sobre él son conservativas.\n\n");
	fprintf(archivo,"Imagina una pelota colgada del techo que cae sobre un muelle. Según el principio de conservación de la energía mecánica, la energía mecánica de la bola es siempre la misma y por tanto durante todo el proceso, dicha energía permanecerá constante, tan solo cambiarán las aportaciones de los distintos tipos de energía que conforman la energía mecánica.\n\n");
	fprintf(archivo,"Antes de caer, la energía mecánica de la bola está formada únicamente por energía potencial gravitatoria. Al caer y adquirir una velocidad, la energía potencial gravitatoria se convierte en energía cinética, dejando constante la energía mecánica. Por último, al impactar contra el muelle, lo comienza a comprimir, provocando que la energía mecánica se componga de energía cinética, energía potencial gravitatoria y energia potencial elástica.\n\n");
	
	fclose(archivo);
}
