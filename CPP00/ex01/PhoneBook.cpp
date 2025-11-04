/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:58:11 by sel-khao          #+#    #+#             */
/*   Updated: 2025/10/16 16:44:53 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Phonebook::init(){
            for(int a = 0; a < 8; a++)
            contact[a].PhoneNumber = "\n";
        }

void Phonebook::count(std::string str){
    if (str.size() < 10) {
        for (int n = str.size(); n < 10; n++) {
            std::cout << " ";
        }
        std::cout << str;
        return ;
    }
    else if (str.size() > 10) {
        for (int y = 0; y < 9; y++) {
            std::cout << str[y];
        }
        std::cout << '.';
        return ;
    }
    else
       std::cout << str;
}

int Phonebook::add(){
    if (contactNumbers > 7)
        contactNumbers = 0;
    std::string input;
    std::cout << "› First Name : ";
    if (!std::getline(std::cin, input))
        return 1;
    if (input == "") {
        std::cout << "invalid, try again\n";
        return 0;
    }
    contact[contactNumbers].FirstName = input;
    std::cout << "› Last Name : ";
    if (!std::getline(std::cin, input))
        return 1;
    if (input == "") {
        std::cout << "invalid, try again\n";
        return 0;
    }
    contact[contactNumbers].LastName = input;
    std::cout << "› Nickname : ";
    if (!std::getline(std::cin, input))
        return 1;
    if (input == "") {
        std::cout << "invalid, try again\n";
        return 0;
    }
    contact[contactNumbers].Nickname = input;
    std::cout << "› Phone Number : ";
    if (!std::getline(std::cin, input))
        return 1;
    if (input == "") {
        std::cout << "invalid, try again\n";
        return 0;
    }
    contact[contactNumbers].PhoneNumber = input;
    std::cout << "› Darkest Secret : ";
    if (!std::getline(std::cin, input))
        return 1;
    if (input == ""){
        std::cout << "invalid, try again\n";
        return 0;
    }
    contact[contactNumbers].DarkestSecret = input;
    contactNumbers++;
    return 0;
}

int Phonebook::search()
{
    std::cout << "|    index| firstname|  lastname|  nickname|" << std::endl;
    for (int j = 0; j < 8; j++) {
        if (contact[j].PhoneNumber.empty())
            continue;
        std::cout << "         " << j << "|";
        count(contact[j].FirstName);
        std::cout << "|";
        count(contact[j].LastName);
        std::cout << "|";
        count(contact[j].Nickname);
        std::cout << "|";
        std::cout << std::endl;
    }
    std::cout << "› enter contact index : ";
    std::string input;
    if (!std::getline(std::cin, input))
        return 1;
    int n = atoi(input.c_str());
    if (n > 7  || n < 0 || contact[n].PhoneNumber.empty()) {
        std::cout << "non existing\n";
        return 0;
    }
    std::cout << "First Name: " << contact[n].FirstName << std::endl;
    std::cout << "Last Name: " << contact[n].LastName << std::endl;
    std::cout << "Nickname: " << contact[n].Nickname << std::endl;
    std::cout << "Phone Number: " << contact[n].PhoneNumber << std::endl;
    std::cout << "Darkest Secret: " << contact[n].DarkestSecret << std::endl;
    return 0;
}


