#include "Fixed.hpp"

Fixed::Fixed(){
    value = 314;
    std::cout << "Constructor default" << std::endl;
}

Fixed::Fixed(const Fixed &p) {
    value = p.value;
     std::cout << "Copy constructor " << std::endl;
}

Fixed &Fixed::operator=(const Fixed &p)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &p) // a = a; // eviter la copie
        value = p.value;
    return *this;
}

int Fixed::getRawBits(void) const
{
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
