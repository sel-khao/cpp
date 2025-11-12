/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:50:15 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/04 18:45:18 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    fixed = 0;
};

Fixed::Fixed(const Fixed& other){
    std::cout << "Copy constructor called" << std::endl;
    fixed = other.fixed;
    operator = (other);
}

//Copy Assignment Operator
Fixed& Fixed::operator = (const Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixed;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    fixed = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
};
