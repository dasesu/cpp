#include <iostream>

int main( int argc, char* argv[]){
   int x{8};
   int y = ++x; // x se incrementa a 9, x es evaluado al valor 9, y 9 es asignado a y 
   std::cout << x << ' ' << y << '\n';
   y = 0; 
   y = x++; // Se copia el valor original de x (8), x es incrementado a 9, la copia del x original, 8 es asignada a y.
   std::cout << x << ' ' << y << '\n';
   return 0;
}
