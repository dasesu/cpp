#include <iostream>

void imprimirSonrisa(bool omitir){
   if(omitir)
      goto final; // salto adelante, la etiqeuta de delcaracion final es visible porque tiene alcance de funcion

   std::cout << "sonrie!";
   final:
      ; // las etiqeutas de declaracion deben estar asociadas con una declaracion, el punto y coma es una declaracion null 
}

int main( int argc, char *argv[] ){
   setlocale(LC_ALL, "es_ES.UTF-8");
   imprimirSonrisa(true);
   imprimirSonrisa(false);
   return 0;
}
