/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:57:48 by sel-khao          #+#    #+#             */
/*   Updated: 2026/01/16 13:01:04 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private:
        const std::string target;
    protected:
        void executeAction() const; //virtual void executeAction() const; to override 
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        const std::string& getTarget() const;
    	class TargetCantBeEmpty : public std::exception{
		public:
			const char* what() const throw();
	};
};

#endif