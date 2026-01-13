/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:45:25 by sel-khao          #+#    #+#             */
/*   Updated: 2026/01/13 15:49:30 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low\n";
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high\n";
}

const std::string& Form::getName() const {
	return name;
}

bool Form::getIsSigned() const {
	return isSigned;
}

int Form::getGradeToSign() const {
	return gradeToSign;
}

int Form::getGradeToExecute() const {
	return gradeToExecute;
}

Form::Form() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150){}

Form::Form(const Form& other) : name(other.name),
	isSigned(other.isSigned), gradeToExecute(other.gradeToExecute), gradeToSign(other.gradeToSign){}

Form& Form::operator=(const Form &other){
	if (this != &other){
		//gradeToExecute = other.gradeToExecute;
		//gradeToSign = other.gradeToSign;
		isSigned = other.isSigned;
		//name = other.name;
	}
	return *this;
}

std::ostream& operator<<(std::ostream &os,const Form& form){
    os << form.getName() << " form  requires grade " << form.getGradeToSign() << " to sign it and grade " << form.getGradeToExecute() << " to execute it." << std::endl;//?
    return os;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) : name(name),
	gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
		if (gradeToSign < 1 || gradeToExecute < 1)
			throw Form::GradeTooHighException();
		else if (gradeToExecute > 150 || gradeToSign > 150)
			throw Form::GradeTooLowException();
	}

Form::~Form(){
    std::cout << "Destructor called" << std::endl;
}

void Form::beSigned(Bureaucrat& ok){
	if (ok.getGrade() <= 1 && ok.getGrade() >= 150)
		isSigned = true;
	else
		throw Form::GradeTooLowException();
}
