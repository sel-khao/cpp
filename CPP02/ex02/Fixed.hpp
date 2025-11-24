/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sara <sara@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:02:35 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/16 16:04:55 by sara             ###   ########.fr       */
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
        bool operator > (const Fixed& other) const;
		bool operator < (const Fixed& other) const;
		bool operator >= (const Fixed& other) const;
		bool operator <= (const Fixed& other) const;
		bool operator == (const Fixed& other) const;
		bool operator != (const Fixed& other) const;
        static const Fixed& min(const Fixed& one, const Fixed& two);
        static Fixed& min(Fixed& one, Fixed& two);
        static const Fixed& max(const Fixed& one, const Fixed& two);
        static Fixed& max(Fixed& one, Fixed& two);
		Fixed operator + (const Fixed& other) const;
		Fixed operator - (const Fixed& other) const;
		Fixed operator * (const Fixed& other) const;
		Fixed operator / (const Fixed& other) const;
        Fixed& operator -- ();
        Fixed operator -- (int);
        Fixed& operator ++ ();
        Fixed operator ++ (int);
};

std::ostream& operator << (std::ostream &out, const Fixed &f);

#endif