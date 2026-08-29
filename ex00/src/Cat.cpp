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
	std::cout << "Cat constructor used" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat& other) 
{
	std::cout << "Cat copy constructor used" << std::endl;
	*this = other; 
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void Cat::makeSound () const
{
	std::cout << "Mew" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor used" << std::endl;
}
