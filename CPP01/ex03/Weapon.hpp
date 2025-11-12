/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:52:52 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/12 15:48:50 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <cctype>
#include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        Weapon(){};
        ~Weapon(){};
        const std::string& getType();
        void setType(const std::string& type);
};

#endif