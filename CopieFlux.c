#include <stdio.h>

int main(){
	int c;

	while ((c = fgetc(stdin)) != EOF){
		fputc(c, stdout);
		fputc(c, stderr);
	}

	return 0;
}
