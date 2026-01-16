/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:31:30 by sel-khao          #+#    #+#             */
/*   Updated: 2026/01/16 14:56:33 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : target("target"){}

ShrubberyCreationForm ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
    if (this != &other)
        AForm::operator=(other);
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), target(other.target){}

const char* ShrubberyCreationForm::TargetCantBeEmpty::what() const throw(){
    return "Target can't be empty\n";
}

const char* ShrubberyCreationForm::UnableToOpenTheFile::what() const throw(){
	return "Unable to open file\n";
}

const std::string& ShrubberyCreationForm::getTarget() const{
    return target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target){
        if (target.empty())
            throw TargetCantBeEmpty();
    }

ShrubberyCreationForm::~ShrubberyCreationForm(){
    //std::cout << "ShrubberyCreationForm destructor called\n";
};

//std::ofstream file(const char *filename) or
//std::ofstream file(const std::string& filename)
//std::ofstream automatically closes when going out of scope
void ShrubberyCreationForm::executeAction() const{
    std::string fileName;
    fileName = getTarget() + "_shrubbery";
    std::ofstream file(fileName.c_str());//c_str() for better c++98
    if (file.is_open()){
        file << "    /\\" << std::endl;
        file << "   /  \\" << std::endl;
        file << "  /    \\" << std::endl;
        file << " /      \\" << std::endl;
        file << "/________\\" << std::endl;
        file << "    [_]    " << std::endl;
        //file.close();, at last } the file is destroyed and closes itself
    }
    else
        throw UnableToOpenTheFile();
}