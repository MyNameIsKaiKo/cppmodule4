/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 13:21:09 by jleray            #+#    #+#             */
/*   Updated: 2026/08/16 13:21:09 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"
#include "../include/ICharacter.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& other) : AMateria("ice") { (void)other; }

Ice& Ice::operator=(const Ice& other)
{
	(void)other;
	return (*this);
}

Ice* Ice::clone(void) const
{
	 Ice* clonedIce = new Ice();
	 return (clonedIce);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName() << " *" << std::endl;
}

Ice::~Ice() {}
