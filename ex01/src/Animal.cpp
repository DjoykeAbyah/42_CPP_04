/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/16 21:34:47 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/17 19:42:16 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Default"){
	std::cout << "Animal default constructor called"<< RESET << std::endl;
}

Animal::Animal(const Animal& copy){
	*this = copy;
	std::cout << "Animal copy constructor called" << RESET << std::endl;
}

const Animal& Animal::operator=(const Animal& copy){
	std::cout << BLUE << "Animal copy assignment operator overloader called" << RESET << "\n\n";
	if (this != &copy)
		this->setType(copy.getType());
	return *this;
}

Animal::~Animal(){
	std::cout << RED << "Animal destructor called" << RESET << std::endl;
}

void Animal::setType(std::string type){
	this->_type = type;
}

std::string Animal::getType() const{
	return this->_type;
}


void Animal::makeSound() const{
	std::cout << GREEN << "Animalll!!!!" << RESET << std::endl;
}
