/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:58:11 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/10 16:31:14 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    contactNumbers = 0;
}

PhoneBook::~PhoneBook(){};

void PhoneBook::count(std::string str){
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

int PhoneBook::add(){
    if (contactNumbers > 7)
        contactNumbers = 0;
    std::string input;
    std::cout << "› First Name : ";
    if (!std::getline(std::cin, input))
        return 1;
    if (input.empty()) {
        std::cout << "invalid, try again\n";
        return 0;
    }
    contact[contactNumbers].SetFirstName(input);
    std::cout << "› Last Name : ";
    if (!std::getline(std::cin, input))
        return 1;
    if (input.empty()) {
        std::cout << "invalid, try again\n";
        return 0;
    }
    contact[contactNumbers].SetLastName(input);
    std::cout << "› Nickname : ";
    if (!std::getline(std::cin, input))
        return 1;
    if (input.empty()) {
        std::cout << "invalid, try again\n";
        return 0;
    }
    contact[contactNumbers].SetNickName(input);
    std::cout << "› Phone Number : ";
    if (!std::getline(std::cin, input))
        return 1;
    if (input.empty()) {
        std::cout << "invalid, try again\n";
        return 0;
    }
    contact[contactNumbers].SetPhoneNumber(input);
    std::cout << "› Darkest Secret : ";
    if (!std::getline(std::cin, input))
        return 1;
    if (input.empty()){
        std::cout << "invalid, try again\n";
        return 0;
    }
    contact[contactNumbers].SetDarkestSecret(input);
    contactNumbers++;
    return 0;
}

int PhoneBook::search()
{
    std::cout << "|     index| firstname|  lastname|  nickname|" << std::endl;
    for (int j = 0; j < 8; j++) {
        if (contact[j].GetPhoneNumber().empty())
            continue;
        std::cout << "|         " << j << "|";
        count(contact[j].GetFirstName());
        std::cout << "|";
        count(contact[j].GetLastName());
        std::cout << "|";
        count(contact[j].GetNickName());
        std::cout << "|";
        std::cout << std::endl;
    }
    std::cout << "› enter contact index : ";
    std::string input;
    if (!std::getline(std::cin, input))
        return 1;
    if (input.empty() || input.length() != 1 || input[0] < '0' || input[0] > '7') {
        std::cout << "non existing\n";
        return 0;
    }
    int n = input[0] - '0';
    if (contact[n]. GetPhoneNumber().empty()) {
        std::cout << "non existing\n";
        return 0;
    }
    std::cout << "First Name: " << contact[n].GetFirstName() << std::endl;
    std::cout << "Last Name: " << contact[n].GetLastName() << std::endl;
    std::cout << "Nickname: " << contact[n].GetNickName() << std::endl;
    std::cout << "Phone Number: " << contact[n].GetPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact[n].GetDarkestSecret() << std::endl;
    return 0;
}
