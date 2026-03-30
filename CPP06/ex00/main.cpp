/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 14:59:40 by sel-khao          #+#    #+#             */
/*   Updated: 2026/03/30 17:37:42 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(){
    ScalarConverter::convert("a");
    ScalarConverter::convert("42");
    ScalarConverter::convert("'c'");
    ScalarConverter::convert("4.2f");
    ScalarConverter::convert("4.2");
    ScalarConverter::convert("nan");
    ScalarConverter::convert("+inf");
    ScalarConverter::convert("-inf");

    return 0;
}

/*

char literal in c++
a literal is a fixed value written directly in source code,
so anytime i write a value directly, thats a literal.*/