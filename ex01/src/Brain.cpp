/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 21:08:55 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/18 15:12:42 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called"<< std::endl;
}

Brain::Brain(const Brain& copy){
	*this = copy;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& copy){
	std::cout << "Brain copy assignment operator overloader called" << "\n\n";
	if (this != &copy)
		for (int i = 0; i < 100; i++)
			ideas[i] = copy.ideas[i];
	return *this;
}

Brain::~Brain(){
	std::cout << RED << "Brain destructor called" << RESET << std::endl;
}

std::string Brain::getIdeas(int index) const{
	return this->ideas[index];
}

void Brain::setIdeas(int index, const std::string& idea){
	this->ideas[index] = idea;
}