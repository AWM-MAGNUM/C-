#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main() 
// {
//     Dog dog;
//     Cat cat;
//     std::cout << "Direct calls:" << std::endl;
//     dog.makeSound();
//     cat.makeSound();
//     std::cout << "\nPolymorphic calls:" << std::endl;
//     Animal* animalDog = &dog;
//     Animal* animalCat = &cat;
//     animalDog->makeSound();
//     animalCat->makeSound();
// }

int main() 
{
    Dog dog1;
    dog1.makeSound();
    dog1.getBrain()->setIdea(0, "Fetch the ball");
    dog1.getBrain()->getIdeas();

    Dog dog2(dog1);
    dog2.getBrain()->getIdeas();

    std::cout <<dog1.getBrain() << std::endl << dog2.getBrain() <<std::endl;

    const int arraySize = 4;
    AAnimal* animalArray[arraySize];
    animalArray[0] = new Dog();
    animalArray[1] = new Dog();
    animalArray[2] = new Cat();
    animalArray[3] = new Cat();

    std::cout<<std::endl << "-----   free the memory  ------"<<std::endl <<std::endl;

    for (int index = 0; index < arraySize; index++) {
        delete animalArray[index];
    }

    return 0;
}