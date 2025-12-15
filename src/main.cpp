#include <iostream>
#include "multiplyNumber.hpp"
#include "addition.hpp"

int main() {
    char operation;
    long double a, b;
    
    std::cout << "Choisissez une opération (+, -, *): ";
    std::cin >> operation;
    std::cout << "Entrez le premier nombre: ";
    std::cin >> a;

    std::cout << "Entrez le deuxième nombre: ";
    std::cin >> b;
    if (operation == '*')
    {
        long double resultOfMultiplication= multiplyNumber(a, b);
        std::cout << "Resultat de la multiplication: " << a << " * " << b << " = " << resultOfMultiplication << std::endl;
    } 

    if (operation == '+')
    {
        long double resultOfAddition = addition(a, b);
        std::cout << "Resultat de l'addition: " << a << " + " << b << " = " << resultOfAddition << std::endl;
    }
    
   
    
    return 0;
}
