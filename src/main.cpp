#include <iostream>

long double subtract(long double num1, long double num2);

long double addition(long double num1, long double num2);

int main()
{
    char operation;
    long double a, b;

    std::cout << "Choisissez une opération (+, -, *): ";
    std::cin >> operation;

    std::cout << "Entrez le premier nombre: ";
    std::cin >> a;

    std::cout << "Entrez le deuxième nombre: ";
    std::cin >> b;

    std::cout << "Resultat: " << a << " * " << b << " = " << a * b << std::endl;

    if (operation == '+')
    {
        std::cout << "Addition : " << a << " + " << b << " = " << addition(a, b) << std::endl;
    }

    return 0;
}
