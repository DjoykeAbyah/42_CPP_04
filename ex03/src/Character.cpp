/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 18:47:18 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/19 20:58:27 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

AMateria* Character::floor[200] = {NULL};
int Character::floorIndex = 0;

Character::Character() : _name("Default"), _inventoryIndex(0){
	std::cout << BLUE << "Character" << RESET << "default constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character(std::string const & name) : _name(name), _inventoryIndex(0){
	std::cout << BLUE << "Character " << RESET << "parametric constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character(const Character& copy) : Character(copy){
	std::cout << BLUE << "Character " << RESET << "copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i];
}

Character& Character::operator=(const Character& copy){
	std::cout << BLUE << "Character " << RESET << YELLOW << 
	"copy assignment operator overloader called" << RESET << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
			delete _inventory[i];
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = copy._inventory[i];
	}
	return *this;	
}

Character::~Character(){
	std::cout << MAGENTA << "Character " << RESET << RED << " destructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

void Character::setName(const std::string name){
	this->_name = name;
}

std::string const & Character::getName() const{
	return this->_name;
}

/**
 * @todo make this function
*/
void Character::equip(AMateria* m){
	//taking from cuboard
}

/**
 * @todo make this function
*/
void Character::unequip(int idx){
	//check if there is something in the cuboard
	//take it fro that index 
	//putting on the floor
	//if nothing there give error message pick another index
}

/**
 * @todo make this function
*/
void Character::use(int idx, ICharacter& target){
	//check if I learned it.
}