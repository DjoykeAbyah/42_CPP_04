/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 16:08:18 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/21 22:52:32 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	// {
	// 	std::cout << "\n" << BOLD_TEXT << MAGENTA << "Basic test from subject" << RESET << std::endl;
		
	// 	IMateriaSource* src = new MateriaSource();
	// 	src->learnMateria(new Ice());//learn first means construction
	// 	src->learnMateria(new Cure());
	// 	std::cout << std::endl;

		
	// 	ICharacter* me = new Character("me");
	// 	AMateria* tmp;
	// 	tmp = src->createMateria("ice");//also constructing parametric constr
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
	// 	std::cout << std::endl;

		
	// 	ICharacter* bob = new Character("bob");
	// 	me->use(0, *bob);
	// 	me->use(1, *bob);
	// 	std::cout << std::endl;
		
	// 	delete bob;
	// 	delete me;
	// 	delete src;
	// 	std::cout << std::endl;

	// 	std::cout << "\n" << BOLD_TEXT << MAGENTA << "Extra tests" << RESET << std::endl;
	// }
	// {
	// 	// Try and create a materia that is not stored in the library
	// 	IMateriaSource* wrongMateria = new MateriaSource();
	// 	ICharacter* you = new Character("you");
	// 	AMateria* tmp;
		
	// 	wrongMateria->learnMateria(new Ice());
	// 	tmp = wrongMateria->createMateria("fly");
	// 	you->equip(tmp);

	// 	AMateria* fly = wrongMateria->createMateria("fly");
	// 	you->equip(fly);
		
	// 	delete fly;
	// 	delete you;
	// 	delete wrongMateria;
	// }
	{
        // Equip and unequip Materias from the cupboardInventory to Character
		// Try and equip a materia when the inventory is full
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        std::cout << std::endl;

        ICharacter* djoyke = new Character("Djoyke");
        ICharacter* jeff = new Character("Jeff");
        AMateria* tmp;
		
		for (int i = 0; i < 4; i++)
		{
			if (i % 2 == 0)
			{
				tmp = src->createMateria("ice");
				djoyke->equip(tmp);
			}
			else
			{
				tmp = src->createMateria("cure");
				djoyke->equip(tmp);
			}
		}

        tmp = src->createMateria("cure");
        djoyke->equip(tmp);
        delete(tmp);

        for (int i = 0; i < 4; i++)
            djoyke->use(i, *jeff);

        for (int i = 0; i < 4; i++)
            djoyke->unequip(i);
		
    	for (int i = 0; i < Character::floorIndex; i++)
        	delete Character::floor[i];
			

        delete djoyke;
        delete jeff;
        delete src;
    }
	
	
	
	// Using the copy constructor to make a deep copy of a character
	// Use the overloaded assignment operator to copy character
	// Unequip all materia
	// Use equipped Materias (Also checking for unequipped materia) 
	// Clean up dynamically allocated memory
	// Clean up dynamically allocated memory for AMateria objects in/on _floor
	return 0;
}
