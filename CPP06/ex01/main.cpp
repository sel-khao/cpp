/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 12:31:10 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/01 15:47:25 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
	Data data;
	
    Data* originalPtr = &data;

    uintptr_t raw = Serializer::serialize(originalPtr);
    Data* backPtr = Serializer::deserialize(raw);

    if (originalPtr == backPtr)
        std::cout << "ok: pointers match" << std::endl;
    else
        std::cout << "error: pointers don't match" << std::endl;
    
    return 0;
}