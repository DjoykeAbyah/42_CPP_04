/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 20:32:03 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/17 23:27:57 by djoyke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include "Animal.hpp"

class Brain
{
	private:
		std::string 	ideas[100];
		
	public:
		Brain();
		Brain(const Brain& copy);
		const Brain& operator=(const Brain& copy);
		virtual ~Brain();

		std::string getIdeas(int index) const;
		void setIdeas(int index, std::string& idea);
};

#endif