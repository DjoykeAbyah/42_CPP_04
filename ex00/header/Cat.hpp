/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 15:51:46 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/18 12:14:13 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const std::string& name);
		Cat(const Cat& copy);
		const Cat& operator=(const Cat& copy);
		~Cat();

		void makeSound() const;//why not virtual here?
};

#endif