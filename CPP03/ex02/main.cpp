/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:34:09 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/24 15:57:42 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
    std::cout << "=== CREATING FRAGTRAP ===" << std::endl;
    FragTrap sara("sara");
    std::cout << std::endl;

    std::cout << "=== TESTING ABILITIES ===" << std::endl;
    sara.attack("sithmi");
    sara.takeDamage(5);
    sara.beRepaired(3);
    sara.highFivesGuys();
    std::cout << std::endl;

    std::cout << "=== TESTING DEATH ===" << std::endl;
    FragTrap boom("boom");
    boom.attack("target");
    boom.takeDamage(100);
    boom.attack("somene");
    boom.beRepaired(10);
    std::cout << std::endl;
    
    std::cout << "=== DESTRUCTION ===" << std::endl;
    return 0;
}