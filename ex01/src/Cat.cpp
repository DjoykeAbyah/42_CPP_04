/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 15:52:09 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/17 23:31:38 by djoyke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
	this->setType("cat");
	_brain = new Brain();//why wont this work!!
	std::cout << "Cat default constructor called"<< RESET << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy){
	*this = copy;//needs to be deep copy?
	_brain = new Brain(*copy._brain);//doesnt work?
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