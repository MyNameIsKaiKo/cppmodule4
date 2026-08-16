/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 14:35:37 by jleray            #+#    #+#             */
/*   Updated: 2026/08/16 14:35:37 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"
#include "../include/ICharacter.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria("cure") { (void)other; }

Cure& Cure::operator=(const Cure& other)
{
	(void)other;
	return (*this);
}

Cure* Cure::clone(void) const
{
	 Cure* clonedCure = new Cure();
	 return (clonedCure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals ";
	std::cout << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure() {}
