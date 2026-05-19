/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:06:31 by sel-khao          #+#    #+#             */
/*   Updated: 2026/05/19 17:07:11 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv){
    if (argc > 1){
        std::vector<int> vec;
        std::deque<int> deq;
        for (int i = 1; i < argc; i++){
            std::stringstream ss(argv[i]);
            int num;
            ss >> num;
            if (ss.fail() || !ss.eof() || num < 0){
                std::cerr << "Error: invalid number" << std::endl;
                return 1;
            }
            vec.push_back(num);
            deq.push_back(num);
        }
        std::cout << "Before: ";
        for (size_t i = 0; i < vec.size(); i++)
            std::cout << vec[i] << " ";
        std::cout << std::endl;
        PmergeMe sorter;
        std::cout << "vector: ";
        sorter.sort(vec);
        std::cout << "After: ";
        for (size_t i = 0; i < vec.size(); i++)
            std::cout << vec[i] << " ";
        std::cout << std::endl;
        std::cout << "deque: ";
        sorter.sort(deq);
        std::cout << "After: ";
        for (size_t i = 0; i < deq.size(); i++)
            std::cout << deq[i] << " ";
        std::cout << std::endl;
    }
    else {
        std::cerr << "Error: not enough arguments" << std::endl;
        return 1;
    }
}