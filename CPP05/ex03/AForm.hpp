/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:36:11 by sel-khao          #+#    #+#             */
/*   Updated: 2026/01/16 14:59:46 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <exception>
#include <string>
#include <iostream>

class Bureaucrat;

class AForm {
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    protected:
        virtual void executeAction() const = 0;
    public:
        AForm();
        AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
        virtual ~AForm();
        AForm(const AForm& other);
		AForm& operator=(const AForm &other);
        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(Bureaucrat& ok);
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
        class FormIsNotSigned : public std::exception {
            public:
                const char *what() const throw();
        };
        void execute(Bureaucrat const &executor) const;
};

std::ostream& operator<<(std::ostream &os, const AForm& form);

#endif