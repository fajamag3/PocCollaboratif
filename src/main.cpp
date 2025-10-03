#include <iostream>

long double subtract(long double num1, long double num2);

int main() {
    char operation;
    long double a, b;

    std::cout << "Choisissez une opération (+, -, *): ";
    std::cin >> operation;

    std::cout << "Entrez le premier nombre: ";
    std::cin >> a;

    std::cout << "Entrez le deuxième nombre: ";
    std::cin >> b;

    switch (operation) {
        case '+':
            std::cout << "Résultat: " << a << " + " << b << " = " << a + b << std::endl;
            break;
        case '-':
            std::cout << "Résultat: " << a << " - " << b << " = " << subtract(a, b) << std::endl;
            break;
        case '*':
            std::cout << "Resultat: " << a << " * " << b << " = " << a * b << std::endl;
            break;
        default:
            std::cout << "Opération invalide. Utilisez +, -, ou *." << std::endl;
    }

    return 0;
}
