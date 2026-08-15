/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 15:45:34 by jleray            #+#    #+#             */
/*   Updated: 2026/08/15 15:45:34 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string _ideas[100];
		
	 public:
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		void		setIdea(std::string string, int index);
		std::string	getIdea(int index);
		~Brain();
		
};

#endif
