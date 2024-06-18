/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/16 21:34:56 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/18 16:38:28 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Animal.hpp"
#include "../header/Cat.hpp"
#include "../header/Dog.hpp"
#include "../header/Brain.hpp"
#include "../header/WrongAnimal.hpp"
#include "../header/WrongCat.hpp"

/**
 * @todo	test for shallow copies
 * 			end of program loop over the array and delete every animal
 * 			directly delete dogs and cat's as animal (virtual)
 * 			check for leaks
 *			make a copy
 *			init with name
*/
int main()
{
	std::cout  << "\n\n\n" <<  BOLD_TEXT << MAGENTA << "Basic test from subject" << RESET << "\n\n\n" << std::endl;
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;





	std::cout  << "\n\n\n" <<  BOLD_TEXT << MAGENTA << "Array of cats and dogs test" << RESET << "\n\n\n" << std::endl;
	Animal* animalCafe[10];
	
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animalCafe[i] = new Dog();
		else
			animalCafe[i] = new Cat();
	}





	std::cout  << "\n\n\n" <<  BOLD_TEXT << MAGENTA << "Sounds of cats and dogs test" << RESET << "\n\n\n" << std::endl;
	
	
	for (int j = 0; j < 10; j++)
		animalCafe[j]->makeSound();
	




	std::cout  << "\n\n\n" <<  BOLD_TEXT << MAGENTA << "Deleting array of cats and dogs test" << RESET << "\n\n\n" << std::endl;
	
	
	for (int k = 0; k < 10; k++)
		delete animalCafe[k];
	



	
	std::cout  << "\n\n\n" <<  BOLD_TEXT << MAGENTA << "Giving them ideas test" << RESET << "\n\n\n" << std::endl;
	
	Cat* cat = new Cat();
	
	for (int i = 0; i < 100; i++) 
	{
		if (i % 2 == 0)
			cat->setIdea(i, "omg magic red dot");
		else
			cat->setIdea(i, "I want attention");
	}
	for (int i = 0; i < 100; i++)
		cat->getIdea(i);
	delete cat;

	Dog* dog = new Dog();
	
	for (int j = 0; j < 100; j++) 
	{
		if (j % 2 == 0)
			dog->setIdea(j, "must get sock");
		else
			dog->setIdea(j, "Belly rubs niceee");
	}
	for (int j = 0; j < 100; j++)
		cat->getIdea(j);
	delete dog;
	
	return 0;
}