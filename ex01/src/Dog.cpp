/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 15:52:14 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/17 21:39:16 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
	this->setType("Dog");
	std::cout << "Dog default constructor called"<< RESET << std::endl;
}

Dog::Dog(const Dog& copy){
	*this = copy;
	std::cout << "Dog copy constructor called" << RESET << std::endl;
}

const Dog& Dog::operator=(const Dog& copy){
	std::cout << BLUE << "Dog copy assignment operator overloader called" << RESET << "\n\n";
	if (this != &copy)
		this->setType(copy.getType());//
	return *this;
}

Dog::~Dog(){
	std::cout << RED << "Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const{
	std::cout << GREEN << "Woof" << RESET << std::endl;
}