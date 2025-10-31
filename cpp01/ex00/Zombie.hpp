/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:19:02 by sara              #+#    #+#             */
/*   Updated: 2025/10/21 15:46:52 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <cstdlib>
#include <iostream>


class Zombie {
    private:
        std::string name;
    public:
        Zombie(std::string zombieName) : name(zombieName) {}
        ~Zombie() {
            std::cout << name << " is destroyed" << std::endl;
        }
        void announce() {
            std::cout << name <<": BraiiiiiiinnnzzzZ\n";
        }
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif