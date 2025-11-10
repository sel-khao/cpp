/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:05:17 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/10 16:31:08 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;

    std::string input;
    while (1)
    {
        std::cout << "🕻 My Phonebook: ";
        if (!std::getline(std::cin, input))
        {
            std::cout << std::endl;
            return 1;
        }
        if (input == "ADD"){
            if (phonebook.add() == 1)
                return 1;
        }
        else if (input == "SEARCH")
        {
            if (phonebook.search() == 1)
                return 1;
        }
        else if (input == "EXIT"){
            return 0;
        }
    }
}
