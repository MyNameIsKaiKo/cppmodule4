/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 14:55:13 by jleray            #+#    #+#             */
/*   Updated: 2026/08/15 14:55:13 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() { this->_type = "Wrong Cat"; }

WrongCat::WrongCat(const WrongCat& other) { *this = other; }

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

WrongCat::~WrongCat() {}
