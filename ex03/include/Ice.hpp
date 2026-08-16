/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 13:15:45 by jleray            #+#    #+#             */
/*   Updated: 2026/08/16 13:15:45 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
	 public:
		Ice();
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);
		Ice*	clone(void) const;
		void	use(ICharacter& target);
		~Ice();
		
};

#endif
