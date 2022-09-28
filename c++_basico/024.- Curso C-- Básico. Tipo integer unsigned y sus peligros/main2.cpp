#include <iostream>

int main(){
   signed int s{-1};
   unsigned int u{1};

   if( s < u ){ 
      std::cout << "-1 es menor que 1";
   }else{
      std::printf("%d\n", s);
      std::printf("%d\n", u);
      std::cout << "1 es menor que -1";
   }
   return 0;
}
