/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:57:41 by sel-khao          #+#    #+#             */
/*   Updated: 2026/01/16 13:23:47 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

const char* PresidentialPardonForm::TargetCantBeEmpty::what() const throw(){
	return "Target can't be empty\n";
} 

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("PresidentialPardonForm", 25, 5), target(target) {
        if (target.empty())
            throw TargetCantBeEmpty();
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), target(other.target){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
    if (this != &other)
        AForm::operator=(other);//only isSigned gets copied
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm() : target("target"){}

PresidentialPardonForm::~PresidentialPardonForm(){
    //std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

const std::string& PresidentialPardonForm::getTarget() const{
    return target;
}

void PresidentialPardonForm::executeAction() const{
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}