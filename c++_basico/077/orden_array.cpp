#include <algorithm> // para std::sort
#include <iostream>
#include <iterator> // para std::size

int main(){
   int array[]{30, 50, 20, 10, 40};

   for (int i{0}; i < static_cast<int>(std::size(array)); ++i) {
      std::cout << array[i] << ' ';
   }
   std::cout << '\n';

   std::sort( std::begin(array), std::end(array) );

   for (int i{0}; i < static_cast<int>(std::size(array)); ++i) {
      std::cout << array[i] << ' ';
   }
   std::cout << '\n';

   return 0;
}
