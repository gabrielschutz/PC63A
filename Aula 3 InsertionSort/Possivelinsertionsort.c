#include <stdlib.h>
#include <stdio.h>



void insertionsort(int *v, int tam) {

  int aux,j,i;

  for (i=0;i < tam;i++) {
    aux = v[i];
    j = i-1;
    while ((j>=0)&&(v[j]>aux)){
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = aux;
  }


}

int main(){

  int vetor[10]={1,8,-8,10,-88,4,0,3,2,66};

  insertionsort(vetor,10);

  for (size_t i = 0; i < 10; i++) {
    printf("%i ",vetor[i]);
  }

  printf("\n");

  return 0;
}
