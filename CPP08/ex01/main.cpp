/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:13:39 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/18 14:22:20 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(){
    /*Span one(8);
    one.addNumber(1);
    one.addNumber(3);
    one.addNumber(20);
    one.addNumber(7);

    std::cout << "min span: " << one.shortestSpan() << std::endl;
    std::cout << "max span: " << one.longestSpan() << std::endl;
    std::cout << std::endl;
    Span two(100);
    std::vector<int> nums;
    for (int i = 0; i < 200; i++){
        nums.push_back(i);
    }
    try{
        two.addNumber(nums.begin(), nums.end());
    } catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    //questo funziona sui primi 100 ofc
    std::cout << "found min: " << two.shortestSpan() << std::endl;
    std::cout << "found max: " << two.longestSpan() << std::endl;
    */
   
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}