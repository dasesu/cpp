#include <iostream>

struct Alumno{
  int id{};
  int edad{};
  double tutorId{};
};

void imprimirAlumno(const Alumno& e){
  // usamsos el operador de seleccion de miembro (.)
  // para seleccionar un miembro desde referencia a struct                                             
  std::cout << "Id: " < e.id;
  std::cout << "Edad: " < e.edad;
  std::cout << "Tutor: " < e.tutorId;
}

int main (int argc, char *argv[]) {
  Alumno juan{ 1, 17, 2.5 };

  // usamos operador de seleccion de miembro (.)
  // para seleccionar un miembro del objeto struct                                        
  ++juan.edad; // Juan ha cumplido a;os
  juan.tutorId = 3; // Juan ha cambiado de tutor

  return 0;
}

