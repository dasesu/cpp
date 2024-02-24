#include <iostream>

class Node {
public:
  int info;
  Node* pNext;
};


typedef Node* position;

position& get(position &value){ // paso el puntero por referencia. 
  std::cout << value << '\n'; // me refiero al puntero original 
  return value; // devuelvo el mismo puntero
}

int main (int argc, char *argv[]) {
  Node* pFirst = new Node; // creo una nueva direccion en el heap para un tipo Nodo
 
  (*pFirst).info = 7;
  pFirst->info = 5;

  Node* pSecond = new Node; 
  (*pSecond).info = 8;
  pSecond->info = 4;
  (*pSecond).pNext = nullptr;

  (*pFirst).pNext = pSecond;


  std::cout << (pFirst) << "\n";
  std::cout << (*pFirst).info << '\n';  

  // std::cout << pSecond << "\n";
  // std::cout << (*pSecond).info << '\n';  
  
  get(pFirst);


  return 0;
}
