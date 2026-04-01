/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 16:10:38 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/01 12:07:22 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){};
ScalarConverter::~ScalarConverter(){};
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) {
    (void)other;//not using parameters
    return *this;
}
ScalarConverter::ScalarConverter(const ScalarConverter& other){
    (void)other;
};

/*
nan (not a number) is a special value in IEEE 754 floating-point arithmtic
standard. it rapresents the result of undefined or unrapresentable operations
such as 0/0 or sqrt(-1). nan is neither a valid number nor infinity,
its unequal to every floating-point value, including itself.

nan a special value that appears whenever a floating-point operation
has an undefined or unrepresentable result. needed to avoid crashes and signal errors

NaN is a defined result (by IEEE 754) for certain invalid or indeterminate
floating-point operations.

floating-point math in computers had ricky cases, to not make the pc crash IEEE gave solution.
for cases with no meaningful number, IEEE said "return a special floating-point value called nan",
so now pc dont crash. nan is a value returned like 1.0, 0.0 and it propagates through operations
like nan + 5 = nan.
nan usually used for double.

so i cant convert nan to a char, int ecc.. cuz nan is just a name for some operations results.
*/
void handle_nan(){
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}
/*
nanf is a convenience for float nan.
aome functions return float and some double. nan can also be a float so why nanaf?
for clarity, safer, cleaner, type safety.
"i want a float nan, not just a nan from some calculation."
theres also nanl(nan for long double)
*/
void handle_nanf(){
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}
/*
like nan they are special floating-point values by IEEE 754.
overflow in positive direction or results in math that are infinite.
for double infinity
*/
void handle_positive_inf(){
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: +inff" << std::endl;
    std::cout << "double: +inf" << std::endl;
}
/*
float infinity
*/
void handle_positive_inff(){
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: +inff" << std::endl;
    std::cout << "double: +inf" << std::endl;
}
/*
overflow in negative direction.
double negative infinity
*/
void handle_negative_inf(){
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
}
/*
float negative infinity
*/
void handle_negative_inff(){
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
}

bool pseudo(const std::string& literal){
    if (literal == "nan"){
        handle_nan();
        return true;
    }
    else if (literal == "+inf"){
        handle_positive_inf();
        return true;
    }
    else if (literal == "-inf"){
        handle_negative_inf();
        return true;
    }
    else if (literal == "-inff"){
        handle_negative_inff();
        return true;
    }
    else if (literal == "+inff"){
        handle_positive_inff();
        return true;
    }
    else if (literal == "nanf"){
        handle_nanf();
        return true;
    }
    else
        return false;
}

bool isInt(std::string literal){
    size_t i = 0;
    if (literal[i] == '+' || literal[i] == '-')
        i++;
    if (i == literal.size())
        return false;
    for (; i < literal.size(); i++){
        if (literal[i] < '0' || literal[i] > '9')
            return false;
    }
    return true;
}

bool isDouble(std::string literal){
    size_t dotpos = std::string::npos;//cconst meaning "not found", largest value for size_t
    for (size_t i = 0; i < literal.size(); i++){
        if (literal[i] == '.')
            dotpos = i;
    }
    if (dotpos == std::string::npos)
        return false;
    size_t start = 0;
    if (literal[0] == '+' || literal[0] == '-')
        start = 1;
    for (size_t i = start; i < dotpos; i++) {
        if (literal[i] < '0' || literal[i] > '9')
            return false;
    }
    if (dotpos == start)//if no digit before dot(".2f")
        return false;
    for (size_t i = dotpos + 1; i < literal.size(); i++) {
        if (literal[i] < '0' || literal[i] > '9')
            return false;
    }
    if (dotpos + 1 == literal.size())//if no digit after dot(4.f)
        return false;
    return true;
}

bool isFloat(std::string literal){
    if (literal[literal.size() -1] != 'f')
        return false;
    size_t dotpos = std::string::npos;//cconst meaning "not found", largest value for size_t
    for (size_t i = 0; i < literal.size() - 1; i++){
        if (literal[i] == '.')
            dotpos = i;
    }
    if (dotpos == std::string::npos)
        return false;
    size_t start = 0;
    if (literal[0] == '+' || literal[0] == '-')
        start = 1;
    for (size_t i = start; i < dotpos; i++) {
        if (literal[i] < '0' || literal[i] > '9')
            return false;
    }
    if (dotpos == start)//if no digit before dot(".2f")
        return false;
    for (size_t i = dotpos + 1; i < literal.size() - 1; i++) {
        if (literal[i] < '0' || literal[i] > '9')
            return false;
    }
    if (dotpos + 1 == literal.size() - 1)//if no digit after dot(4.f)
        return false;
    return true;
}

void ScalarConverter::convert(const std::string& literal){
    if (pseudo(literal))
        return ;//true secial case found and handleed, nothing else to do, otherwise its char/loat/double...
    if (literal.size() == 3 && literal[0] == '\'' && literal[2] == '\''){
        //char
        char c = literal[1];
        std::cout << "char: '" << c << "'" << std::endl;
        //int
        int i = c;
        std::cout << "int: " << i << std::endl;
        //float
        float f = i;
        std::cout << "float: " << f << ".0f" << std::endl;
        //double
        double d = i;
        std::cout << "double: " << d << ".0" << std::endl;
        return ;
    }
    else if (isFloat(literal)){
        float f = std::strtof(literal.c_str(), NULL);
        int i = static_cast<int>(f);
        //char
        if (i < 0 || i > 127){
            std::cout << "char: impossible" << std::endl;
        }
        else if (i >= 32 && i <= 126)
            std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        //int
        std::cout << "int: " << i << std::endl;
        //float
        if (f == (int)f)
            std::cout << "float: " << f << ".0f" << std::endl;
        else
            std::cout << "float: " << f << "f" << std::endl;
        //double
        double d = f;
        if (d == (int)d)
            std::cout << "double: " << d << ".0" << std::endl;
        else
            std::cout << "double: " << d << std::endl;
        return ;
    }
    else if (isDouble(literal)){
        double d = std::strtod(literal.c_str(), NULL);
        int i = static_cast<int>(d);
        //char
        if (i < 0 || i > 127){
            std::cout << "char: impossible" << std::endl;
        }
        else if (i >= 32 && i <= 126)
            std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        //int
        std::cout << "int: " << i << std::endl;
        //float
        float f = static_cast<float>(d);
        if (f == (int)f)
            std::cout << "float: " << f << ".0f" << std::endl;
        else
            std::cout << "float: " << f << "f" << std::endl;
        //double
        if (d == (int)d)
            std::cout << "double: " << d << ".0" << std::endl;
        else
            std::cout << "double: " << d << std::endl;
        return ;
    }
    else if (isInt(literal)){
        //string to int
        long l = std::strtol(literal.c_str(), NULL, 10);
        int i = static_cast<int>(l);
        //checking overflow
        if (l < INT_MIN || l > INT_MAX){
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
            return;
        }
        //char
        if (i < 0 || i > 127)
            std::cout << "char: impossible" << std::endl;
        else if (i >= 32 && i <= 126)
            std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        //int
        std::cout << "int: " << i << std::endl;
        //float;
        float f = i;
        if (f == (int)f)
            std::cout << "float: " << f << ".0f" << std::endl;
        else
            std::cout << "float: " << f << "f" << std::endl;
        //double
        double d = i;
        if (d == (int)d)
            std::cout << "double: " << d << ".0" << std::endl;
        else
            std::cout << "double: " << d << std::endl;
        return ;
    }
    else
        std::cout << "no need to handle it" << std::endl;
    return ;
}
