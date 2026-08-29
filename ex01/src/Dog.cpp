/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 14:03:51 by jleray            #+#    #+#             */
/*   Updated: 2026/08/15 14:03:51 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() 
{
	this->_type = "Dog";
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea("Mew", i);
	std::cout << "Dog constructor used" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{ 
	std::cout << "Dog copy constructor used" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other)
{	
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	*this->_brain = *other._brain;
	return (*this);
}

void Dog::makeSound () const
{
	std::cout << "Bark" << std::endl;
}

void Dog::setIdea(std::string string, int index)
{
	this->_brain->setIdea(string, index);
}

std::string Dog::getIdea(int index) const 
{ return (this->_brain->getIdea(index)); }

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor used" << std::endl;
}
