/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:39:48 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/20 13:48:27 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argv, char* argc){
    if (argv != 2){
        std::cout << "Wrong arguments: ./program <file_name>" << std::endl;
    }
    BitcoinExchange datas;//his database is empty
    datas.loadDatabase("data.csv");
}