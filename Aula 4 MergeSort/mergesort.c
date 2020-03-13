#include <stdlib.h>
#include <stdio.h>

void merge(int inicio,int meio,int fim,int *v){

  int *q = malloc((fim-inicio+1)*sizeof (int));
  int i = inicio,j = fim;
  int k = 0;

  while ((i < inicio) && (j < fim)) {
    if (v[i] <= v[j]){
      q[k++] = v[i++];
    }else{
      q[k++] = v[j++];
    }
  }
  while (i < meio) {
    q[k++] = v[i++];
  }
  while (j < fim) {
    q[k++] = v[j++];
  }
  for (int i = inicio; i < fim; i++) {
    v[i] = q[i-inicio];
  }
  free(q);
}




void mergesort(int inicio,int fim,int *v){
  if (inicio < fim-1){
    int meio = (inicio + fim)/2;
    mergesort(inicio,meio,v);
    mergesort(meio,fim,v);
    merge(inicio,meio,fim,v);
  }

}






int main(){

  int vetor[10]={1,8,-8,10,-88,4,0,3,2,66};

  mergesort(0,9,vetor);

  for (size_t i = 0; i < 10; i++) {
    printf("%i ",vetor[i]);
  }

  printf("\n");

  return 0;
}
