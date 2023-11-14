#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() 
{
    std::cout << "\033[31m" << "Default constructor (Cat) called A Cat has been created" << "\033[0m" << std::endl;
    this->brain = new Brain(); 
    type = "Cat";          
}

Cat::Cat(const std::string &obj) : AAnimal(obj) 
{
    std::cout << "\033[32m" << "Parameterized constructor (Cat) called" << "\033[0m" << std::endl;
    this->brain = new Brain();  
    type = obj;                
    std::cout << "\033[32m" << "A Cat of type " << type << " has been created" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat &obj) : AAnimal(obj) 
{
    std::cout << "\033[33m" << "Copy constructor (Cat) called A Cat has been copied" << "\033[0m" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(const Cat &Cat) 
{
    if (this != &Cat) 
    {
        AAnimal::operator=(Cat);
        delete this->brain;                  
        this->brain = new Brain(*(Cat.brain));  
        std::cout << "\033[34m" << "Copy assignment operator (Cat) called" << "\033[0m" << std::endl;
    }
    return *this;
}

Brain* Cat::getBrain()
{
    return brain;
}

void Cat::makeSound() const 
{
    std::cout << "\033[35m" << "Meaaaaaou!" << "\033[0m" << std::endl;
}

Cat::~Cat() 
{
    std::cout << "\033[92m" << "Destructor (Cat) called A Cat has been destroyed" << "\033[0m" << std::endl;
    delete this->brain;
}