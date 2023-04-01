#include <iostream>

int valor{5}; // variable global

void foo(){
   std::cout << "Valor de la variable global valor es " << valor << '\n';
}

int main(){
   int valor{7}; // la variable local valor oculta a la variable gloabl 
   ++valor;
   std::cout << "valor de la variable local valor es " << valor << '\n';
   foo();

   return 0;
}

