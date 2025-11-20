/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:34:09 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/20 17:02:06 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap fault;
    ClapTrap one("sara");
    ClapTrap two("vale");
    ClapTrap a;
    ClapTrap b;
    
    a = one;
    b = two;
    one.attack("somene");
    one.takeDamage(11);
    one.beRepaired(-6);
    return 0;
}