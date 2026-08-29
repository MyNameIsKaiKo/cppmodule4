/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 15:56:43 by jleray            #+#    #+#             */
/*   Updated: 2026/08/15 15:56:43 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor used" << std::endl;
}

Brain::Brain(const Brain& other) 
{
	std::cout << "Brain copy constructor used" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

void	Brain::setIdea(std::string string, int index)
{
	this->_ideas[index] = string;
}

std::string Brain::getIdea(int index)
{
	return (this->_ideas[index]);
}

Brain::~Brain() 
{
	std::cout << "Brain destructor used" << std::endl;
}
