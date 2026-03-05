/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:12:22 by sel-khao          #+#    #+#             */
/*   Updated: 2026/02/02 17:02:31 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <cstdlib>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
    srand(time(0));//generatore numeri casuali x robot
    //creating forms
    ShrubberyCreationForm one("home");
    RobotomyRequestForm two("Bender");
    PresidentialPardonForm three("someone");
	std::cout << one << two << three << std::endl;
    //creating burros
    Bureaucrat boss("boss", 1);
    Bureaucrat medio("medio", 70);
    Bureaucrat basso("basso", 150);
	std::cout << boss << medio << basso << std::endl;
    //check if they can firm
	boss.executeForm(three);
    boss.signForm(three);
	boss.executeForm(three);
    std::cout << "\n";
    medio.signForm(two);
    std::cout << "\n";
    basso.signForm(one);
    std::cout << "\n";
    boss.executeForm(one);
    boss.executeForm(two);
	boss.executeForm(three);
    std::cout << "\n";
    medio.executeForm(one);
    medio.executeForm(two);
    medio.executeForm(three);
    std::cout << "\n";
    basso.executeForm(one);
    basso.executeForm(two);
    basso.executeForm(three);
    std::cout << "\n";
}