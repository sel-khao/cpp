/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 15:59:56 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/01 18:06:45 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <exception>
#include <ctime>

Base * generate(void){
	int random = std::rand() % 3;

	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else
		return new C();
}

void identify(Base* p){
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

/*
dynamic_cast<A&>(p) — if p is not actually an A, it throws an exception (std::bad_cast)
You can't check for NULL like with pointers
*/
void identify(Base& p){
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &){
		
	}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &){
		
	}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &){
		
	}
}

int main() {
    std::srand(std::time(NULL));
    
    for (int i = 0; i < 10; i++) {
        Base* ptr = generate();
        
        std::cout << "Pointer identify: ";
        identify(ptr);
        
        std::cout << "Reference identify: ";
        identify(*ptr);
        
        std::cout << std::endl;
        
        delete ptr;
    }
    
    return 0;
}