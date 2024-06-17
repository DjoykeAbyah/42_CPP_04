/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 20:32:03 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/17 21:15:58 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	public:
		std::string 	ideas[100];
		
		Brain();
		Brain(const Brain& copy);
		const Brain& operator=(const Brain& copy);
		virtual ~Brain();
};