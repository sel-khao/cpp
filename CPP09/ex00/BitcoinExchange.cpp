/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:45:07 by sel-khao          #+#    #+#             */
/*   Updated: 2026/05/22 16:52:56 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool BitcoinExchange::ValidationDate(const std::string& date){
	if (date.length() != 10){
		std::cerr << "Error: bad date format: " << date << std::endl;
		return false;
	}
	if (date[4] != '-' || date[7] != '-'){
		std::cerr << "Error: bad date format: " << date << std::endl;
		return false;
	}
	for (int i = 0; i < 10; i++){
		if (i == 4 || i == 7){
			if (date[i] != '-'){
				std::cerr << "Error: bad date format: " << date << std::endl;
				return false;
			}
		}
		else {
			if (!isdigit(date[i])){
				std::cerr << "Error: bad date format: " << date << std::endl;
				return false;
			}
		}
	}
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	if (month > 12 || month < 1){
		std::cerr << "Error: month doesnt exist: " << date << std::endl;
		return false;
	}
	int day = std::atoi(date.substr(8, 2).c_str());
	int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == 2){
		bool isBisestile = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		//condizione ? valoreSeVero : valoreSeFalso
		int maxDay = isBisestile ? 29 : 28;
		if (day < 1 || day > maxDay){
			std::cerr << "Error: this day in February doesnt exist: " << date << std::endl;
			return false;
		}
	}
	else{
		if (day < 1 || day > monthDays[month - 1]){
			std::cerr << "Error: day doesnt exist: " << date << std::endl;
			return false;
		}
	}
	return true;
}
/*
anno bisestile, ogni 4 anni. so if anno divisibile per 4 e non e' divisibile per 100 ma per 400 si*/

void BitcoinExchange::extractDataFile(const std::string& filename){
	std::ifstream file(filename.c_str());
	if (!file.is_open()){
		std::cout << "Error: could not open file" << std::endl;
		return ;
	}
	std::string line;
	bool isFirstLine = true;
	while (std::getline(file, line)){
		if (isFirstLine){
			isFirstLine = false;
			continue;
		}
		if (line.empty())
			continue;
		size_t pipe = line.find("|");//input of utente con | e spazi
		if (pipe == std::string::npos){
			std::cerr << "Error: bad input: " << line << std::endl;
			continue;
		}
		std::string dateSpace = line.substr(0, pipe);
		std::stringstream dataSpace(dateSpace);//passo la stringa con spazi
		std::string date;
		dataSpace >> date;//ritorna stringa senza spazi
		if (!ValidationDate(date))
			continue;
		std::string strValue = line.substr(pipe + 1);//senza parametro so until end
		char *endptr;
		double value = std::strtod(strValue.c_str(), &endptr);
		if (*endptr != '\0'){
			std::cerr << "Error: invalid number: " << strValue << std::endl;
		    continue;
		}
		if (value < 0) {
    		std::cerr << "Error: not a positive number." << std::endl;
    		continue;
		}
		if (value > 1000) {
    		std::cerr << "Error: too large number." << std::endl;
    		continue;
		}
		std::map<std::string, double>::iterator it = database.find(date);//
		if (it == database.end()) {
			it = database.lower_bound(date);//use low data
			if (it == database.end()){
				it = database.end();
				--it;
			}
			else if (it == database.begin()){
				std::cerr << "Error: date too old => " << date << std::endl;
				continue;
			}
			else
				--it;//vai alla data inferiore
		}
		double rate = it->second;
		double result = value * rate;
		std::cout << date << " => " << value << " * " << rate << " = " << result << std::endl;
	}
	return ;
}


void BitcoinExchange::loadDatabase(const std::string& filename){
	std::ifstream file(filename.c_str());
	if (!file.is_open()){
		std::cout << "Error: could not open file" << std::endl;
		return ;
	}
	std::string header;
	std::getline(file, header);//skip first line
	std::string line;//"2020-08-20,0.07"
	while (std::getline(file, line)){
		size_t virgola = line.find(",");//se find non trova la virgola ritorna std::string::npos(numero speciale)
		if (virgola == std::string::npos)
			continue;
		std::string date = line.substr(0, virgola);
		std::string strValue = line.substr(virgola + 1);//senza parametro so until end
		double value = std::atof(strValue.c_str());
		database[date] = value;
	}
	return ;
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : database(other.database){}//cost copia

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other){
    if (this != &other)
		database = other.database;
    return (*this);
}

