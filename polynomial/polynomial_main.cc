 /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Jorge Machado Izquierdo 0101638904@ull.edu.es
  * @date 11 de noviembre de 2023  
  * @brief un programa que incluya una función C++ que reciba como parámetros un
           vector de coeficientes reales coefficients y un valor real value y calcule
           el valor del polinomio correspondiente en el valor dado
  *
  */

#include <iostream>
#include <vector>

// Function to calculate the value of the polynomial
double CalculatePolynomial(const std::vector<double>& coefficients, double value) {
    double result = 0.0;

    for (const double& coef : coefficients) {
        result = result * value + coef;
    }

    return result;
}

// Function to display the correct usage message
void ShowUsageMessage(const char* program) {
    std::cerr << "Usage: " << program << " <coefficient1> <coefficient2> ... <value>" << std::endl;
}

int main(int argc, char* argv[]) {
    // Verify the correct number of command line arguments
    if (argc < 3) {
        ShowUsageMessage(argv[0]);
        return 1; // Return 1 in case of error
    }

    // Get coefficients of the polynomial
    std::vector<double> coefficients;
    for (int i = 1; i < argc - 1; ++i) {
        try {
            coefficients.push_back(std::stod(argv[i]));
        } catch (...) {
            std::cerr << "Error: Coefficients must be real numbers." << std::endl;
            return 1; // Return 1 in case of error
        }
    }

    // Get the value to evaluate the polynomial
    double value;
    try {
        value = std::stod(argv[argc - 1]);
    } catch (...) {
        std::cerr << "Error: The value to evaluate must be a real number." << std::endl;
        return 1; // Return 1 in case of error
    }

    // Calculate and display the value of the polynomial
    double result = CalculatePolynomial(coefficients, value);
    std::cout << "Result of the polynomial: " << result << std::endl;

    return 0;
}

