/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:06:31 by sel-khao          #+#    #+#             */
/*   Updated: 2026/05/21 14:32:55 by sel-khao         ###   ########.fr       */
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
        struct timeval start, end;
        gettimeofday(&start, NULL);
        sorter.sort(vec);
        gettimeofday(&end, NULL);
        long vec_time = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);
        std::cout << "Time to process with std::vector: " << vec_time << " us" << std::endl;
        std::cout << "After: ";
        for (size_t i = 0; i < vec.size(); i++)
            std::cout << vec[i] << " ";
        std::cout << std::endl;
        gettimeofday(&start, NULL);
        sorter.sort(deq);
        gettimeofday(&end, NULL);
        long deq_time = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);
        std::cout << "Time to process with std::deque: " << deq_time << " us" << std::endl;
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