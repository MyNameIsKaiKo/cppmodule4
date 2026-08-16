/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 13:52:04 by jleray            #+#    #+#             */
/*   Updated: 2026/08/16 11:10:48 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal() : _type("empty")
{
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea("mmh", i);
}

AAnimal::AAnimal(const AAnimal& other)
{ 
	*this = other;
	this->_brain = new Brain(*other._brain);
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
		this->_type = other._type;
	this->_brain = other._brain;
	return (*this);
}

void AAnimal::makeSound () const
{
	std::cout  << "An AAnimal Sound" << std::endl;
}

void AAnimal::setIdea(std::string string, int index)
{
	this->_brain->setIdea(string, index);
}

std::string AAnimal::getType() const { return (this->_type); }

std::string AAnimal::getIdea(int index) const 
{ return (this->_brain->getIdea(index)); }

AAnimal::~AAnimal() 
{
	delete this->_brain;
}

