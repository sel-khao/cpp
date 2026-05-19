/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:39:48 by sel-khao          #+#    #+#             */
/*   Updated: 2026/05/12 18:10:36 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argv, char** argc){
    if (argv != 2){
        std::cout << "Wrong arguments: ./program <file_name>" << std::endl;
        return 1;
    }
    BitcoinExchange datas;//his database is empty
    datas.loadDatabase("data.csv");
    datas.extractDataFile(argc[1]);//file input utente
    return 0;
}


/*

Il tuo programma btc prende un file come argomento (es: ./btc input.txt).
Ogni riga del file ha formato: data | valore
Per ogni riga valida:
Trova il tasso di cambio per quella data nel database data.csv
Se la data non esiste → usa la data più vicina ma inferiore
Calcola: valore * tasso_di_cambio
Stampa: data => valore * tasso = risultato
Errori: stampa su cerr con messaggi tipo "Error: bad input => ..."

*/