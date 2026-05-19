/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 10:58:22 by sel-khao          #+#    #+#             */
/*   Updated: 2026/05/14 14:31:15 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <fstream>
#include <sstream>
#include <cstdlib>

class RPN{
	private:
		std::stack<int> stack;
	public:
		RPN();
		~RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);

		void parse(std::string expr);
};



#endif