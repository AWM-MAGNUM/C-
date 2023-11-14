#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main() 
// {
//     // Créer un objet Dog
//     Dog dog("Bulldog");
//     dog.makeSound(); // Devrait afficher "Bark!"

//     // Créer un objet Cat
//     Cat cat("Siamese");
//     cat.makeSound(); // Devrait afficher "Meow!"

//     // Utilisation de pointeurs d'Animal pour montrer le polymorphisme
//     Animal* animalPtr = new Dog("Labrador");
//     animalPtr->makeSound(); // Devrait afficher "Bark!" grâce au polymorphisme

//     // Nettoyage
//     delete animalPtr;

//     // Créer un objet Animal et utiliser makeSound
//     Animal genericAnimal;
//     genericAnimal.makeSound(); // Devrait afficher "Some generic animal sound"

//     return 0;
// }

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* x = new WrongAnimal();
    const WrongAnimal* z = new WrongCat();

    std::cout << "\033[93m" << j->getType() << " " << "\033[0m" << std::endl;
    std::cout << "\033[93m" << i->getType() << " " << "\033[0m" << std::endl;
    std::cout << "\033[93m" << x->getType() << " " << "\033[0m" << std::endl;
    std::cout << "\033[93m" << z->getType() << " " << "\033[0m" << std::endl;

    meta->makeSound();
    j->makeSound();
    i->makeSound();
    x->makeSound();
    z->makeSound();
    delete(i);
    delete(j);
    delete(x);
    delete(z);
    delete(meta);
}