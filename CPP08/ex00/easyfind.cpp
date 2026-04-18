/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:58:32 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/18 12:04:00 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>

typename T::iterator easyfind(T& container, int value){
	typename T::iterator result = std::find(container.begin(), container.end(), value);
	if (result != container.end()){//now T can be vector<int>, list<int>, dequeue<int>
		std::cout << "found it: " << *result << std::endl;
		return result;
	}
	else
		throw std::runtime_error("couldnt find it :c");
}

/*
.begin() → iterator pointing to first element
.end() → iterator pointing to ONE PAST the last element
*/