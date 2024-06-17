/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 21:08:55 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/17 21:47:56 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
		std::cout << "Brain default constructor called"<< std::endl;
}

Brain::Brain(const Brain& copy){
	*this = copy;
	std::cout << "Brain copy constructor called" << std::endl;
}

const Brain& Brain::operator=(const Brain& copy){
	std::cout << "Brain copy assignment operator overloader called" << "\n\n";
	if (this != &copy)
		for (int i = 0; i < ideas.lenght; i++)
			ideas[i] = copy.ideas[i];
	return *this;
}