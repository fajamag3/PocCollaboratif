#include <iostream>
#include "multiplyNumber.hpp"

int main() {
    long double a, b;
    
    std::cout << "Entrez le premier nombre: ";
    std::cin >> a;
    
    std::cout << "Entrez le deuxième nombre: ";
    std::cin >> b;
    long double resultOfMultiplication= multiplyNumber(a, b);
    std::cout << "Resultat de la multiplication: " << a << " * " << b << " = " << resultOfMultiplication << std::endl;
    
    return 0;
}