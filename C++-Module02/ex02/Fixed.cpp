/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:37:19 by bel-kase          #+#    #+#             */
/*   Updated: 2023/11/01 16:56:24 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor Called" << std::endl;
    value = 0;
}

Fixed::Fixed(const int iValue)
{
    std::cout << "int constructor Called" << std::endl;
    value = iValue << fb;
}

Fixed::Fixed(const float fValue)
{
    std::cout << "Float constructor Called" << std::endl;
    value = roundf(fValue * 256);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
    return value >> fb;
}

float Fixed::toFloat( void ) const
{
    return (float)value / 256.0f;
}

bool Fixed::operator>(const Fixed &obj) const 
{
    return this->value > obj.value;
}

bool Fixed::operator<(const Fixed &obj) const 
{
    return this->value < obj.value;
}

bool Fixed::operator>=(const Fixed &obj) const
{
    return this->value >= obj.value;
}

bool Fixed::operator<=(const Fixed &obj) const
{
    return this->value <= obj.value;
}

bool Fixed::operator==(const Fixed &obj) const
{
    return this->value == obj.value;
}

bool Fixed::operator!=(const Fixed &obj) const
{
    return this->value != obj.value;
}

Fixed Fixed::operator+(const Fixed &obj) const
{
    Fixed result;
    result.value = this-> value + obj.value;
    return result;
}

Fixed Fixed::operator-(const Fixed &obj) const
{
    Fixed result;
    result.value = this->value - obj.value;
    return result;
}

Fixed Fixed::operator*(const Fixed &obj) const
{   
    Fixed result;
    result.value = (this->value * obj.value) >> fb;
    return result;
}

Fixed Fixed::operator/(const Fixed &obj) const
{
    if (obj.value == 0) 
    {
        std::cerr << "Error: Division by zero!" << std::endl;
        return *this; // Ou retourner une valeur par défaut
    }
    Fixed result;
    result.value = (this->value << fb) / obj.value;
    return result;       
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return out;
}

Fixed &Fixed::operator++() // Pré-incrémentation
{
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int) // Post-incrémentation
{
    Fixed temp(*this);
    this->value++;
    return temp; // retourner une copie de l'objet avant incrémentation
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}
