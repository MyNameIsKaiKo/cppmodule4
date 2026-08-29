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
	std::cout << "Animal constructor used" << std::endl;
}

Animal::Animal(const Animal& other) 
{
	std::cout << "Animal copy constructor used" << std::endl;
	*this = other; 
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void Animal::makeSound () const
{
	std::cout  << "An Animal Sound" << std::endl;
}

std::string Animal::getType() const { return (this->_type); }

Animal::~Animal()
{
	std::cout << "Animal destructor used" << std::endl;
}

