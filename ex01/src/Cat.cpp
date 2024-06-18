/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 15:52:09 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/18 12:45:35 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain()){
	this->setType("cat");
	std::cout << "Cat default constructor called"<< RESET << std::endl;
}

Cat::Cat(const std::string& name) : Animal(name){
	std::cout << "Cat parametric constructor called"<< RESET << std::endl;
}

/**
 * @todo check if I'm actually making a deep copy for copy
*/
Cat::Cat(const Cat& copy) : Animal(copy){
	*this = copy;
	_brain = new Brain(*copy._brain);
	std::cout << "Cat copy constructor called" << RESET << std::endl;
}

const Cat& Cat::operator=(const Cat& copy){
	std::cout << BLUE << "Cat copy assignment operator overloader called" << RESET << "\n\n";
	if (this != &copy)
		this->setType(copy.getType());
		_brain = new Brain;
	return *this;
}

/**
 * @todo check if it's deleting everything
*/
Cat::~Cat(){
	delete _brain;
	std::cout << RED << "Cat destructor called" << RESET << std::endl;
}

void Cat::setIdea(int index, const std::string& idea){
	if (index >= 0 && index <= 100)
		this->_brain->setIdeas(index, idea);
	else
		//give warning out of scope
}

//make the getter!
std::string Cat::getIdea(int index) const{
	
}

void Cat::makeSound() const{
	std::cout << GREEN << "Meow" << RESET << std::endl;
}

//maybe fill the ideas with variations meow?