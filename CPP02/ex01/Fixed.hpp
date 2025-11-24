/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:46:54 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/15 18:59:04 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <cstdlib>
#include <iostream>

class Fixed {
    private:
        int fixed;
        static const int fraction = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed& operator = (const Fixed& other);
        Fixed(const Fixed& other);
        float toFloat(void) const;
        int toInt( void ) const;
};

std::ostream& operator << (std::ostream &out, const Fixed &f);

#endif