/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 14:12:20 by jleray            #+#    #+#             */
/*   Updated: 2026/08/15 14:12:20 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
	
	public:
		Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		void	makeSound() const;
		~Cat();
};
#endif

