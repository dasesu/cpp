#include <iostream>

static g_x{ 3 }; // este interno g_x solo es accesible desde dentro de este archivo

int main (int argc, char *argv[]){
   std::cout << g_x << '\n'; // usa el g_x de VinculacionInterna
   return 0;
}
