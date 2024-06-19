/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 16:16:08 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/19 18:47:12 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria(){
	this->_type = "cure";
	std::cout << BLUE << "Cure " << RESET << "default constructor called" << RESET << std::endl;
}

Cure::Cure(std::string const & type) : AMateria(type){
	std::cout << BLUE << "Cure " << RESET << "parametric constructor called" << RESET << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria(copy){
	std::cout << BLUE << "Cure " << RESET << "copy constructor called" << RESET << std::endl;
}

Cure& Cure::operator=(const Cure& copy){
	std::cout << BLUE << "Cure " << RESET << YELLOW << 
	"copy assignment operator overloader called" << RESET << std::endl;
	if (this != &copy)
		AMateria::operator=(copy);
	return *this;
}

Cure::~Cure(){
	std::cout << BLUE << "Cure " << RESET << RED << "destructor called" << RESET << std::endl;	
}

Cure* Cure::clone() const{
	return new Cure(*this);
}

/**
 * @todo adjust this method once character is done
*/
void Cure::use(ICharacter& target){
	std::cout << CYAN << "* heals " 
	<< YELLOW << this->target._name << RESET << CYAN <<  "'s wounds *" << RESET << std::endl;
}