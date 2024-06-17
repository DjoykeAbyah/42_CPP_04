/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/16 21:34:50 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/17 15:08:05 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string		type;
		
	public:
		Animal();
		Animal(const std::string& string);//do i need to use this?
		Animal(const Animal& copy);
		const Animal& operator=(const Animal& copy);
		~Animal();
};