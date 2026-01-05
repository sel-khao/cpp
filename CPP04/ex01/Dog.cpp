/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:21:34 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/27 12:14:15 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(const Dog& other) : Animal(other){
    brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator = (const Dog& other){
    std::cout << "Dog copy assignment has been called" << std::endl;
    if (this != &other){
        Animal::operator=(other);//copy animal part
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::Dog() {
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructor has been called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor has been called" << std::endl;
    delete(brain);
}

void Dog::makeSound() const{
    std::cout << "bao! bao!" << std::endl;
}

Brain* Dog::getBrain() const{
    return brain;
}