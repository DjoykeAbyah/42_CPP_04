/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 19:21:34 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/19 19:26:04 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriasource.hpp"

/**
 * @todo which headers do I need to include?
*/
class MateriaSource :IMateriaSource
{
	private:

	public:
		MateriaSource();
		MateriaSource(std::string const & name);
		MateriaSource(const MateriaSource& copy);
		
		
};

#endif