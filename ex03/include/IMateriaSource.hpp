/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 15:17:57 by jleray            #+#    #+#             */
/*   Updated: 2026/08/16 15:17:57 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>

class AMateria;

class IMateriaSource
{
	 public:
		virtual ~IMateriaSource() {}
		virtual void	learnMateria(AMateria *) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif
