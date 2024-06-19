/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriasource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 16:22:45 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/19 19:06:07 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

/**
 * @todo which headers do I need to include?
*/
class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif