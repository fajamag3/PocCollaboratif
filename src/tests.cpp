#include <iostream>
#include "functions.h"
#include "tests.h"

using namespace OPERATIONS;
// ==============================
// === Test Addition ============
// ==============================
bool testAddition()
{
    bool ok = true;

    ok &= (addition(2, 3) == 5);
    ok &= (addition(-1, 1) == 0);
    ok &= (addition(10, -5) == 5);

    std::cout << "[Test Addition] " << (ok ? "OK" : "ECHEC") << "\n";
    return ok;
}



// ==============================
// === Test Multiplication ======
// ==============================
bool testMultiplication()
{
    bool ok = true;

    ok &= (multiplication(2, 3) == 6);
    ok &= (multiplication(-2, 3) == -6);
    ok &= (multiplication(0, 42) == 0);

    std::cout << "[Test Multiplication] " << (ok ? "OK" : "ECHEC") << "\n";
    return ok;
}



// ==============================
// === Test Soustraction ========
// ==============================
bool testSubtraction()
{
    bool ok = true;

    ok &= (subtraction(5, 3) == 2);
    ok &= (subtraction(0, 5) == -5);
    ok &= (subtraction(-2, -2) == 0);

    std::cout << "[Test Soustraction] " << (ok ? "OK" : "ECHEC") << "\n";
    return ok;
}



// ==============================
// === Test Global ==============
// ==============================
bool testGlobal()
{
    bool ok = true;

    ok &= testAddition();
    ok &= testMultiplication();
    ok &= testSubtraction();

    std::cout << "\n[Test Global] " << (ok ? "TOUS LES TESTS OK" : "CERTAINS TESTS ONT ECHOUE") << "\n";
    return ok;
}