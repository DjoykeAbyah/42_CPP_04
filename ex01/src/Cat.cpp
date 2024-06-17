/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 15:52:09 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/17 21:43:36 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal(), _brain(new Brain){//
	this->setType("cat");
	std::cout << "Cat default constructor called"<< RESET << std::endl;
}

Cat::Cat(const Cat& copy){
	*this = copy;
	std::cout << "Cat copy constructor called" << RESET << std::endl;
}

const Cat& Cat::operator=(const Cat& copy){
	std::cout << BLUE << "Cat copy assignment operator overloader called" << RESET << "\n\n";
	if (this != &copy)
		this->setType(copy.getType());//
		_brain = new Brain;//
	return *this;
}

Cat::~Cat(){
	std::cout << RED << "Cat destructor called" << RESET << std::endl;
}

void Cat::makeSound() const{
	std::cout << GREEN << "Meow" << RESET << std::endl;
}

//maybe fill the ideas with variations meow?