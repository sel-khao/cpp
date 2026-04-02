/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:32:46 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/02 12:57:43 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

/*
TEMPLATE

its a way to write code tht works with any data type.
instead of writing the same function for different types, i can use one for all of them.
and the compiler generates the one i actually need.
*/

template <typename T>
void swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(const T& a, const T& b) {
    if (a < b)
        return a;
    else
        return b;
}

template <typename T>
T max(const T& a, const T& b) {
    if (a > b)
        return a;
    else
        return b;
}

#endif