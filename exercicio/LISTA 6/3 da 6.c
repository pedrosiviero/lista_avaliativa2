#include <stdio.h>
#include <stdlib.h>
#define tamanho 5

int main (void){
 int vetor[tamanho], i;
 int *acabavetor;
 acabavetor = vetor;

 printf("\nDigite os elementos:\n",tamanho);

 for(i = 0; i < tamanho; i++){
  printf("%d: ",i+1);
    scanf("%d", &vetor[i]);
 }

 printf("\nelementos:\n\n");
    for(i = 0; i < tamanho; i++){
        printf("%d  ",vetor[i]);
 }
 printf("\n\nenderecos:\n");

 for(i = 0; i < tamanho; i++){
     printf("%i : %i : %i\n",i+1, vetor[i], acabavetor++);
 }

 printf("\nenderecos do vetor:\n");

 acabavetor = vetor;

 for(i = 0; i < tamanho; i++){

  if(vetor[i] %2 == 0){
   printf("\nNumero e par : posicao = %d",vetor[i], acabavetor);
  }
  acabavetor++;
 }
}
