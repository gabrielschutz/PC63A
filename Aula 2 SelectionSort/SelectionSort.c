#include <stdlib.h>
#include <stdio.h>

void selectionsort(int *v, int tam) {

  int menor;
  int troca;

  for (int k=0; k < tam; k++) {
    menor = k;
    for (int i=k+1; i < tam; i++) {
      if(v[i]<v[menor]){
        menor = i;
      }
    }
    if (k != menor){
      troca = v[k];
      v[k]=v[menor];
      v[menor] = troca;
    }
  }
}

int main(){

  int vetor[10]={-99,8,9,10,88,4,0,3,2,1};

  selectionsort(vetor,10);

  for (size_t i = 0; i < 10; i++) {
    printf("%i ",vetor[i]);
  }

  printf("\n");

  return 0;
}
