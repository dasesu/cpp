#include <iostream>
#include <string>

int main(){
	std::cout << "Escriba su nombre y primer apellido: ";
	std::string nombre{};
	std::getline( std::cin >> std::ws, nombre); 
	std::cout << "Escriba su edad: ";
	std::string edad{};
	std::getline( std::cin >> std::ws, edad);

	std::cout << "tu nombre es " << nombre << " y tu edad es " << edad << '\n';

	return 0;
}