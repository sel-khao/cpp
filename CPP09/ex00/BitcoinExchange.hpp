/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:45:33 by sel-khao          #+#    #+#             */
/*   Updated: 2026/05/14 10:48:13 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <cstdlib>

class BitcoinExchange{
    private:
        std::map<std::string, double> database;//salvo i data(prezzi)
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        void loadDatabase(const std::string& filename);
        void extractDataFile(const std::string& filename);
        bool ValidationDate(const std::string& date);
};

#endif