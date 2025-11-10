/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:54:01 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/10 18:10:28 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

class PhoneBook {
    private:
        int contactNumbers;
        Contact contact[8];
        void count(std::string str);
    public:
        PhoneBook();
        ~PhoneBook();
        int add();
        int search();
};

#endif
