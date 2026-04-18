/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 12:14:01 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/18 14:12:40 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int Span::shortestSpan(){
    if (container.size() < 2){
        throw std::runtime_error("not enough N");
    }
    else{
        std::vector<int> copia = container;
        std::sort(copia.begin(), copia.end());
        int min = INT_MAX;
        for (unsigned long i = 0; i < copia.size() - 1; i++){
            int diff = copia[i + 1] - copia[i];
            if (diff < min)
                min = diff;
        }
        return min;
    }
}

int Span::longestSpan(){
    if (container.size() < 2)
        throw std::runtime_error("not enough N");
    else{
        std::vector<int>::iterator min = std::min_element(container.begin(), container.end());//vuole due iteratori
        std::vector<int>::iterator max = std::max_element(container.begin(), container.end());//vuole due iteratori
        return (*max - *min);
    }
}

void Span::addNumber(int num){
    if (container.size() >= N)
        throw std::runtime_error("max N reached");
    else
        container.push_back(num);
}


Span::Span(unsigned int n){
    N = n;
}

Span::Span(){}

Span::~Span(){}

Span::Span(const Span &other){
    N = other.N;
    container = other.container;
}

Span& Span::operator=(const Span &other){
	if (this != &other){
		N = other.N;
        container = other.container;
	}
    return *this;
}

