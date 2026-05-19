/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 10:58:05 by sel-khao          #+#    #+#             */
/*   Updated: 2026/05/14 14:32:42 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*
top(): looks at the top element without removing it
pop(): removes the top element but returns nothing
push();
always to use together
*/


void RPN::parse(std::string expr){
    std::stringstream ss(expr);
    std::string token;
    while (ss >> token){
        if (token.length() == 1 && (token[0] >= '0' && token[0] <= '9')){
            stack.push(token[0] - '0');
        }
        else if (token.length() == 1 && (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')){
            if (stack.size() < 2){
                std::cerr << "Error: invalid expression" << std::endl;
                return ;
            }
            int b = stack.top(); stack.pop();
            int a = stack.top(); stack.pop();
            int result;
            if (token[0] == '+')
                result = a + b;
            else if (token[0] == '-')
                result = a - b;
            else if(token[0] == '*')
                result = a * b;
            else if (token[0] == '/'){
                if (b == 0){
                    std::cerr << "Error: division by zero" << std::endl;
                    return;
                }
                result = a / b;
            }
            stack.push(result);
        }
        else {   
            std::cerr << "Error" << std::endl;
            return;
        }
    }
    if (stack.size() != 1)
        std::cerr << "Error: invalid expression" << std::endl;
    else
        std::cout << stack.top() << std::endl;
}

RPN::RPN(){}

RPN::~RPN(){}

RPN::RPN(const RPN& other) : stack(other.stack){}

RPN& RPN::operator=(const RPN& other){
    if (this != &other)
        stack = other.stack;
    return (*this);
}
