#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
protected:
    std::string type;
public:
    AAnimal();
    AAnimal(const std::string &obj);
    AAnimal(const AAnimal &obj);
    AAnimal &operator=(const AAnimal &obj);
    std::string getType() const;
    virtual void makeSound() const = 0;
    virtual ~AAnimal();
};

#endif
