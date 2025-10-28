#include <iostream>

int main() {
    int a, b;
    
    std::cout << "Entrez le premier nombre: ";
    std::cin >> a;
    
    std::cout << "Entrez le deuxième nombre: ";
    std::cin >> b;
    
    std::cout << "Resultat de la multiplication: " << a << " * " << b << " = " << a * b << std::endl;
    
    return 0;
}