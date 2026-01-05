/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:16:55 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/27 12:41:29 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "== basic polymorphism ==" << std::endl;
    //const Animal* j = new Animal();
    const Animal* j = new Dog(); 
    const Animal* i = new Cat();
    std::cout << std::endl;
    delete i;
    delete j; 
    std::cout << std::endl;
    std::cout << "== array of animals ==" << std::endl;
    const Animal* animal[4];
    std::cout << std::endl;
    animal[0] = new Dog();
    animal[1] = new Cat();
    animal[2] = new Dog();
    animal[3] = new Cat();
    std::cout << std::endl;
    for (int i = 0; i < 4; i++){
        delete animal[i];
    }
    std::cout << std::endl;
    std::cout << "== deep copy test ==" << std::endl;
    {
        Dog dog1;
        std::cout << std::endl;
        Dog dog2(dog1);//copy construct
        std::cout << std::endl;
        Dog dog3;
        std::cout << std::endl;
        dog3 = dog1;//assignment operator test
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "== brain test ==" << std::endl;
    Dog dog1;
    std::cout << std::endl;
    dog1.getBrain()->setIdea(0, "I love bones!");
    dog1.getBrain()->setIdea(1, "I dont love bones!");
    dog1.getBrain()->setIdea(9, "you dont love bones!");
    std::cout << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << dog1.getBrain()->getIdea(1) << std::endl;
    std::cout << dog1.getBrain()->getIdea(9) << std::endl;
    //modify and check deep copy
    std::cout << std::endl;
    Dog dog2(dog1);
    std::cout << std::endl;
    std::cout << dog2.getBrain()->getIdea(0) << std::endl;
    dog2.getBrain()->setIdea(1, "i'm a dog");
    dog2.getBrain()->setIdea(9, "i'm another dog");
    std::cout << dog2.getBrain()->getIdea(1) << std::endl;
    std::cout << dog2.getBrain()->getIdea(9) << std::endl;
    std::cout << dog1.getBrain()->getIdea(1) << std::endl;
    std::cout << dog1.getBrain()->getIdea(9) << std::endl;
    std::cout << std::endl;
    {
        Dog ok;
        Dog tmp = ok;
    }
    std::cout << std::endl;
    {
        WrongCat basic;
        WrongCat no = basic;
    }
    return 0;
}