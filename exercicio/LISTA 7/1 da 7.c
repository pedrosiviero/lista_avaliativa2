#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, tamanho, *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    srand(time(NULL));

    vetor = malloc(tamanho * sizeof(int));

    if(vetor){
        printf("Tudo pronto\n");
        for(i = 0; i < tamanho; i++)
            *(vetor + i) = rand() % 100;

        for(i = 0; i < tamanho; i++)
            printf("%d ", *(vetor + i));
        printf("\n");
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }

    return 0;
}
