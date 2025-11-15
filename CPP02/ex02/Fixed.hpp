/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:02:35 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/15 19:28:50 by sel-khao         ###   ########.fr       */
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

		int getRawBits(void) const;
        void setRawBits(int const raw);

        Fixed& operator = (const Fixed& other);
        Fixed(const Fixed& other);

        float toFloat(void) const;
        int toInt( void ) const;
//confronti, si o no
        bool operator > (const Fixed& other) const;
		bool operator < (const Fixed& other) const;
		bool operator >= (const Fixed& other) const;
		bool operator <= (const Fixed& other) const;
		bool operator == (const Fixed& other) const;
		bool operator != (const Fixed& other) const;
//operazioni
		Fixed operator + (const Fixed& other) const;
		Fixed operator - (const Fixed& other) const;
		Fixed operator * (const Fixed& other) const;
		Fixed operator / (const Fixed& other) const;
};

std::ostream& operator << (std::ostream &out, const Fixed &f);

#endif