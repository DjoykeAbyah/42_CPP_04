/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 15:51:49 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/17 20:07:15 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const std::string& name);//do i need to use this?
		Dog(const Dog& copy);
		const Dog& operator=(const Dog& copy);
		~Dog();

		void makeSound() const;
};