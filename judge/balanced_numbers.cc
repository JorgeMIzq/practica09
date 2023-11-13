/** 
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 13 de noviembre de 2023  
  * @brief a function that tells if a natural number n is balanced or not. 
  *
  */


#include <iostream>

bool is_balanced(int n) {
  std::string num_str = std::to_string(n);
  int even_sum = 0;
  int odd_sum = 0;
  for (int i = 0; i < num_str.length(); i++) {
    int digit = num_str[i] - '0';
    (i % 2 == 0) ? even_sum += digit : odd_sum += digit;
  }

  return even_sum == odd_sum;
}

