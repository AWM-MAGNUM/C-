#include <iostream>
#include <string>

int main()
{
    std::string x = "10";
    std::string *stringPTR = &x;
    std::string &stringREF = x;

    std::cout << "x = " << x << std::endl;
    std::cout << "stringPTR POINTS TO :  = " << *stringPTR << std::endl;
    std::cout << "stringREF REFERES TO : " << stringREF << std::endl;

    std::cout << "Address of x:              " << &x << std::endl;
    std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Address held by stringREF: " << &stringREF << std::endl; 
}

// Pointeur:
// Est une variable qui stocke une adresse mémoire.
// Peut être nullptr (ne pointe nulle part).
// Peut changer pour pointer vers une autre adresse.
// L'accès à la valeur pointée nécessite une déréférenciation (*pointer).

// Référence:
// Est un alias pour une autre variable (ils partagent la même adresse mémoire).
// Doit toujours référer à un objet (ne peut pas être "null").
// Ne peut pas être rebindé pour référer à un autre objet une fois initialisé.
// L'accès à la valeur ne nécessite pas de déréférenciation spéciale.