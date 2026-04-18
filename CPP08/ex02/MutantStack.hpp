/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:30:43 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/18 15:42:04 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
    public:
    //i costruttori gia' li ha std::stack
        MutantStack(){};
        ~MutantStack(){};
        //MutantStack(const MutantStack &other);
        //MutantStack& operator=(const MutantStack &other);
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        const_iterator begin() const;
        const_iterator end() const;
};

/*
std::stack<int>::container_type = std::deque<int>
std::stack<int>::container_type::iterator = std::deque<int>::iterator

so:
typedef typename std::stack<T>::container_type::iterator iterator;
why i need typename?
Quando scrivi std::stack<T>::container_type, il compilatore non sa se container_type è:
un tipo (es. int, deque<int>) o una variabile statica, cuz dipende da T e T non e' noto finche'
non usa la classe.
*/
//typename MutantStack<T>::iterator = type of return
//tipo iterator da solo non esiste, esiste solo dentro MutantStack<T> e quest'ultima e' un template quindi usa typename
//MutantStack<T>:: = appartenenza
//begin() = name func
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
    return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const{
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const{
    return (this->c.end());
}


#endif