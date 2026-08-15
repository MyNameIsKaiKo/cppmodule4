/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 14:15:24 by jleray            #+#    #+#             */
/*   Updated: 2026/08/15 14:15:24 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() 
{
	this->_type = "Cat";
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea("Mew", i);
}

Cat::Cat(const Cat& other) 
{ 
	*this = other; 
	this->_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other)
{	
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	this->_brain = other._brain;
	return (*this);
}

void Cat::makeSound () const
{
	std::cout << "Mew" << std::endl;
}

Cat::~Cat() {}
