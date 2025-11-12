/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:51:05 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/12 15:52:14 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType(){
    return type;
}

void Weapon::setType(const std::string& newType){
    type = newType;
}

/* Weapon::Weapon(const std::string& weaponType){
    type = weaponType;
} */