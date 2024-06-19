/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 15:52:09 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/19 13:33:30 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain()){
	this->_type = "Cat";
	std::cout << BLUE << "Cat " << RESET << "default constructor called" << RESET << std::endl;
}

Cat::Cat(const std::string& name) : Animal(name), _brain(new Brain()){
	std::cout << BLUE << "Cat " << RESET << "parametric constructor called" << RESET << std::endl;
}

/**
 * @todo 	check if I'm actually making a deep copy for copy
 * @brief 	creates a new cat object as a copy of an existing cat object
*/
Cat::Cat(const Cat& copy) : Animal(copy), _brain(new Brain(*copy._brain)){
	std::cout << BLUE << "Cat " << RESET << "copy constructor called" << RESET << std::endl;
}

/**
 * @brief 	copies content of one excisting Cat to another excisting cat
 *			not just shallow copy of the pointer
*/
Cat& Cat::operator=(const Cat& copy){
	std::cout << BLUE << "Cat " << RESET << YELLOW << 
	"copy assignment operator overloader called" << RESET << std::endl;
	if (this != &copy)
		Animal::operator=(copy);//copies base class part of cat
		delete _brain;//delete old brain to prevent memory leak
		_brain = new Brain(*copy._brain);// create new brain as deep copy part of copy's brain
	return *this;
}

//shallow copy example
//In this example, the line _brain = copy._brain; 
//performs a shallow copy of the _brain pointer. 
//Both Cat objects will point to the same Brain object, 
//which is usually not desired for objects with dynamic memory.
// Cat& Cat::operator=(const Cat& copy) {
//     if (this != &copy) {
//         Animal::operator=(copy);  // Copy base class part
//         _brain = copy._brain;     // Shallow copy of the pointer
//     }
//     return *this;
// }

/**
 * @todo check if it's deleting everything
*/
Cat::~Cat(){
	delete _brain;
	std::cout << BLUE << "Cat " << RESET << RED << "destructor called" << RESET << std::endl;
}

void Cat::setIdea(int index, const std::string& idea){
	if (index >= 0 && index <= 100)
		this->_brain->setIdeas(index, idea);
	else
		std::cout << YELLOW << "index out of bounds please enter 0-100, this cat is smart enough" << RESET << std::endl;
}

std::string Cat::getIdea(int index) const{
	if (index >= 0 && index <= 100)
		return this->_brain->getIdeas(index);
	else
		std::cout << YELLOW << "index out of bounds please enter 0-100, not a single thought behind those eyes" << RESET << std::endl;
		return "";
}

void Cat::makeSound() const{
	std::cout << GREEN << "Meow" << RESET << std::endl;
}
