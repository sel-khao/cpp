/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 09:14:13 by sel-khao          #+#    #+#             */
/*   Updated: 2026/03/27 14:53:19 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef AForm* (*FormCreator)(const std::string& target);

struct LookUp{
    std::string name;
    FormCreator creator;
};

static AForm* createShrubbery(const std::string& target){
    return new ShrubberyCreationForm(target);
}

static AForm* createRobotomy(const std::string& target){
    return new RobotomyRequestForm(target);
}

static AForm* createPresidential(const std::string& target){
    return new PresidentialPardonForm(target);
}

static const LookUp table[] = {
    {"shrubbery creation", &createShrubbery},
    {"robotomy request", &createRobotomy},
    {"presidential pardon", &createPresidential}
};

AForm* Intern::makeForm(std::string nameForm, std::string targetForm){
    int size = sizeof (table) / sizeof(table[0]);
    for (int i = 0; size > i; i++){
        if (table[i].name == nameForm){
            std::cout << "Intern creates " << nameForm << std::endl;
            return table[i].creator(targetForm);
        }
    }
    std::cout << "error: form ' " << nameForm << " ' doesn't exist" << std::endl;
    return NULL;
}