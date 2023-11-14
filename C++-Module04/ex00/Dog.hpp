#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog(const std::string &obj);
    Dog(const Dog &obj);
    Dog &operator=(const Dog &dog);
    void makeSound() const ;
    ~Dog();
};

#endif