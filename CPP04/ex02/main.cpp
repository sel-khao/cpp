/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:16:55 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/27 13:10:38 by sel-khao         ###   ########.fr       */
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
/*     std::cout << "== basic polymorphism ==" << std::endl;
    //const Animal* j = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete i;
    delete j;
    std::cout << std::endl;
    
    std::cout << "== array of animals ==" << std::endl;
    const Animal* animal[4];
    animal[0] = new Dog();
    animal[1] = new Cat();
    animal[2] = new Dog();
    animal[3] = new Cat();
    
    for (int i = 0; i < 4; i++){
        delete animal[i];
    }
    std::cout << std::endl;
     */
    std::cout << "== assignment operator ==" << std::endl;
    {
        Dog dog1;
        Dog dog2;
        
        std::cout << "ok" << dog2.getType() << std::endl;
        dog1 = dog2;
    }
    return 0;
}