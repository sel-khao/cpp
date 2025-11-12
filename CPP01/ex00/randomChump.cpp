/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:40:13 by sara              #+#    #+#             */
/*   Updated: 2025/11/12 12:06:10 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(const std::string& name){
    Zombie zombie(name);//creating a variable on the stack
    zombie.announce();
    return ;
};

/*
not pointer .
Zombie zombie("Bob");    // This is an object
zombie.announce();    // Use dot to call its function*/

/*
Zombie* zombie = new Zombie("Bob");  // This is a pointer
zombie->announce();    // Use arrow to call its function*/
