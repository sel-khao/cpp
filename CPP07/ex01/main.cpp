/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:16:03 by sel-khao          #+#    #+#             */
/*   Updated: 2026/04/02 13:26:43 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int& n) {
    n++;
    std::cout << n << std::endl;
}

void printInt(const int& n){
    std::cout << n << std::endl;
}

int main(){
    int arr[] = {1, 2, 3};
    iter(arr, 3, printInt);
    iter(arr, 3, increment);
}