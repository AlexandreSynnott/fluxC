#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	if(argc != 2){
		fprintf(stderr, "Usage : % <nom_variable>\n", argv[0]);
		return 1;
	}

	char *nom_variable = argv[1];
	char *valeur = getenv(nom_variable);

	FILE *out = stdout;
	FILE *err = stderr;
	if(valeur != NULL){
		printf("%s = %s\n", nom_variable, valeur);
		return 0;
	}else {
		fprintf(err, "Erreur : la variable '%s' n<existe pas .\n", nom_variable );
		return 1;
	}
	return 0;
}
