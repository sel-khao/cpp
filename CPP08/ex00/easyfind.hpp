/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:41:01 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/18 12:19:06 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <exception>

template <typename T>
void easyfind(T& container, int value);

/*
gotta work with all kinds of vectrs:
void easyfind(std::vector<int>& container, int value) { ... }
void easyfind(std::list<int>& container, int value) { ... }
void easyfind(std::deque<int>& container, int value) { ... }

but since i work with Templates i don need to c:

*/
#endif