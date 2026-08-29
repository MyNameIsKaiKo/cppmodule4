/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 13:47:07 by jleray            #+#    #+#             */
/*   Updated: 2026/08/15 13:47:07 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AANIMAL_HPP 
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string _type;
	 public:
		AAnimal();
		AAnimal(const AAnimal& other);
		AAnimal& 	operator=(const AAnimal& other);
		virtual void		makeSound() const = 0;
		std::string			getType() const;
		virtual ~AAnimal();	
};

#endif
