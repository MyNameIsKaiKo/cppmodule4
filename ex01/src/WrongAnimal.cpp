/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 14:48:27 by jleray            #+#    #+#             */
/*   Updated: 2026/08/15 14:48:27 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wrong Type")
{
	std::cout << "WrongAnimal constructor used" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor used" << std::endl;
	*this = other; 
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal Sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor used" << std::endl;
}
