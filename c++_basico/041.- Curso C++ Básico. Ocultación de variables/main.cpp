#include <iostream>

int main(){

   int contenidos{5};  // el alcance de esta variable abarca todo el codigo
   {
      std::cout << contenidos << '\n'; // imprimira un valor de 5
      int contenidos{ 0 };
      contenidos = 10; // a cual de las variables asignamos el valor 10?
      std::cout << contenidos << '\n';
   }
   std::cout << contenidos << '\n';
   return 0;      
}