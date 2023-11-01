/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:37:17 by bel-kase          #+#    #+#             */
/*   Updated: 2023/11/01 21:00:01 by bel-kase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int fb = 8;
public:
    Fixed();
    Fixed(const int iValue);
    Fixed(const float fValue);
    ~Fixed();
    int toInt(void) const;
    float toFloat(void) const;
    bool operator>(const Fixed &obj) const ;
    bool operator<(const Fixed &obj) const ;
    bool operator>=(const Fixed &obj) const ;
    bool operator<=(const Fixed &obj) const ;
    bool operator==(const Fixed &obj) const ;
    bool operator!=(const Fixed &obj) const ;
    Fixed operator+(const Fixed &obj) const ;
    Fixed operator-(const Fixed &obj) const ;
    Fixed operator*(const Fixed &obj) const ;
    Fixed operator/(const Fixed &obj) const ;
    Fixed &operator++();
    Fixed operator++(int);
    static const Fixed &max(const Fixed &a, const Fixed &b);

};
    std::ostream &operator<<(std::ostream &out, const Fixed &obj);
#endif