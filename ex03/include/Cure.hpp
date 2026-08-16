/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 14:34:53 by jleray            #+#    #+#             */
/*   Updated: 2026/08/16 14:34:53 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
	 public:
		Cure();
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);
		Cure*	clone(void) const;
		void	use(ICharacter& target);
		~Cure();
		
};

#endif
