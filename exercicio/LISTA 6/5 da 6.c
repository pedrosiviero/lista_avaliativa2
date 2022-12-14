#include <stdio.h>
#include <stdlib.h>
#define maximo 5

int vetorcheio(char *vetor, char elemento) {
	int i = 0;

	while(i< maximo) {
		*vetor = elemento;
		vetor++;
		i++;
		elemento++;
	}
}

int vetorimprimido(char *vetor) {
	int i;

	for (i=0; i< maximo; i++)
		printf("\n[%d]: %c", (i+1), *(vetor+i));
}

int main() {
	char vetor[maximo], elemento = 'a';

	vetorcheio(vetor, elemento);
	vetorimprimido(vetor);

	putchar('\n');

	return 0;
}
