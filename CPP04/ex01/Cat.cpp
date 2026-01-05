/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:32:35 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/27 12:14:21 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(const Cat& other) : Animal(other){
    brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator = (const Cat& other){
    std::cout << "Cat copy assignment has been called" << std::endl;
    if (this != &other){
        Animal::operator=(other);//opy animal part
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::Cat() {
    type = "Cat";
    brain = new Brain();
    std::cout << type << " constructor has been called" << std::endl;
}

Cat::~Cat() {
    std::cout << type << " destructor has been called" << std::endl;
    delete(brain);
}

void Cat::makeSound() const{
    std::cout << "meow! meow!" << std::endl;
}

Brain* Cat::getBrain() const{
    return brain;
}