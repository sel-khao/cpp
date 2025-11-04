/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:05:31 by sel-khao          #+#    #+#             */
/*   Updated: 2025/10/14 12:42:23 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int main(int argc, char **argv)
{
    char c;

    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; argc > i; i++) {
        std::string str = argv[i];
        for (int j = 0; str[j]; j++) {
            c = std::toupper(str[j]);
            std::cout << c;
        }
    }
    std::cout << std::endl;
    return (0);
}
