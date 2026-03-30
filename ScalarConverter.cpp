/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 16:10:38 by sel-khao          #+#    #+#             */
/*   Updated: 2026/03/30 23:42:10 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){};
ScalarConverter::~ScalarConverter(){};
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) {
    (void)other;//not using parameters
    return *this;
}
ScalarConverter::ScalarConverter(const ScalarConverter& other){};

void handle_nan(){
    std::cout << "nan found" << std::endl;
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void handle_nanf(){
    std::cout << "nanf found" << std::endl;
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}
void handle_positive_inf(){
    std::cout << "+inf found" << std::endl;
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: +inff" << std::endl;
    std::cout << "double: +inf" << std::endl;
}

void handle_positive_inff(){
    std::cout << "+inff found" << std::endl;
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: +inff" << std::endl;
    std::cout << "double: +inf" << std::endl;
}

void handle_negative_inf(){
    std::cout << "-inf found" << std::endl;
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
}

void handle_negative_inff(){
    std::cout << "-inff found" << std::endl;
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
}

bool pseudo(const std::string& literal){
    if (literal == "nan"){
        std::cout << "nan found" << std::endl;
        handle_nan();
        return true;
    }
    else if (literal == "+inf"){
        std::cout << "+inf found" << std::endl;
        handle_positive_inf();
        return true;
    }
    else if (literal == "-inf"){
        std::cout << "-inf found" << std::endl;
        handle_negative_inf();
        return true;
    }
    else if (literal == "-inff"){
        std::cout << "-inff found" << std::endl;
        handle_negative_inff();
        return true;
    }
    else if (literal == "+inff"){
        std::cout << "+inff found" << std::endl;
        handle_positive_inff();
        return true;
    }
    else if (literal == "nanf"){
        std::cout << "nanf found" << std::endl;
        handle_nanf();
        return true;
    }
    else
        return false;
}


void ScalarConverter::convert(const std::string& literal){
    if (pseudo(literal))
        return ;//true secial case found and handleed, nothing else to do, otherwise its char/loat/double...
    if ()//if its literal 'c', 'f', 's')
}