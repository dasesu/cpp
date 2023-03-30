#include <iostream>

int main(){
   char c{97};
   std::cout << c << " tiene el valor " << static_cast<int>(c) << '\n';
   return 0;
}