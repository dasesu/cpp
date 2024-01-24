#include <iostream>

struct Alumno{
  int id{};
  int edad{};
  double tutorId{};
};


int main (int argc, char *argv[]) {
  Alumno juan{ 1, 17, 2.5 };

  ++juan.edad; // Juan ha cumplido a;os
  juan.tutorId = 3; // Juan ha cambiado de tutor

  Alumno* ptr{ &juan };
  std::cout << ptr.id; // Error de compilacion: no podemos usar operador
                       // . con punteros.

  return 0;
}

