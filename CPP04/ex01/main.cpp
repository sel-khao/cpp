/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:16:55 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/26 10:41:21 by sara             ###   ########.fr       */
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
    const Animal* j = new Dog(); //animal pointer to a dog object, dog gets created inside animal pointer
    //treating dog as animal, its polymorphism
    const Animal* i = new Cat();

    delete i;
    delete j;//deleting an object throught animal pointer, without the decostruct virtual, only animal's would be called
    //dog'sdeconstruct wouldnt be called, also brain* inside dog/cat wont be freed. 
    //with virtual dog's decon gets called first and then animal, no leaks.
    std::cout << std::endl;
    
    std::cout << "== array of animals ==" << std::endl;
    const Animal* animal[4];//2 cani 2 gatti as subject says
    animal[0] = new Dog();
    animal[1] = new Cat();
    animal[2] = new Dog();
    animal[3] = new Cat();
    
    for (int i = 0; i < 4; i++){
        delete animal[i];//every dog/animal dies its brain, then animal as nodes
    }
    std::cout << std::endl;
    
    std::cout << "== assignment operator ==" << std::endl;
    {//scope block
        
    }
    
    return 0;
}