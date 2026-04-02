/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 14:05:15 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/02 15:22:28 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(){
    elements = NULL;
    size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n){
    elements = new T[n];//allocate array of n elements of type T
    size = n;
}

template <typename T>
Array<T>::~Array(){
    delete[] elements;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &other){
    if (this != &other){
        delete[] elements;
        elements = new T[other.size];
        size = other.size;
        for (unsigned int i = 0; i < size; i++)
            elements[i] = other.elements[i];
    }
    return *this;
}

template <typename T>
Array<T>::Array(const Array& other){
    elements = new T[other.size];//allocate
    size = other.size;
    for (int i = 0; i < other.size; i++){
        elements[i] = other.elements[i];
    }
}

template <typename T>
T& Array<T>::operator[](unsigned int index){
    if (index >= size)
        throw std::exception();
    return elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const{
    if (index >= size)
        throw std::exception();
    return elements[index];
}

template <typename T>
unsigned int Array<T>::size() const{
    return size;//reurn memeber variable
}