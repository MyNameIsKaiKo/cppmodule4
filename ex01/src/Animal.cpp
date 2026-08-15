/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 13:52:04 by jleray            #+#    #+#             */
/*   Updated: 2026/08/15 13:52:04 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() : _type("empty")
{
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea("mmh", i);
}

Animal::Animal(const Animal& other)
{ 
	*this = other;
	this->_brain = new Brain(*other._brain);
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->_type = other._type;
	this->_brain = other._brain;
	return (*this);
}

void Animal::makeSound () const
{
	std::cout  << "An Animal Sound" << std::endl;
}

void Animal::setIdea(std::string string, int index)
{
	this->_brain->setIdea(string, index);
}

std::string Animal::getType() const { return (this->_type); }

std::string Animal::getIdea(int index) const 
{ return (this->_brain->getIdea(index)); }

Animal::~Animal() 
{
	delete this->_brain;
}

