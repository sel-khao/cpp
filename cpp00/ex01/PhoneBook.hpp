/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:54:01 by sel-khao          #+#    #+#             */
/*   Updated: 2025/10/17 15:11:40 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>

class Contacts {
    public:
        std::string LastName;
        std::string Nickname;
        std::string FirstName;
        std::string PhoneNumber;
        std::string DarkestSecret;
};

class Phonebook {
    private:
        int contactNumbers;
    public:
        Phonebook() {
            contactNumbers = 0;
        }
        Contacts contact[8];
        void init();
        int add();
        void count(std::string str);
        int search(void);
};

//error:
//if adding a space it takes it good
//contact[n].PhoneNumber.empty()
//if phonenumber string is empty
//std::string::empty() function is a member function of the std::string class.
//It checks if the string is empty. true if empty, false if not
