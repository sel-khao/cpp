/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:12:22 by sel-khao          #+#    #+#             */
/*   Updated: 2026/01/14 15:44:53 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
//correct
    Bureaucrat mimi("mimi", 1);
    Form form1("contratto", 5, 1);
    std::cout << mimi;
    std::cout << form1;
    mimi.signForm(form1);
//correct
    try{
        Bureaucrat sara("sara", 2);
        Form form3("form3", 10, 5);
        std::cout << sara << std::endl;
        std::cout << form3 << std::endl;
        sara.signForm(form3);
        std::cout << form3 << std::endl;
    }
    catch(std::exception& e){
        std::cout << "caught: " << e.what();
    }
//wrong
    std::cout << std::endl;
    try{
        Form wrong("no", 0, 30);//0 is invalid
        std::cout << wrong << std::endl;   
    }
    catch(std::exception& e){
        std::cout << "Eccezione catturata: " << e.what();
    }
    std::cout << std::endl;
    try{
        Bureaucrat bob("bob", 115);
        Form form2("form2", 20, 150);
        std::cout << bob;
        std::cout << form2;
        bob.signForm(form2);
    }
    catch(std::exception& e){
        std::cout << "caught: " << e.what();
    }
    std::cout << std::endl;
    return 0;
}