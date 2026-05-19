/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 10:57:47 by sel-khao          #+#    #+#             */
/*   Updated: 2026/05/14 13:34:18 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv){
    if (argc != 2){
        std::cout << "Wrong arguments: ./program 'RPN expression'" << std::endl;
        return 1;
    }
    RPN expression;
    expression.parse(argv[1]);
    return 0;
}