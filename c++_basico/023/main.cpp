#include <iostream>
#include <limits>

int main(){
//int x{ -2147483640000 };
//int x = -2147483640000 ;
int x = -4294967295;

printf("x is %d\n", x );

const int min_int = std::numeric_limits<int>::min();
const int max_int = std::numeric_limits<int>::max();

printf("valor minimo de int: %d\n", min_int );
printf("valor maximo de int: %d\n", max_int );
   return 0;
}
