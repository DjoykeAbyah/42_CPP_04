/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriasource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 16:22:45 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/19 16:23:41 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
# define Ice_HPP

#include "Amateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif