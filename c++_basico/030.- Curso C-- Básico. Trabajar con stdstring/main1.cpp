#include <iostream>
#include <string>

int main(){
	std::cout << "Escriba su nombre y primer apellido: ";
	std::string nombre{};
	std::cin >> nombre; // esto no funcionará como esperamos proque cin corta en 					 // los espacios en blanco
	std::cout << "Escriba su edad: ";
	std::string edad{};
	std::cin >> edad;

	std::cout << "tu nombre es " << nombre << " y tu edad es " << edad << '\n';

	return 0;
}