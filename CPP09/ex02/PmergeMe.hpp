/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:06:56 by sel-khao          #+#    #+#             */
/*   Updated: 2026/05/19 17:20:36 by sel-khao         ###   ########.fr       */
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

        template <typename Container>
		void addSmall(Container& big, Container& small){
			for (size_t i = 0; i < small.size(); i++){
				int val = small[i];
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