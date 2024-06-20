/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 18:47:18 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/20 21:04:05 by djoyke        ########   odam.nl         */
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

Character::Character(const Character& copy) : _name(copy._name), _inventoryIndex(copy._inventoryIndex) {
	std::cout << BLUE << "Character " << RESET << "copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i];
	//need to check for no inventory?
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

void Character::equip(AMateria* m){
	if (!m)
		return;
	if (_inventoryIndex > 3)
	{
		std::cout << "cupboard is already full" << std::endl;
		return ;
	}
	this->_inventory[_inventoryIndex] = m;//assing the AMateria to the index of the inventory
	_inventoryIndex++;
}

/**
 * @todo make this function
*/
void Character::unequip(int idx){
    if ((idx >= 0 && idx < _inventoryIndex) && _inventory[idx])
    {
        if (floorIndex < 200) // Assuming the size of _floor is 200
        {
            floor[floorIndex] = _inventory[idx];//move item to the floor
            _inventory[_inventoryIndex] = nullptr;//marks it in the inventory as empty
            for (int i = idx; i < _inventoryIndex - 1; i++)//shifting items in inventory to the left
                _inventory[i] = _inventory[i + 1];//assign item at position i + 1 to i to shift to the left
            _inventory[_inventoryIndex - 1] = nullptr;//sets last item to nullptr
            _inventoryIndex--;
            floorIndex++;
        }
    }
}


void Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx >= _inventoryIndex)
	{
		if (!_inventory[idx])
			std::cout << "Nothing there to use" << std::endl;
	}
	else
		_inventory[idx]->use(target);//AMateria attribute uses the AMateria function
}