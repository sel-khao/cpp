/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:10:34 by sel-khao          #+#    #+#             */
/*   Updated: 2026/01/15 13:04:32 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

void Bureaucrat::executeForm(AForm const &form) const {
	try{
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e){
		std::cout << getName() << " couldn't execute " << form.getName()
		<< " because " << e.what();
	}
}

void Bureaucrat::signForm(AForm& form){
	try {
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << ".\n";
	}
	catch (std::exception& e){
		std::cout << getName() << " couldn't sign " << form.getName()
		<< " because " << e.what();
	}
};

void Bureaucrat::increment(){
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::decrement(){
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low\n";
}

Bureaucrat::Bureaucrat() : name("Default"), grade(150){
	std::cout << "Bureaucrat default construct called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat " << getName() << " decostruct called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade){
	std::cout << "Copy constructor called" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat& bureaucrat){
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
    return os;//on screen
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other){
		//name = other.name;//name is const. find a way?
		grade = other.grade;
	}
    return *this;
}

std::string Bureaucrat::getName() const{
    return name;
}

int Bureaucrat::getGrade() const{
    return grade;
}