#include <iostream>

int main(){
  int valor{7};
  int* ptr{ &valor };

  std::cout << ptr << '\n';
  std::cout << ptr + 1 << '\n';
  std::cout << ptr + 2 << '\n';
  std::cout << ptr + 3 << '\n';

  return 0;
}

