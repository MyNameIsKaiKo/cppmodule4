/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMataria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 12:57:04 by jleray            #+#    #+#             */
/*   Updated: 2026/08/16 12:57:04 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria(std::string const & type) { this->_type = type; }

AMateria::AMateria(const AMateria& other) { (void)other; }

AMateria& AMateria::operator=(const AMateria& other)
{
	(void)other;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void				AMateria::use(ICharacter& target)
{
	(void)target;
	return ;
}

AMateria::~AMateria() {}
