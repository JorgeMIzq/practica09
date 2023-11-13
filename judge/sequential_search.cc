/** 
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 13 de noviembre de 2023  
  * @brief a function that tells if the integer number x is present in the vector of integer numbers v.
  *
  */

#include <iostream>
#include <vector>
using namespace std;

bool exists(int x, const vector<int> &v) {
  int n = v.size();
  for (int i = 0; i < n; i++) {
    if (v[i] == x) {
      return true;
    }
  }
  return false;
}
