/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:21:34 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/24 15:30:36 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog " << type << " constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog " << type << " destructor called" << std::endl;
}