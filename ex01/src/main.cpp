/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/16 21:34:56 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/19 13:53:21 by dreijans      ########   odam.nl         */
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
 * 			check for leaks
 *			make a copy
 *			init with name
 *			anmial make sound
 *			wrong animal make sound
 *			wrong cat make sound
*/
int main()
{
	std::cout  << "\n\n\n" <<  BOLD_TEXT << MAGENTA << "Basic test from subject" << RESET << "\n\n\n" << std::endl;
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout  << "\n\n\n" <<  BOLD_TEXT << MAGENTA << "Parametric constructor test" << RESET << "\n\n\n" << std::endl;

	const Animal* fluffy = new Cat("Fluffy");
	const Animal* wouwz = new Cat("Wouwz");
	const Animal* thing = new Animal("Thing");
	const WrongAnimal* whatsThat = new WrongAnimal("Iewl");
	const WrongCat* puma = new WrongCat("Puma");

	std::cout 	<< "this type: "<< ORANGE << fluffy->getType() << RESET 
				<< "'s name is: " << ORANGE << fluffy->getName() << RESET 
				<< ". And it makes this sound: ";
				fluffy->makeSound();
	std::cout 	<< "this type: "<< ORANGE << wouwz->getType() << RESET 
				<< "'s name is: " << ORANGE << wouwz->getName() << RESET 
				<< ". And it makes this sound: ";
				wouwz->makeSound();
	std::cout 	<< "this type: "<< ORANGE << thing->getType() << RESET 
				<< "'s name is: " << ORANGE << thing->getName() << RESET 
				<< ". And it makes this sound: ";
				thing->makeSound(); 
	std::cout 	<< "this type: "<< ORANGE << whatsThat->getType() << RESET 
				<< "'s name is: " << ORANGE << whatsThat->getName() << RESET 
				<< ". And it makes this sound: ";
				whatsThat->makeSound();
	std::cout 	<< "this type: "<< ORANGE << puma->getType() << RESET 
				<< "'s name is: " << ORANGE << puma->getName() << RESET 
				<< ". And it makes this sound: ";
				puma->makeSound();
	std::cout << std::endl;
	

	delete fluffy;
	delete wouwz;
	delete thing;
	delete whatsThat;
	delete puma;



	std::cout  << "\n\n\n" <<  BOLD_TEXT << MAGENTA << "Copy assignment operator test" << RESET << "\n\n\n" << std::endl;

	/**
	 * Object Assignment: 	In the first example, assign the contents of one object to another. 
	 * 						This invokes the copy assignment operator, 
	 * 						which performs a deep copy and manages memory correctly.
	 * 
	 * Pointer Assignment: 	In the second example, copying pointers, 
	 * 						not the actual objects they point to. 
	 * 						This can lead to memory management issues, as seen with the double delete problem.
	*/
	const Cat* beans = new Cat("Beans");
	std::cout 	<< "this type: "<< ORANGE << beans->getType() << RESET 
				<< "'s name is: " << ORANGE << beans->getName() << RESET 
				<< ". And it makes this sound: ";
				beans->makeSound();
	// creates a cat object names paws
	Cat paws("Paws");
	std::cout 	<< "this type before copy: "<< ORANGE << paws.getType() << RESET 
				<< "'s name is: " << ORANGE << paws.getName() << RESET 
				<< ". And it makes this sound: ";
				paws.makeSound();
	// uses copy assignment operator
	paws = *beans;
	std::cout 	<< "this type: "<< ORANGE << paws.getType() << RESET 
				<< "'s name is: " << ORANGE << paws.getName() << RESET 
				<< ". And it makes this sound: ";
				paws.makeSound();
	//paws object will automatically manage its memory when it goes out of scope, 
	//don't need to delete it manually.
	delete beans;

	const Dog* sprint = new Dog("Sprint");
	std::cout 	<< "this type: "<< ORANGE << sprint->getType() << RESET 
				<< "'s name is: " << ORANGE << sprint->getName() << RESET 
				<< ". And it makes this sound: ";
				sprint->makeSound();
	//creates a new Dog object and assigns its pointer to paws	
	const Dog *frankie = new Dog("Frankie");
	std::cout 	<< "this type before copy: "<< ORANGE << frankie->getType() << RESET 
				<< "'s name is: " << ORANGE << frankie->getName() << RESET 
				<< ". And it makes this sound: ";
				frankie->makeSound();
	//assigns the pointer sprint to frankie, which means frankie now points to the same object as sprint.
	//This means that the memory allocated for the original Dog object that frankie pointed to is lost, 
	//no way to delete it, causing a memory leak unless you delete frankie.
	delete frankie;
	frankie = sprint;
	std::cout 	<< "this type before copy: "<< ORANGE << frankie->getType() << RESET 
				<< "'s name is: " << ORANGE << frankie->getName() << RESET 
				<< ". And it makes this sound: ";
				frankie->makeSound();
	//deletes the object that sprint points to, which is the same object that paws now points to.
	delete sprint;
	std::cout << std::endl;

	
	

	std::cout  << "\n\n\n" <<  BOLD_TEXT << MAGENTA << "Array of cat's and dogs test" << RESET << "\n\n\n" << std::endl;
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
	



	
	std::cout  << "\n\n\n" <<  BOLD_TEXT << MAGENTA << "Giving cat ideas test" << RESET << "\n\n\n" << std::endl;
	
	Cat* cat = new Cat();
	
	for (int i = 0; i < 100; i++) 
	{
		if (i % 2 == 0)
			cat->setIdea(i, "omg magic red dot!!\n");
		else
			cat->setIdea(i, "hmm....I want attention\n");
	}
	for (int i = 0; i < 10; i++)
		std::cout << cat->getIdea(i) << std::endl;
	delete cat;





	std::cout  << "\n\n\n" <<  BOLD_TEXT << MAGENTA << "Giving cat ideas test" << RESET << "\n\n\n" << std::endl;

	Dog* dog = new Dog();

	for (int j = 0; j < 100; j++) 
	{
		if (j % 2 == 0)
			dog->setIdea(j, "MUST GET THE BALL!!!\n");
		else
			dog->setIdea(j, "oeeeh......Belly rubs.... niceee\n");
	}
	for (int j = 0; j < 10; j++)
		std::cout << dog->getIdea(j) << std::endl;
	delete dog;
	

	
	return 0;
}