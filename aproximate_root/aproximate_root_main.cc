  /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date  11 de noviembre de 2023
  * @brief programa que incluya una función que tome como parámetro un número real
           mayor que cero number y devuelva su raíz cuadrada con un error de ±EPSILON
  *
  */

#include <iostream>

// Constante para la precisión EPSILON
const double EPSILON = 1e-4;

// Función para aproximar la raíz cuadrada de un número
double ApproximateRoot(double number) {
  // Valores iniciales
  double root = 1.0;
  double delta = 1.0;
  // Mientras que la diferencia entre root² y number sea mayor que EPSILON
  while (std::abs(root * root - number) > EPSILON) {
    // Si delta es positivo: mientras que root² sea menor que number, sume delta a root
    // En caso contrario: mientras que root² sea mayor que number, sume delta a root
    while ((delta > 0 && root * root < number) || (delta < 0 && root * root > number)) {
      root += delta;
    }
    delta *= -0.5;
  }
  return root;
}

int main(int argc, char* argv[]) {
  // Verificar el número correcto de argumentos de línea de comandos
  if (argc != 2) {
    std::cerr << "Modo de uso: " << argv[0] << " <number>" << std::endl;
    return 1; // Devolver 1 en caso de error
  }
  // Obtener el número de la línea de comandos
  double number;
  try {
    number = std::stod(argv[1]);
  } catch (...) {
    std::cerr << "Error: El número debe ser un valor real." << std::endl;
    return 1; // Devolver 1 en caso de error
  }
  // Calcular y mostrar la raíz cuadrada aproximada
  double result = ApproximateRoot(number);
  std::cout << "Raíz cuadrada aproximada: " << result << std::endl;

  return 0; 
}

