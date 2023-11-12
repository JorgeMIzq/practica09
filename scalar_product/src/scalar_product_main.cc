  /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date  
  * @brief un programa que 
  *
  */

#include <iostream>
#include <vector>

// Función para calcular el producto escalar de dos vectores
double CalcularProductoEscalar(const std::vector<double>& vector1, const std::vector<double>& vector2) {
  // Verificar si los vectores tienen la misma longitud
  if (vector1.size() != vector2.size()) {
    std::cerr << "Error: Los vectores no tienen la misma longitud." << std::endl;
    return 0.0; // Devolver 0 en caso de error
  }

  // Calcular el producto escalar
  double resultado = 0.0;
  for (size_t i = 0; i < vector1.size(); ++i) {
    resultado += vector1[i] * vector2[i];
  }
  return resultado;
}

int main(int argc, char* argv[]) {
  // Verificar el número correcto de argumentos de línea de comandos
  if (argc != 7) {
    std::cerr << "Modo de uso: " << argv[0] << " <v1_elem1> <v1_elem2> <v1_elem3> <v2_elem1> <v2_elem2> <v2_elem3>" << std::endl;
    return 1; // Devolver 1 en caso de error
  }
  // Convertir los argumentos de línea de comandos a vectores de números reales
  std::vector<double> vector1, vector2;
  try {
    for (int i = 1; i <= 3; ++i) {
      vector1.push_back(std::stod(argv[i]));
    }
    for (int i = 4; i <= 6; ++i) {
      vector2.push_back(std::stod(argv[i]));
    }
  } catch (...) {
    std::cerr << "Error al leer los vectores. Asegúrese de que los valores sean números reales." << std::endl;
    return 1; // Devolver 1 en caso de error
  }
  // Calcular y mostrar el producto escalar
  double productoEscalar = CalcularProductoEscalar(vector1, vector2);
  std::cout << "Producto escalar: " << productoEscalar << std::endl;

  return 0;
}
