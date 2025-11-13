/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:23:32 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/13 17:38:46 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <cctype>

class Harl {
    private:
        void debug();
        void info();
        void warning();
        void error();
    public:
        void complain(std::string level);
};

void Harl::complain(std::string level){
    
}

#endif