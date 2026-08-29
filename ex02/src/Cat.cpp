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
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea("Mew", i);
	std::cout << "Cat constructor used" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other)
{ 
	std::cout << "Cat copy constructor used" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other)
{	
	if (this == &other)
		return (*this);
	AAnimal::operator=(other);
	*this->_brain = *other._brain;
	return (*this);
}

void Cat::makeSound () const
{
	std::cout << "Mew" << std::endl;
}

void Cat::setIdea(std::string string, int index)
{
	this->_brain->setIdea(string, index);
}

std::string Cat::getIdea(int index) const 
{ return (this->_brain->getIdea(index)); }

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor used" << std::endl;
}
