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

Brain::Brain() {}

Brain::Brain(const Brain& other) { *this = other;}

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

Brain::~Brain() {}
