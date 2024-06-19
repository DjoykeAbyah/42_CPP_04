/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 16:14:19 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/19 19:04:52 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"//need to include this?
#include "Character.hpp"

/**
 * @todo which headers do I need to include?
*/
class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure(std::string const & type);
		Cure(const Cure& copy);
		Cure& operator=(const Cure& copy);
		virtual ~Cure();

		Cure* clone() const override;
		void use(ICharacter& target) override;
};

#endif