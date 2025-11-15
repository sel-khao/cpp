/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:02:37 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/15 19:48:30 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed Fixed::operator + (const Fixed& other) const{//others is object fixed, not int
    Fixed result;
    result.setRawBits(fixed + other.fixed);
    return (result);
}

Fixed Fixed::operator - (const Fixed& other) const{
    Fixed result;
    result.setRawBits(fixed - other.fixed);
    return (result);
}

Fixed Fixed::operator * (const Fixed& other) const{
    
}
Fixed Fixed::operator / (const Fixed& other) const{
    
}


//compares two int, with cout 1 for true, 0 for false by default
bool Fixed::operator > (const Fixed& other) const{
    return fixed > other.fixed;
}

bool Fixed::operator < (const Fixed& other) const{
    return fixed < other.fixed;
}

bool Fixed::operator >= (const Fixed& other) const{
    return fixed >= other.fixed;   
}

bool Fixed::operator <= (const Fixed& other) const{
    return fixed <= other.fixed;    
}

bool Fixed::operator == (const Fixed& other) const{
    return fixed == other.fixed;    
}

bool Fixed::operator != (const Fixed& other) const{
    return fixed != other.fixed;    
}

//------------------------------------------------------------------------------
std::ostream& operator << (std::ostream &out, const Fixed &f){
    out << f.toFloat();
    return out;
}

int Fixed::toInt( void ) const{
    return (fixed >> fraction);
}

float Fixed::toFloat(void) const {
    float f =  static_cast<float>(fixed);
    return (f / (1 << fraction));
}

Fixed::Fixed() : fixed(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float value){
    std::cout << "Float constructor called" << std::endl;
    fixed = roundf(value * (1 << fraction));
}

Fixed::Fixed(const int value){
    std::cout << "Int constructor called" << std::endl;
    fixed = value << fraction;
}

Fixed::Fixed(const Fixed& other) : fixed(other.fixed){
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        fixed = other.fixed;
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixed;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    fixed = raw;
}