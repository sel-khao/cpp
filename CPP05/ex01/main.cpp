/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:12:22 by sel-khao          #+#    #+#             */
/*   Updated: 2026/01/07 15:14:51 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat four;
    std::cout << four << std::endl;
//correct
	try{
        Bureaucrat one("gianni", 150);
        std::cout << one;
        one.increment();
        std::cout << "gianni just got promoted" << std::endl;
        std::cout << one;
        std::cout << "gianni made a mistake so.." << std::endl;
        one.decrement();
        std::cout << one << std::endl;
    }
    catch(std::exception& e){
        std::cout << "exception caught: " << e.what() << std::endl;
    }
//wrong
    try{
        Bureaucrat two("mimi", 2);
        std::cout << two;
        two.increment();
        std::cout << two;
        std::cout << "mimi got promoted again!" << std::endl;
        two.increment();
        std::cout << two << std::endl;    
    }
    catch(Bureaucrat::GradeTooHighException& e){
        std::cout << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException& e){
        std::cout << e.what() << std::endl;
    }
    
    try{
        Bureaucrat three("milo", 0);
        std::cout << three << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException& e){
        std::cout << e.what();
    }
    catch(Bureaucrat::GradeTooHighException& e){
        std::cout << e.what();
    }
    return 0;
}