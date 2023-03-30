#include <iostream>

 int main(){

    std::cout << "Escribe un char en el teclado: \n";
    char c{};
    std::cin >> c; // c = 'h',"ola" se deja en cola
    std::cout << "has escrito: " << c <<'\n';
    
    // Nota: El siguiente cin no le pide al usuario una entrada. usa la entrada de la cola
    std::cin >> c; // c = 'o', "la" se deja en cola
    std::cout << "has escrito: " << c << '\n';

    // Nota: El siguiente cin no le pide al usuario una entrada. usa la entrada de la cola
    std::cin >> c; // c = 'o', "la" se deja en cola
    std::cout << "has escrito: " << c << '\n';

    // Nota: El siguiente cin no le pide al usuario una entrada. usa la entrada de la cola
    std::cin >> c; // c = 'o', "la" se deja en cola
    std::cout << "has escrito: " << c << '\n';

    // Nota: El siguiente cin no le pide al usuario una entrada. usa la entrada de la cola
    std::cin >> c; // c = 'o', "la" se deja en cola
    std::cout << "has escrito: " << c << '\n';
    

    return 0;
 }
