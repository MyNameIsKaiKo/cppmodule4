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
}

Dog::Dog(const Dog& other) { *this = other; }

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

Dog::~Dog() {}
