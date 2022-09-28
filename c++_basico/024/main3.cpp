#include <iostream>

int main(){
    short x{32767};
    std::cout << "el valor de x es: " << x << '\n';

    x=32768;
    std::cout << "el valor de y es: " << x << '\n';
    return 0;
}
