#include <iostream>

int main(){
    unsigned short x{65535};
    std::cout << "el valor de x es: " << x << '\n';

    x=65536;
    std::cout << "el valor de y es: " << x << '\n';
    return 0;
}