/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 13:28:51 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/02 15:00:44 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

/*

*/

template <typename T>//now the class is a template class
class Array {
    private:
        T* elements;
        unsigned size;
    public:
        Array();
        Array(unsigned int n);
        ~Array();
        Array& operator=(const Array& other);
        Array(const Array& other);
        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;
        unsigned int size() const;
};


#include "Array.tpp"
#endif