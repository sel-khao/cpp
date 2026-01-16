/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:20:18 by sel-khao          #+#    #+#             */
/*   Updated: 2026/01/16 15:01:38 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
    private:
        const std::string target;
    protected:
        void executeAction() const;
    public:
		RobotomyRequestForm (const RobotomyRequestForm& other);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
		//RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		const std::string& getTarget() const;
		class TargetCantBeEmpty : public std::exception{
		public:
			const char* what() const throw();
		};
};

#endif