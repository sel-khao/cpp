/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:45:07 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/20 15:14:41 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void BitcoinExchange::loadDatabase(const std::string& filename){
	std::ifstream file(filename.c_str());
	if (!file.is_open()){
		std::cout << "Error: could not open file" << std::endl;
		return ;
	}
	std::string header;
	while (std::getline(file, header)){
		break ;
	}
	std::string line;
	while (std::getline(file, line)){
		
	}
	return ;
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : database(other.database){}//cost copia

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange other){
    if (this != &other){

    }
    return (*this);
}

