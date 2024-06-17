/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 20:17:49 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/17 20:20:01 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const std::string& name);//do i need to use this?
		WrongCat(const WrongCat& copy);
		const WrongCat& operator=(const WrongCat& copy);
		~WrongCat();

		void makeSound() const;
};