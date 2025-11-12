/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:39:46 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/12 13:42:02 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main()
{
    std::string uno = "HI THIS IS BRAIN";//house' address
    std::string* stringPTR = &uno;//points to the address of house, it doesnt contain the house
    std::string& stringREF = uno;//directly attached to the 

    std::cout << &uno << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << uno << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return 0;
}