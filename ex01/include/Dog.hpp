/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:11:12 by jleray            #+#    #+#             */
/*   Updated: 2026/06/03 19:11:12 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*		_brain;

	public:
		Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		void		makeSound() const;
		void 		setIdea(std::string string, int index);
		std::string	getIdea(int index) const; 
		~Dog();
};

#endif
