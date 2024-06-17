/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/16 21:34:50 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/17 19:40:52 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

# define BOLD_TEXT "\033[1m"
# define RESET "\033[0m"
# define BLUE "\033[34m"
# define CYAN "\033[36m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"

class Animal
{
	protected:
		std::string		_type;
		
	public:
		Animal();
		// Animal(const std::string& string);//do i need to use this?
		Animal(const Animal& copy);
		const Animal& operator=(const Animal& copy);
		virtual ~Animal();//why virtual?
		
		std::string getType() const;
		void setType(std::string type);
		virtual void makeSound() const ;// virtual to overwrite
};