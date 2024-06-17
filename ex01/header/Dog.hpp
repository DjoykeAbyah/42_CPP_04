/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 15:51:49 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/17 23:25:09 by djoyke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;
		
	public:
		Dog();
		Dog(const std::string& name);//do i need to use this?
		Dog(const Dog& copy);
		const Dog& operator=(const Dog& copy);
		~Dog();

		void makeSound() const override;//why override
};

#endif