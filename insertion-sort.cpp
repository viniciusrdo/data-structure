
#include <stdio.h>


void insertionSort(int array[], int tamanho) {
      int i, j, tmp;
      for (i = 1; i < tamanho; i++) {
            j = i;
            while (j > 0 && array[j - 1] > array[j]) {
                  tmp = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = tmp;
                  j--;
            }
      }
}

int main(int argc, char** argv)
{
   int array[100], tamanho;
   
   printf("\n Digite a quantidade de termos: ");
   
   scanf("%d", &tamanho);
   	
	printf("\n\n Digite os valores:");
   
   for(int i = 0; i < tamanho;i++){
    
	  printf("\nValor %d : ",i+1);
    
	  scanf("%d",&array[i]);
   }
	printf ("\nInsertion Sort: ");
    
	  insertionSort(array,tamanho);
    
	  printf("\n\nArray em ordem crescente: ");
    
	  for(int i=0; i<tamanho; i++){
    
	  printf("\n  %d", array[i]);
   }
 
   return 0;
}
