/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 15:51:46 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/17 19:33:36 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const std::string& name);//do i need to use this?
		Cat(const Cat& copy);
		const Cat& operator=(const Cat& copy);
		~Cat();

		void makeSound() const;//why not virtual here?
};