// LIBRERIAS DE PROTOTIPOS
#include "header.h"
#include "fiyqui.c"
#include "magfime.c"
#include "simede.c"
#include "simedet.c"
#include "sinu.c"
#include "sinun.c"
#include "unco.c"
#include "magesve.c"
#include "cidi.c"
#include "remotra.c"
#include "magesmo.c"
#include "pridi.c"
#include "trapen.c"
#include "deftrapen.c"
#include "incopo.c"
#include "prienme.c"
#include "eleco.c"
#include "refel.c"
#include "ine.c"
#include "vein.c"
#include "ciem.c"
#include "fadereco.c"
#include "leocico.c"
#include "trapoel.c"
#include "reproteato.c"
#include "clasu.c"
#include "lepoqui.c"
#include "levogay.c"
#include "comcen.c"
#include "maricoga.c"
#include "alfoex.c"
#include "elase.c"
#include "pamoa.c"
#include "emoba.c"
#include "enico.c"
#include "fuerin.c"
#include "procom.c"
#include "inre.c"
#include "cales.c"
#include "model.c"
#include "ajusre.c"
#include "inforeare.c"
#include "calere.c"
#include "introquica.c"
#include "pococa.c"

// FUNCION PRINCIPAL
int main() {
	int opcion,continuar;
	
	do {
		do {
			// LISTADO DE ASIGNATURAS
			p("Elige la materia:\n");
			p("=================\n\n");
			p("[1] - F%csica y qu%cmica.\n\n",161,161);
			p("Opci%cn: ",162);
			fflush(stdin);
			s("%i",&opcion);
			p("\n");
		} while(opcion != 1);
			switch(opcion) {
				case 1:
					fiyqui();
					break;
				default:
					p("No se ha seleccionado una opci%cn v%clida.\n\n",162,160);
				}
		// CONTINUAR O SALIR DEL PROGRAMA
		p("%cQui%cres continuar con el programa?\n",168,130);
		p("===================================\n\n");
		p("[1] - Continuar con el programa.\n");
		p("[2] - Salir del programa.\n\n");
		p("%cContinuar? ",168);
		fflush(stdin);
		s("%i",&continuar);
		p("\n");
	} while(continuar == 1);
	
	// Hacemos una pausa
	p("Presiona una tecla para finalizar...");
	getch();
	
	return 0;
}
