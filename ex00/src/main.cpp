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
	const Animal*		meta = new Animal();
	const Animal*		cat = new Cat();
	const Animal* 		dog = new Dog();
	const WrongAnimal* 	wrongMeta = new WrongAnimal();
	const WrongAnimal*	wrongCat = new WrongCat();
	const WrongCat*		realWrongCat = new WrongCat();

	std::cout << cat->getType() << " : ";
	cat->makeSound();
	std::cout << dog->getType() << " : ";
	dog->makeSound();
	std::cout << meta->getType() << " : ";
	meta->makeSound();
	std::cout << wrongMeta->getType() << " : ";
	wrongMeta->makeSound();
	std::cout << wrongCat->getType() << " : ";
	wrongCat->makeSound();
	std::cout << realWrongCat->getType() << " : ";
	realWrongCat->makeSound();
	delete meta;
	delete cat;
	delete dog;
	delete wrongMeta;
	delete wrongCat;
	delete realWrongCat;

	return (0);
}
