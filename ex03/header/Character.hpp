/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/19 18:38:47 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/19 19:44:35 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define BOLD_TEXT "\033[1m"
# define RESET "\033[0m"
# define BLUE "\033[34m"
# define CYAN "\033[36m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define ORANGE "\033[38;2;255;165;0m"

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

/**
 * @todo 	inventory needs to be of type AMateria?
 * 			what attributes do I need to add?
*/
class Character : public ICharacter
{
	private:
		std::string _name;
		//need items count?
		AMateria* _inventory[4]; //needs to be of type AMateria?

	public:
		//need index?
		//need Amateria floor?
		Character();
		Character(std::string const & name);
		Character(const Character& copy);
		Character& operator=(const Character& copy);
		virtual ~Character();
		
		void setName(const std::string name);
		std::string const & getName() const override;

		void equip(AMateria* m) override;
    	void unequip(int idx) override;
    	void use(int idx, ICharacter& target) override;
};

#endif