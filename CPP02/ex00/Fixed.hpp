/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:44:25 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/15 15:47:03 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int fixed;
        static const int fraction = 8;//shared by everyone but doesnt get copied
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& other);//copy construct
        Fixed& operator = (const Fixed& other);//copy assign,ent operator
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

/*
The Copy Constructor creates a new object by copying data from
an existing object.

The Copy Assignment Operator copies datat from one existing object to another
already existing object.

Destructor cleans up resources when an object is destroyed/deleted
(rn theres nothing to clean(no dynamic) so just define)
~FixedPoint(); declare in .hpp
~FixedPoint() {} define in .cpp
*/

#endif