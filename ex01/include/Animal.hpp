/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 13:47:07 by jleray            #+#    #+#             */
/*   Updated: 2026/08/15 13:47:07 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP 
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
		Brain*		_brain;
	 public:
		Animal();
		Animal(const Animal& other);
		Animal& 	operator=(const Animal& other);
		virtual void		makeSound() const;
		void				setIdea(std::string string, int index);
		std::string			getType() const;
		std::string			getIdea(int index) const;
		virtual ~Animal();	
};

#endif
