/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:14:35 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/18 13:53:16 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <climits>
#include <exception>

class Span{
    private:
        unsigned int N;
        std::vector<int> container;//memorizzare i numeri
    public:
        Span();
        Span(unsigned int n);
        ~Span();
        Span(const Span &other);
		Span& operator=(const Span &other);
        int shortestSpan();
        int longestSpan();
        void addNumber(int num);
        //"implement a member function to add multiple numbers using a range of iterators"
        template <typename Iterator>
        void addNumber(Iterator begin, Iterator end){
            while (begin != end){
                addNumber(*begin);
                ++begin;//cosi accedo al valore
            }
        }
};

#endif