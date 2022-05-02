#include <iostream>

void imprimir(int x){ // imprimir toma un parametro int
   std::cout << x << '\n';
}

 int main(){
   
   imprimir(static_cast<int>(5.5)); // que ocurre cuando le pasamos un valor double?
 
   return 0;
 }