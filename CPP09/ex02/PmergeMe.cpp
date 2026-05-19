/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:05:52 by sel-khao          #+#    #+#             */
/*   Updated: 2026/05/19 14:43:05 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe& other){
    (void)other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other){
    (void)other;
    return (*this);
}