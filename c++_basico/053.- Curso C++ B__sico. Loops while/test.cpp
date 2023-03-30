#include <iostream>

int main(){
   int contador{1};

   while(contador <= 50){
      // a los numeros menores a 10 les agrega un cero antes para que queden bien formateados
      if(contador <10){
         std::cout << '0';
      }

      std::cout << contador << ' ';

      // si la variable contador es divisible por 10 imprimimos un salto de linea para formatear de 10 en 10
      if(contador % 10 == 0 ){
         std::cout << '\n';
      }

      // incrementa el contador
      ++contador;
   }

   return 0;
}
