#include <iostream>

int main (int argc, char *argv[]){
   int x{8};
   int y{8};
   std::cout << x << ' ' << y << '\n';
   std::cout << ++x << ' ' << --y << '\n';
   std::cout << x << ' ' << y << '\n';
   std::cout << x++ << ' ' << y-- << '\n';
   std::cout << x << ' ' << y << '\n';

   return 0;
}
