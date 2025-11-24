/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:34:09 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/24 15:54:32 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap sara("sara");
    //ScavTrap guardia("guardiano");
    std::cout << "\n";

    sara.attack("sithmi");
    sara.takeDamage(5);
    sara.beRepaired(3);
    //guardia.guardGate();
    std::cout << "\n";

    //test death
    ScavTrap boom("one");
    boom.attack("two");
    boom.takeDamage(100);//dies
    boom.beRepaired(10);//is dead
    std::cout << "\n";
    
    std::cout << "\n";
}