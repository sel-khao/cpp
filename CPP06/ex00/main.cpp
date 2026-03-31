/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 14:59:40 by sel-khao          #+#    #+#             */
/*   Updated: 2026/03/31 15:34:48 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(){
    //ScalarConverter::convert("a");
    //ScalarConverter::convert("42");
    //ScalarConverter::convert("'w'");
    ScalarConverter::convert("+4.2f");
    //ScalarConverter::convert("4.2fff");
    /*std::cout << std::endl;
    ScalarConverter::convert("nan");
    std::cout << std::endl;
    ScalarConverter::convert("+inf");
    std::cout << std::endl;
    ScalarConverter::convert("-inf");
*/
    return 0;
}

/*

char literal in c++
a literal is a fixed value written directly in source code,
so anytime i write a value directly, thats a literal.*/