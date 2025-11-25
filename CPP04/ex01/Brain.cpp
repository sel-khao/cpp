/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 20:37:33 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/25 21:16:57 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& other){
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++){
        ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator = (const Brain& other){
    if (this != &other){
        for (int i = 0; i < 100; i++){
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}