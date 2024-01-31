#include <iostream>
#include <iterator> // para std::size

bool esVocal(char ch){
  switch(ch){
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
      return true;
    default:
      return false;
  }
}


int main (int argc, char *argv[]) {
  char nombre[]{"Francisco lorena maria jesus y su acordeon"};
  int arrayLength{ static_cast<int>(std::size(nombre)) };
  int numVocales{0};

  for( char* ptr{nombre}; ptr != (nombre + arrayLength); ++ptr ){
    if( esVocal(*ptr) ){
      ++numVocales;
    }
  }

  std::cout << "El numero de vocales es: "<< numVocales << '\n';
  return 0;
}
