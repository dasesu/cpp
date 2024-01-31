#include <iostream>

int main(){
  short valor{7};
  short* ptr{ &valor };

  std::cout << ptr << '\n';
  std::cout << ptr + 1 << '\n';
  std::cout << ptr + 2 << '\n';
  std::cout << ptr + 3 << '\n';
  return 0;
}

