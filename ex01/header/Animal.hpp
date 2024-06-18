#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define BOLD_TEXT "\033[1m"
# define RESET "\033[0m"
# define BLUE "\033[34m"
# define CYAN "\033[36m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"

/**
 * @todo 	check if _name was correctly added
*/
class Animal
{
	protected:
		std::string		_type;
		std::string		_name;
		
	public:
		Animal();
		Animal(const std::string& name);
		Animal(const Animal& copy);
		const Animal& operator=(const Animal& copy);
		virtual ~Animal();
		
		const std::string& getType() const;//needs to be reference?
		const std::string& getName() const;
		
		void setName(const std::string& name);
		void setType(const std::string& type);
		
		virtual void makeSound() const ;// virtual to overwrite
};

#endif