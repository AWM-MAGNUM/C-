#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private :
    Brain *brain;
public:
    Dog();
    Dog(const std::string &obj);
    Dog(const Dog &obj);
    Dog &operator=(const Dog &dog);
    Brain* getBrain();
    virtual void makeSound() const ;
    ~Dog();
};

#endif