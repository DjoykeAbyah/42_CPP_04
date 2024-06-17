/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 20:17:11 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/17 20:17:24 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Default"){
	std::cout << "WrongAnimal default constructor called"<< RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy){
	*this = copy;
	std::cout << "WrongAnimal copy constructor called" << RESET << std::endl;
}

const WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy){
	std::cout << BLUE << "WrongAnimal copy assignment operator overloader called" << RESET << "\n\n";
	if (this != &copy)
		this->setType(copy.getType());
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << RED << "WrongAnimal destructor called" << RESET << std::endl;
}

void WrongAnimal::setType(std::string type){
	this->_type = type;
}

std::string WrongAnimal::getType() const{
	return this->_type;
}


void WrongAnimal::makeSound() const{
	std::cout << GREEN << "WrongAnimalll!!!!" << RESET << std::endl;
}