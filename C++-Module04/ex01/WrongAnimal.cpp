#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "\033[31m" << "Default constructor (WrongAnimal) called A WrongAnimal has been created" << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &obj)
{
    std::cout << "\033[32m" << "Parameterized constructor (WrongAnimal) called" << "\033[0m" << std::endl;
    std::cout << "\033[32m" << "A WrongAnimal of type " << obj << " has been created" << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "\033[33m" << "Copy constructor (WrongAnimal) called A WrongAnimal has been copied" << "\033[0m" << std::endl;
    this->type = obj.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) 
{
    if (this != &obj) 
    {
        this->type = obj.type;
        std::cout << "\033[34m" << "Copy assignment operator (WrongAnimal) called" << "\033[0m" << std::endl;
    }
    return *this;
}

std::string WrongAnimal::getType() const
{
    return type;
}


void WrongAnimal::makeSound() const 
{
    std::cout << "\033[35m" << "WrongAnimal Sound" << "\033[0m" << std::endl;
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "\033[92m" << "Destructor (WrongAnimal) called A WrongAnimal has been destroyed" << "\033[0m" << std::endl;
}
