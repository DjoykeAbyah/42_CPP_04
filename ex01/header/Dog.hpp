/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 15:51:49 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/18 16:17:49 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

/**
 * @todo 
 * 			1) why using override in the method
 * 			2) check if destructor needs to be virtual
*/
class Dog : public Animal
{
	private:
		Brain* _brain;
		
	public:
		Dog();
		Dog(const std::string& name);
		Dog(const Dog& copy);
		Dog& operator=(const Dog& copy);
		virtual ~Dog();

		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
		
		void makeSound() const override;
};

#endif