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
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea("Bark", i);
}

Dog::Dog(const Dog& other) 
{
	*this = other; 
	this->_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other)
{
	if (this == &other)
		return (*this);
	AAnimal::operator=(other);
	this->_brain = other._brain;
	return (*this);
}
void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

Dog::~Dog() {}
