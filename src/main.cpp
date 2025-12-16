#include <iostream>
#include "functions.h"
#include "tests.h"

int main()
{
    int choix = 0;

    while (true)
    {
        std::cout << "\n=== CALCULATRICE ===\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Multiplication\n";
        std::cout << "3. Soustraction\n";
        std::cout << "4. Quitter\n";
        std::cout << "5. Lancer les tests\n";
        std::cout << "Votre choix : ";
        std::cin >> choix;

        if (choix == 4)
        {
            std::cout << "Au revoir !\n";
            break;
        }

        int a = 0, b = 0;
        std::cout << "Entrez le premier nombre : ";
        std::cin >> a;
        std::cout << "Entrez le second nombre : ";
        std::cin >> b;

        switch (choix)
        {
            case 1:
                std::cout << "Résultat : " << addition(a, b) << "\n";
                break;

            case 2:
                std::cout << "Résultat : " << multiplication(a, b) << "\n";
                break;

            case 3:
                std::cout << "Résultat : " << subtraction(a, b) << "\n";
                break;

		case 5:
    		    testGlobal();
    		    break;

            default:
                std::cout << "Choix invalide.\n";
                break;
        }
    }

    return 0;
}
