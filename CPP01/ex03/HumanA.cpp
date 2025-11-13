/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:54:10 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/13 15:08:16 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& n, Weapon& w) : weapon(w), name(n){};
HumanA::~HumanA(){};

void HumanA::attack(){
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;    
}
