/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:17:32 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/27 11:56:07 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal (const Animal &other);
        Animal& operator = (const Animal &other);
        Animal::Animal(const std::string& type);
        std::string getType() const;
        virtual void makeSound() const ;
};

#endif

/*
Getter: to read the value of a private variable.
does NOT recive arguments. return attribute not modifiable!

Setter: change or update the private variable safely
*/