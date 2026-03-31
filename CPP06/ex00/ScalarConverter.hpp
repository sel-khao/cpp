/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 15:00:13 by sel-khao          #+#    #+#             */
/*   Updated: 2026/03/31 15:46:43 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <exception>
#include <iostream>
#include <string>
#include <cstdlib>

class ScalarConverter {
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter& other);
		ScalarConverter(const ScalarConverter& other);
	public:
		static void convert(const std::string& literal);
};



#endif