#include <iostream>

void doNothing(int&){

}

int main(){
	// definimos una variable integer llamada x
	int x;

	// imprime el valor de x en la pantalla, tendremos una salida imprevisible porque x está sin inicializar
	std::cout<<x;
	return 0;
}