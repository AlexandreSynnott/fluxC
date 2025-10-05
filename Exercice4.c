#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (int argc, char *argv[]) {
	if (argc != 2){
		fprintf(stderr, "Manque des arguments", argv[0]);
		return 1;
	} 

	char *mot = argv[1];
	char ligne[1024];
	int i = 0;
	int c;

	while((c = fgetc(stdin)) != EOF && c != '\n') {
		if(i < 1023){
			ligne[i++] = (char) c;
		}
	}

	ligne[i] = '\0';

	if(strstr(ligne, mot) != NULL) {
		return 0;
	} else {
		return 1;
	}




}
