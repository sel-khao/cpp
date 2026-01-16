/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:45:25 by sel-khao          #+#    #+#             */
/*   Updated: 2026/01/14 11:48:31 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

void AForm::execute(Bureaucrat const &executor) const{
	if (getIsSigned() == false){
		throw AForm::FormIsNotSigned();
	}
	if (executor.getGrade() > gradeToExecute){
		throw AForm::GradeTooLowException();
	}
	executeAction();
}

const char* AForm::FormIsNotSigned::what() const throw() {
	return "Form is not signed\n";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade is too low\n";
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade is too high\n";
}

const std::string& AForm::getName() const {
	return name;
}

bool AForm::getIsSigned() const {
	return isSigned;
}

int AForm::getGradeToSign() const {
	return gradeToSign;
}

int AForm::getGradeToExecute() const {
	return gradeToExecute;
}

AForm::AForm() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150){}

AForm::AForm(const AForm& other) : name(other.name),
	isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute){}

AForm& AForm::operator=(const AForm &other){
	if (this != &other){
		//gradeToExecute = other.gradeToExecute;
		//gradeToSign = other.gradeToSign;
		isSigned = other.isSigned;
		//name = other.name;
	}
	return *this;
}

std::ostream& operator<<(std::ostream &os,const AForm& AForm){
    os << "AForm " << AForm.getName()
	<< ", signed: " << (AForm.getIsSigned() ? "yes" : "no")
	<< ", sign grade: " << AForm.getGradeToSign()
	<< ", exec grade: " << AForm.getGradeToExecute() << std::endl;
    return os;
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute) : name(name),
	gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
		if (gradeToSign < 1 || gradeToExecute < 1)
			throw AForm::GradeTooHighException();
		else if (gradeToExecute > 150 || gradeToSign > 150)
			throw AForm::GradeTooLowException();
	}

AForm::~AForm(){
    std::cout << "Destructor called" << std::endl;
}

void AForm::beSigned(Bureaucrat& ok) {
	if (ok.getGrade() <= gradeToSign)
		isSigned = true;
	else
		throw AForm::GradeTooLowException();
}
