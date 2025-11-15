/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:54:06 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/14 19:15:22 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& humanName) : name(humanName), weapon(NULL){};
HumanB::~HumanB() {};

void HumanB::attack() {
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;    
    else
        std::cout << name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& w){
    weapon = &w;
}