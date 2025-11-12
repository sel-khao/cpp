/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:46:54 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/04 19:24:11 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

//float roundf(float x); x floating-point i wanna round
// return the nearest integer value as a float
#include <cmath>
#include <cstdlib>
#include <iostream>

class Fixed {
    private:
        int fixed;
        static const int fraction = 8;
    public:
        Fixed();
        Fixed(const int value);
        Fixed& operator = (const Fixed& other);
        Fixed(const Fixed& other);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt( void ) const;
        ~Fixed();
};

#endif