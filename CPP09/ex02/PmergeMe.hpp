/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:06:56 by sel-khao          #+#    #+#             */
/*   Updated: 2026/05/21 15:35:13 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <sys/time.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <stack>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>

class PmergeMe{
    private:
            
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe& operator=(const PmergeMe& other);
        PmergeMe(const PmergeMe& other);

		template <typename Container>
		void createPairs(const Container& container, Container& big, Container &small, int& unpaired){
			size_t i = 0;
			while (i < (container.size() - 1)){
				if (container[i] > container[i + 1]){
					big.push_back(container[i]);
					small.push_back(container[i + 1]);
				}
				else{
					big.push_back(container[i + 1]);
					small.push_back(container[i]);
				}
				i += 2;
			}
			if (container.size() % 2 != 0)
				unpaired = container[i];
		}


		std::vector<int> generateJacobsthalOrder(int n){
		std::vector<int> order;
		if (n <= 0)
			return order;
		//firs jacob num is always 1
		order.push_back(1);
		if (n == 1)
			return order;
		int prev2 = 1;//-2
		int prev1 = 1;//-1
		while (true){
			int next = prev1 + (2 * prev2);
			if (next > n)
				break;
			order.push_back(next);
			prev2 = prev1;
			prev1 = next;
		}
		std::vector<int> order2;
		for (int i = 1; i <= n; i++)
			order2.push_back(i);
		std::vector<int> remaining;
		for (int i = 0; i < (int)order2.size(); i++){
			int num = order2[i];
			bool found = false;
			for (int j = 0; j < (int)order.size(); j++){
				if (order[j] == num){
					found = true;
					break;
				}
			}
			if (!found)
				remaining.push_back(num);
		}
		std::sort(remaining.begin(), remaining.end(), std::greater<int>());
		for (size_t i = 0; i < remaining.size(); i++)
    		order.push_back(remaining[i]);
		return order;
		}

		
        template <typename Container>
		void addSmall(Container& big, Container& small){
			std::vector<int> order = generateJacobsthalOrder(small.size());
			for (size_t j = 0; j < order.size(); j++){
				int idx = order[j] - 1;//since jach starts from 1
				int val = small[idx];
				typename Container::iterator pos = std::lower_bound(big.begin(), big.end(), val);
				//lower_bound restituisce un iteratore che punta al primo elemento NON minore di val
				big.insert(pos, val);
			}
		}
        template <typename Container>
		void sort(Container& container){
			//std::cout << "sort called" << std::endl;
			if (container.size() == 0 || container.size() == 1){
				//std::cout << "already ordered" << std::endl;
				return ;
			}
			Container big;
			Container small;
			int unpaired = -1;
			createPairs(container, big, small, unpaired);
			sort(big);
			addSmall(big, small);
			if (unpaired != -1){
				typename Container::iterator pos = std::lower_bound(big.begin(), big.end(), unpaired);
				big.insert(pos, unpaired);
			}
			container.clear();
			for (size_t i = 0; i < big.size(); i++)
    			container.push_back(big[i]);
        }		
};

#endif