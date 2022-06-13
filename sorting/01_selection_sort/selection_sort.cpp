#include <iostream>

   int selection_sort(int *A, int tam){
      // Es un algoritmo que tiene una complejidad de tiempo de O(n^2)
      int pos_min{0}; // almacena la posicion del valor minimo parcial 
      for( int j=0;j<tam-1;j++){
         pos_min=j;
         for(int i=j+1;i<tam;i++){
            if( A[i] < A[pos_min] ){
               pos_min = i;
            }
         }
         printf("el minimo actual es: %d\n", A[pos_min]);
         int aux{}; // variable auxiliar 
         aux = A[j];
         A[j] = A[pos_min];
         A[pos_min] = aux;
      }
      return 0;
   }

   int main(){
      FILE *fp;
      int val{0};
      int tam{10000};
      int A[tam] = {};
      fp = fopen("file.txt", "r");
      int i{0};
      while(i<tam){
         fscanf(fp, "%d\n", &val);
         A[i] = val;
         i++;
      }
      fclose(fp);

      selection_sort( A, tam );

      fp = fopen("output.txt", "w");
      i=0;
      while(i<tam){
         fprintf(fp,"%d\n", A[i]);
         i++;
      }
      fclose(fp);

      return 0;
   }

