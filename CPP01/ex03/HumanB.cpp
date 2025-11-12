/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:54:06 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/12 16:02:33 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void HumanB::attack(){
    if (HumanB::weapon)
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;    
    else
        return ;
}