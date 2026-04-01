/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 12:31:34 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/01 16:42:16 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <exception>
#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>
#include <stdint.h>
//maybe the structur should be in a separated Data.hpp file
struct Data
{
	int i;
};

class Serializer{
	private:
		Serializer();
		~Serializer();
		Serializer& operator=(const Serializer& other);
		Serializer(const Serializer& other);
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif