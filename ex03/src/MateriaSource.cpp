/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 16:22:17 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/19 19:20:19 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << BLUE << "MateriaSource" << RESET << "default constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		_cupboardInventory[i] = nullptr;
}

MateriaSource::MateriaSource(){
	std::cout << BLUE << "MateriaSource" << RESET << "default constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		_cupboardInventory[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& copy) : MateriaSource(copy){
	std::cout << BLUE << "MateriaSource " << RESET << "copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		delete _cupboardInventory[i];
	for (int i = 0; i < 4; i++)
		this->_cupboardInventory[i] = copy._cupboardInventory[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy){
	std::cout << BLUE << "MateriaSource " << RESET << YELLOW << 
	"copy assignment operator overloader called" << RESET << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
			delete _cupboardInventory[i];
		for (int i = 0; i < 4; i++)
			this->_cupboardInventory[i] = copy._cupboardInventory[i];
	}
	return *this;	
}

MateriaSource::~MateriaSource(){
	std::cout << MAGENTA << "MateriaSource " << RESET << RED << " destructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_cupboardInventory[i];
}

/**
 * @todo make this function
*/
void MateriaSource::learnMateria(AMateria*){

}

/**
 * @todo make this function
*/
AMateria* MateriaSource::createMateria(std::string const & type){
	if (type == "cure")
		return new Cure(type);
	if (type == "ice")
		return new Ice(type);
	else
	{
		std::cout <<"can't create this type"<< std::endl;
		return nullptr;
	}
}
