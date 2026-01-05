/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:17:25 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/27 11:55:55 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal"){
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string& type) : type(type){
    std::cout << "Animal param. constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal (const Animal& other) : type(other.type){
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator = (const Animal &other){
    std::cout << "Animal copy assignment called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

std::string Animal::getType() const{
    return type;
}

void Animal::makeSound() const {
    std::cout << "Animal is making a sound" << std::endl;
}

