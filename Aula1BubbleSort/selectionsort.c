#include <stdlib.h>
#include <stdio.h>

void selectionsort(int *v, int tam) {
  int menor=99999;
  int posi;
  int temp;
  int test;


  for (size_t k = 0; k < tam; k++) {

    for (size_t i; i < tam-1; i++) {
      if(v[i]<menor){
        menor = v[i];
        posi = i-1;
      }
    }


    temp = v[k];
    v[k]=menor;
    v[posi] = temp;

  }





}

int main(){

  int vetor[10]={7,8,9,10,88,4,0,3,2,1};

  selectionsort(vetor,10);

  for (size_t i = 0; i < 10; i++) {
    printf("%i ",vetor[i]);
  }

  printf("\n");

  return 0;
}
