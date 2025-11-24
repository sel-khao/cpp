/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:02:37 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/16 16:06:33 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const Fixed& Fixed::min(const Fixed& one, const Fixed& two){
    if (one < two)
        return one;
    return two;
}

Fixed& Fixed::min(Fixed& one, Fixed& two){
    if (one < two)
        return one;
    return two;
}

const Fixed& Fixed::max(const Fixed& one, const Fixed& two){
    if (one > two)
        return one;
    return two;
}

Fixed& Fixed::max(Fixed& one, Fixed& two){
    if (one > two)
        return one;
    return two; 
}

Fixed Fixed::operator -- (int){
    Fixed temp = *this;
    fixed--;
    return (temp);
}

Fixed& Fixed::operator -- (){
    fixed--;//incrementa il raw value
    return *this;
}

Fixed Fixed::operator ++ (int){
    Fixed temp = *this;
    fixed++;
    return temp;
}

Fixed& Fixed::operator ++ (){
    fixed++;//incrementa il raw value
    return *this;
}

Fixed Fixed::operator + (const Fixed& other) const{
    Fixed result;
    result.setRawBits(fixed + other.fixed);
    return (result);
}

Fixed Fixed::operator - (const Fixed& other) const{
    Fixed result;
    result.setRawBits(fixed - other.fixed);
    return (result);
}

Fixed Fixed::operator * (const Fixed& other) const {
    Fixed result;
    result.setRawBits((fixed * other.fixed) >> fraction);
    return (result);
}

Fixed Fixed::operator / (const Fixed& other) const {
    Fixed result;
    result.setRawBits((fixed << fraction) / other.fixed);
    return (result);
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
    return fixed;
}

void Fixed::setRawBits(int const raw) {
    fixed = raw;
}