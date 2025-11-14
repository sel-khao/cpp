/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:44:36 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/14 00:04:07 by sara             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char **argv)
{
    int i = 0;
    if (argc != 4)
        return 0;
    std::string file = argv[1];//no need to allocate, with += automatically grows
    std::string str1 = argv[2];
    std::string str2 = argv[3];
    std::string content;
    std::string line;
    std::ifstream inputFile(file);//file opened and read by default
    if (!inputFile)
        return 1;
    while (std::getline(inputFile, line)){
        content += line;
        if (!inputFile.eof())//if its not the eof
            content += '\n';//add newline
    }
    size_t pos = 0;
    std::string before = "";//handle its own memory
    while ()
    {
        size_t found = content.find(str1, pos);//search from pos
        if (found != std::string::npos)
    }
    
    //when object goes out of scope, it automatically close but we do explicit
    inputFile.close();
    return 0;
}