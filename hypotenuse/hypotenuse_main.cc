  /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 11 de noviembre de 2023 
  * @brief un programa que utilice incluya una función que tome como parámetros
           los catetos de un triángulo rectángulo, como valores reales, y 
           devuelva su hipotenusa, haciendo uso de la función implementada en el 
           ejercicio 3 para calcularla.
  *
  */

#include <iostream>
#include <cmath> // Necesario para la función std::sqrt

// Función para calcular la hipotenusa de un triángulo rectángulo
double CalculateHypotenuse(double leg1, double leg2) {
  return std::sqrt(leg1 * leg1 + leg2 * leg2);
}

int main(int argc, char* argv[]) {
  // Verificar el número correcto de argumentos de línea de comandos
  if (argc != 3) {
    std::cerr << "Modo de uso: " << argv[0] << " <cateto1> <cateto2>" << std::endl;
    return 1; // Devolver 1 en caso de error
  }
  // Obtener los catetos del triángulo rectángulo de la línea de comandos
  double leg1, leg2;
  try {
    leg1 = std::stod(argv[1]);
    leg2 = std::stod(argv[2]);
  } catch (...) {
    std::cerr << "Error: Los catetos deben ser valores reales." << std::endl;
    return 1; // Devolver 1 en caso de error
  }
  // Calcular y mostrar la hipotenusa
  double hypotenuse = CalculateHypotenuse(leg1, leg2);
  std::cout << "Hipotenusa: " << hypotenuse << std::endl;

  return 0;
}
