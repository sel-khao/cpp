/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:27:05 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/10 18:27:06 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* myHorde = zombieHorde(5, "bob");
    for (int i = 0; i < 5; i++){
        myHorde[i].announce();
    }
    delete[] myHorde;
    return 0;
}