/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:04:46 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/12 13:40:40 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
    private:
        std::string LastName;
        std::string NickName;
        std::string FirstName;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public:
        Contact();
        ~Contact();
        void SetLastName(const std::string& input);
        void SetFirstName(const std::string& input);
        void SetNickName(const std::string& input);
        void SetPhoneNumber(const std::string& input);
        void SetDarkestSecret(const std::string& input);

        std::string GetNickName()const;
        std::string GetPhoneNumber()const;
        std::string GetDarkestSecret()const;
        std::string GetFirstName()const;
        std::string GetLastName()const;
};

#endif