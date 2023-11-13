/** 
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 13 de noviembre de 2023  
  * @brief una función que devuelva cierto si y sólo si el 
           natural n es una potencia de 3.
  *
  */

#include <iostream>

bool es_potencia_de_3(int n) {
  if (n == 0) {
    return false;  // 0 no es una potencia de 3
  }
  while (n % 3 == 0) {
    n /= 3;
  }
   
  return n == 1;  // Verifica si n se ha reducido a 1, lo que indica que era una potencia de 3
}

