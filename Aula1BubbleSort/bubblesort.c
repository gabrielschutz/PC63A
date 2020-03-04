#include <stdlib.h>
#include <stdio.h>

void bubblesort(int *v, int tam) {
  int temp;
  for (size_t i = 0; i < tam; i++) {
    if(v[i]>v[i+1]){
      temp = v[i];
      v[i]=v[i+1];
      v[i+1]=temp;
      bubblesort(v,tam);
    }
  }
}

int main(){

  int vetor[10]={7,8,9,10,5,4,3,2,1};

  bubblesort(vetor,9);

  for (size_t i = 0; i < 10; i++) {
    printf("%i ",vetor[i]);
  }

  printf("\n");

  return 0;
}
