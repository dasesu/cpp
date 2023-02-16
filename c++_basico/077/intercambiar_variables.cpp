#include <iostream>
#include <utility>

int main(){
   int x{2};
   int y{4};
   std::cout << "Antes de swap x:" << x << ", y:" << y << '\n';
   std::swap(x,y); // intercambia los valores de x e y.
   std::cout << "Despues de swap x:" << x << ", y:" << y << '\n';
   return 0;
}
