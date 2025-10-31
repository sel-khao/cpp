/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:48:21 by sara              #+#    #+#             */
/*   Updated: 2025/10/21 15:58:14 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    randomChump("sara");
    Zombie *wassim = newZombie("Wassim");
    wassim->announce();
    delete wassim;
    return 0;
}