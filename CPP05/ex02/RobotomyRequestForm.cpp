/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:30:55 by sel-khao          #+#    #+#             */
/*   Updated: 2026/01/16 15:02:28 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : target("target"){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other), target(other.target){}

RobotomyRequestForm RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
    if (this != &other)
        AForm::operator=(other);
    return *this;
}

const char* RobotomyRequestForm::TargetCantBeEmpty::what() const throw(){
	return "Target can't be empty\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", 72, 45), target(target){
        if (target.empty())
            throw TargetCantBeEmpty();
    }

RobotomyRequestForm::~RobotomyRequestForm(){
    //std::cout << "RobotomyRequestForm destructor called\n";
};

const std::string& RobotomyRequestForm::getTarget() const{
    return target;
}
void RobotomyRequestForm::executeAction() const{
    std::cout << "Bzzzzz *drilling noises* Zzzzz...\n" << std::endl;
    
}