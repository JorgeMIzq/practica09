 /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 11 de noviembre de 2023  
  * @brief un programa que que incluya una función que tome como parámetro una cadena
           de caracteres sin espacios y la modifuque de forma que queden las consonantes
           en minúscula y las vocales en mayúscula. Los caracteres que no sean letras
           mayúsculas ni minúsculas deberán permanecer inalterados.
  *
  */

#include <iostream>
#include <string>
#include <cctype>

// Función para capitalizar las vocales en una cadena
void CapitalizarVocales(std::string& cadena) {
  for (char& caracter : cadena) {
    if (std::isalpha(caracter)) {
      if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
          caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
        caracter = std::toupper(caracter);  // Convertir vocales a mayúsculas
      } else {
        caracter = std::tolower(caracter);  // Convertir consonantes a minúsculas
      }
    }
  }
}

// Función principal
int main(int argc, char* argv[]) {
  // Verificar el número correcto de argumentos de línea de comandos
  if (argc != 2) {
    std::cerr << "Modo de uso: " << argv[0] << " <cadena_sin_espacios>" << std::endl;
    return 1; // Devolver 1 en caso de error
  }

  // Obtener la cadena de entrada del argumento de línea de comandos
  std::string input(argv[1]);

  // Capitalizar las vocales en la cadena
  CapitalizarVocales(input);

  // Mostrar el resultado
  std::cout << "Resultado: " << input << std::endl;

  return 0; 
}

