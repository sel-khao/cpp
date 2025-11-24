/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:32:35 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/24 15:33:04 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat " << type << " constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat " << type << " destructor called" << std::endl;
}