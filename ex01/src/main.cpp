/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 14:25:25 by jleray            #+#    #+#             */
/*   Updated: 2026/08/15 14:25:25 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	const Animal* animals[10];
	const Animal* cat = new Cat();
	int i = -1;

	// base test
	while (++i < 5)
		animals[i] = new Dog();
	while (i++ < 10)
		animals[i - 1] = new Cat();

	for (int j = 0; j < 10; j++)
	{
		std::cout << animals[j]->getType() << " : ";
		animals[j]->makeSound();
		std::cout << "Idea : "  << j;
		std::cout << " = " << animals[j]->getIdea(j) << std::endl;
	}

	// Copy requirement part test
	Animal* cat2 = new Animal(*cat);
	cat2->setIdea("mouuu", 1);
	std::cout << cat2->getIdea(1) << std::endl;
	std::cout << cat->getIdea(1) << std::endl;

	delete cat;
	delete cat2;
	for (int k = 0; k < 10; k++)
		delete animals[k];
	return (0);
}
