/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 15:51:46 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/18 12:45:00 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

/**
 * @todo 	
 * 			1) why using override in the method
 * 			2) check if destructor needs to be virtual
*/
class Cat : public Animal
{
	private:
		Brain* _brain;
		
	public:
		Cat();
		Cat(const std::string& name);
		Cat(const Cat& copy);
		const Cat& operator=(const Cat& copy);
		~Cat();
		
		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
		
		void makeSound() const override;
};

#endif