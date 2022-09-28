#include <iostream>
// #include <stdio.h>
// using namespace std;

int sumar( int x, int y ){  // esta es la definición
   return x + y;  // esta es la declaración
}

int main(){
   int z{ sumar(5,6) }; // llamada a la funcion
   std::cout << z << "\n";
   return 0;
}
