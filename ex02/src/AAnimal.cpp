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
	std::cout << "AAnimal constructor used" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << "AAnimal copy constructor used" << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void AAnimal::makeSound () const
{
	std::cout  << "An AAnimal Sound" << std::endl;
}


std::string AAnimal::getType() const { return (this->_type); }

AAnimal::~AAnimal() 
{
	std::cout << "AAnimal destructor used" << std::endl;
}

