/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:56:11 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/12 15:58:55 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <cctype>
#include <iostream>

class HumanA {
    private:
        Weapon& weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon){};
        ~HumanA(){};
        void attack();
};

#endif