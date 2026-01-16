/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:24:37 by sel-khao          #+#    #+#             */
/*   Updated: 2026/01/16 13:29:52 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include <iostream>

#include <string>
#include <exception>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
	private:
		const std::string target;
	protected:
		void executeAction() const;
	public:
		const std::string& getTarget() const;
		ShrubberyCreationForm();
		ShrubberyCreationForm operator=(const ShrubberyCreationForm& other);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm();
		class UnableToOpenTheFile : public std::exception{
			public:
				const char* what() const throw();
		};
		class TargetCantBeEmpty : public std::exception{
			public:
				const char* what() const throw();
		};
};

#endif