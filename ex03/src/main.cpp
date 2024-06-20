/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 16:08:18 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/20 22:41:02 by djoyke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

// Try and create a materia that is not stored in the library
// Equip Materias from the library to Cloud
// Using the copy constructor to make a deep copy of a character
// Use the overloaded assignment operator to copy "cloud"
// Try and equip a materia when the inventory is full
// Unequip all materia
// Use equipped Materias (Also checking for unequipped materia) 
// Clean up dynamically allocated memory
// Clean up dynamically allocated memory for AMateria objects in/on _floor
int main()
{
	std::cout << "\n" << BOLD_TEXT << MAGENTA << "Basic test from subject" << RESET << std::endl;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());//learn first means construction
	src->learnMateria(new Cure());
	std::cout << std::endl;

	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");//also constructing parametric constr
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;

	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;
	
	delete bob;
	delete me;
	delete src;
	std::cout << std::endl;

	std::cout << "\n" << BOLD_TEXT << MAGENTA << "Extra tests" << RESET << std::endl;
	
	src->learnMateria(new Ice());
	tmp = src->createMateria("fly");
	me->equip(tmp);
	return 0;
}
