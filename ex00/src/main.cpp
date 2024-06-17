/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/16 21:34:56 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/17 20:23:41 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Animal.hpp"
#include "../header/Cat.hpp"
#include "../header/Dog.hpp"
#include "../header/WrongAnimal.hpp"
#include "../header/WrongCat.hpp"

int main()
{
	{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the Cat sound
	j->makeSound(); //will output the Dog sound
	meta->makeSound(); //will output The animal sound

	delete meta;
	delete i;
	delete j;
	}
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* j = new WrongCat();
		const WrongAnimal* i = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the WrongAnimal sound
		j->makeSound(); //will output the WrongAnimal sound
		meta->makeSound(); //will output the WrongAnimal sound

		delete meta;
		delete i;
		delete j;
	}
	return 0;
}
