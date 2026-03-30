/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 16:10:38 by sel-khao          #+#    #+#             */
/*   Updated: 2026/03/30 18:45:16 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){};
ScalarConverter::~ScalarConverter(){};
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) {};
ScalarConverter::ScalarConverter(const ScalarConverter& other){};

void handle_nan(){};
void handle_nanf(){};
void handle_positive_inf(){};
void handle_positive_inff(){};
void handle_negative_inf(){};
void handle_negative_inff(){};

bool pseudo(const std::string& literal){
    if (literal == "nan"){
        std::cout << "nan found" << std::endl;
        handle_nan();
    }
    else if (literal == "+inf"){
        std::cout << "+inf found" << std::endl;
        handle_positive_inf();
    }
    else if (literal == "-inf"){
        std::cout << "-inf found" << std::endl;
        handle_negative_inf();
    }
    else if (literal == "-inff"){
        std::cout << "-inff found" << std::endl;
        handle_negative_inff();
    }
    else if (literal == "+inff"){
        std::cout << "+inff found" << std::endl;
        handle_positive_inff();
    }
    else if (literal == "nanf"){
        std::cout << "nanf found" << std::endl;
        handle_nanf();
    }
    else {
        //continue search
    }
}


void ScalarConverter::convert(const std::string& literal){
    if (pseudo(literal))
        return ;//true secial case found and handleed, nothing else to do, otherwise its char/loat/double...
}