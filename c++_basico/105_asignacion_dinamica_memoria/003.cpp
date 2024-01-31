#include <iostream>

int main(){

  // asignamos memoria de forma dinamica usando "new"
  //new int; 

  // Pero como la almacenamos?, con una variable del tipo int daria error.
  // int x{ new int };  // error 

  // podemos probar usando auto que si funciona
  auto y{ new int }; // la pregunta es: de que tipo tiene que ser auto? porque no funciona con int?
  std::cout << y; // 



  return 0;
}

