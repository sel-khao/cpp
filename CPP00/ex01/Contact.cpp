/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:58:56 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/10 18:10:45 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() {
    LastName = "";
    NickName = "";
    FirstName = "";
    PhoneNumber = "";
    DarkestSecret = "";
}

Contact::~Contact(){}

//setter
void Contact::SetFirstName(const std::string& input) {
    FirstName = input;
}

void Contact::SetLastName(const std::string& input) {
    LastName = input;
}

void Contact::SetNickName(const std::string& input) {
    NickName = input;
}

void Contact::SetPhoneNumber(const std::string& input) {
    PhoneNumber = input;
}

void Contact::SetDarkestSecret(const std::string& input) {
    DarkestSecret = input;
}

//getters
std::string Contact::GetFirstName()const {
    return FirstName;
}

std::string Contact::GetLastName()const {
    return LastName;
}

std::string Contact::GetNickName()const {
    return NickName;
}

std::string Contact::GetPhoneNumber()const {
    return PhoneNumber;
}

std::string Contact::GetDarkestSecret()const {
    return DarkestSecret;
}