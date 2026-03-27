/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:12:22 by sel-khao          #+#    #+#             */
/*   Updated: 2026/03/27 15:29:56 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <sstream>
#include <cstdlib>
#include <iostream>
#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


std::string intToString(int num){
    std::stringstream ss;
    ss << num;
    return ss.str();
}

int main(){
    std::cout << "=== FORM CREATION ===" << std::endl;
    srand(time(0));//generatore numeri casuali x robot
    ShrubberyCreationForm one("home");
    RobotomyRequestForm two("Bender");
    PresidentialPardonForm three("someone");
	std::cout << one << two << three << std::endl;

    std::cout << "\n=== BUREAUCRAT CREATION ===" << std::endl;
    Bureaucrat boss("boss", 1);
    Bureaucrat medio("medio", 70);
    Bureaucrat basso("basso", 150);
	std::cout << boss << medio << basso << std::endl;

    std::cout << "\n=== INVALID CREATION TESTS ===" << std::endl;

    try { Bureaucrat bad("bad", 199); }
    catch (std::exception &e) { std::cout << "caught: " << e.what(); }
    try { Bureaucrat baddie("baddie", 0); }
    catch (std::exception &e) { std::cout << "caught: " << e.what(); }

    std::cout << "\n=== SIGNING and EXECUTION TESTS ===" << std::endl;
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
    std::cout << "\n=== CHECKING SHRUBBERY FILE ===" << std::endl;
    std::ifstream check("home_shrubbery");
    if (check.good())//returns t(file exists, can be read..) or f(no exist, cant open) 
        std::cout << "✓ Shrubbery file created " << std::endl;
    else
        std::cout << "✗ Shrubbery file not created" << std::endl;
    std::cout << "\n=== INVALID CREATION TESTS ===" << std::endl;
    try {
        Bureaucrat invalid("Invalid", 0);
    }
    catch (std::exception &e) {
        std::cout << "Caught: " << e.what();
    }
    std::cout << "\n=== ROBOTOMY MULTIPLE ATTEMPTS ===" << std::endl;
    for (int i = 0; i < 3; i++) {
        RobotomyRequestForm robot("test " + intToString(i));
        boss.signForm(robot);
        boss.executeForm(robot);
    }
    std::cout << "\n=== INTERN TESTS ===" << std::endl;
	Intern intern;

	AForm* shrub = intern.makeForm("shrubbery creation", "garden");
	AForm* robot = intern.makeForm("robotomy request", "Bender");
	AForm* pardon = intern.makeForm("presidential pardon", "Zaphod");
	AForm* fake = intern.makeForm("fake form", "nothing");

	std::cout << "\n--- Testing forms created by Intern ---" << std::endl;
	if (shrub) {
	    boss.signForm(*shrub);
	    boss.executeForm(*shrub);
	    delete shrub;
	}
	if (robot) {
	    boss.signForm(*robot);
	    boss.executeForm(*robot);
	    delete robot;
	}
	if (pardon) {
	    boss.signForm(*pardon);
	    boss.executeForm(*pardon);
	    delete pardon;
	}
    if (fake == NULL){
        std::cout << "il form inesistente e' stato gestito correttamente" << std::endl;
        (void)fake;
    }
// fake è NULL, non fare delete
}