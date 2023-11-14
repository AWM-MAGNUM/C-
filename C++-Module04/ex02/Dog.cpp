#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() 
{
    std::cout << "\033[31m" << "Default constructor (Dog) called A Dog has been created" << "\033[0m" << std::endl;
    this->brain = new Brain(); 
    type = "Dog";          
}

Dog::Dog(const std::string &obj) : AAnimal(obj) 
{
    std::cout << "\033[32m" << "Parameterized constructor (Dog) called" << "\033[0m" << std::endl;
    this->brain = new Brain();  
    type = obj;                
    std::cout << "\033[32m" << "A Dog of type " << type << " has been created" << "\033[0m" << std::endl;
}

Dog::Dog(const Dog &obj) : AAnimal(obj) 
{
    std::cout << "\033[33m" << "Copy constructor (Dog) called A Dog has been copied" << "\033[0m" << std::endl;
    *this = obj;  
}

Dog &Dog::operator=(const Dog &dog) 
{
    std::cout << "\033[34m" << "Copy assignment operator (Dog) called" << "\033[0m" << std::endl;
    if (this != &dog) 
    {                
        this->brain = new Brain(*(dog.brain));  
    }
    return *this;
}

Brain*    Dog::getBrain()
{
    return brain;
}

void Dog::makeSound() const 
{
    std::cout << "\033[35m" << "Woof Woof!" << "\033[0m" << std::endl;
}

Dog::~Dog() 
{
    std::cout << "\033[92m" << "Destructor (Dog) called A Dog has been destroyed" << "\033[0m" << std::endl;
    delete this->brain;
}