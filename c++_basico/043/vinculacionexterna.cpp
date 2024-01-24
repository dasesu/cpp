#include <iostream>
extern int g_x; // definicion anticipada para variable global
extern int g_y; // definicion anticipada para variable global

int main(){
   std::cout << g_x << '\n';
   std::cout << g_y << '\n';
   return 0;
}
