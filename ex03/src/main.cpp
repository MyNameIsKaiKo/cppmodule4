/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:47:28 by jleray            #+#    #+#             */
/*   Updated: 2026/08/16 18:47:28 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/Character.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"


int	main()
{
	
	std::cout << "▄▖▖▖▄  ▖▄▖▄▖▄▖  ▄▖▄▖▄▖▄▖" << std::endl;
	std::cout << "▚ ▌▌▙▘ ▌▙▖▌ ▐   ▐ ▙▖▚ ▐ " << std::endl;
	std::cout << "▄▌▙▌▙▘▙▌▙▖▙▖▐   ▐ ▙▖▄▌▐" << std::endl;
	std::cout << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* you = new Character("you");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	you->equip(tmp);
	tmp = src->createMateria("cure");
	you->equip(tmp);
	
	ICharacter* bob = new Character("bob");

	you->use(0, *bob);
	you->use(1, *bob);

	// Deep Copy
	Character* original = new Character("Original");
    original->equip(src->createMateria("ice"));
    original->equip(src->createMateria("cure"));
    
    Character* copy = new Character(*original);
    
    original->equip(src->createMateria("ice"));
    
    std::cout << "--- Original using items ---" << std::endl;
    original->use(0, *bob);
    original->use(1, *bob);
    original->use(2, *bob); // Should work
    
    std::cout << "--- Copy using items ---" << std::endl;
    copy->use(0, *bob);
    copy->use(1, *bob);
    copy->use(2, *bob); // Should do nothing (doesn't have the 3rd item)

	std::cout << "▄▖        ▗         ▄▖    ▗   " << std::endl;
	std::cout << "▐ ▛▌▌▌█▌▛▌▜▘▛▌▛▘▌▌  ▐ █▌▛▘▜▘▛▘" << std::endl;
	std::cout << "▟▖▌▌▚▘▙▖▌▌▐▖▙▌▌ ▙▌  ▐ ▙▖▄▌▐▖▄▌" << std::endl;
	std::cout << "                ▄▌            " << std::endl;
	std::cout << std::endl;

	ICharacter* cloud = new Character("Cloud");
    AMateria* m1 = src->createMateria("ice");
    AMateria* m2 = src->createMateria("cure");
    AMateria* m3 = src->createMateria("ice");
    AMateria* m4 = src->createMateria("cure");
    AMateria* m5 = src->createMateria("ice"); // To test full inventory

    cloud->equip(m1);
    cloud->equip(m2);
    cloud->equip(m3);
    cloud->equip(m4);
    
    std::cout << "Equipping 5th item (should not equip):" << std::endl;
    cloud->equip(m5); 
    
    // Unequip test
    std::cout << "Unequipping slot 1..." << std::endl;
    cloud->unequip(1);
    
    std::cout << "Using unequipped slot (should do nothing):" << std::endl;
    cloud->use(1, *bob);
    
    std::cout << "Equipping item 5 into freed slot 1:" << std::endl;
    cloud->equip(m5);
    cloud->use(1, *bob);

	std::cout << "▖  ▖  ▗     ▘  ▄▖            ▄▖    ▗   " << std::endl;
	std::cout << "▛▖▞▌▀▌▜▘█▌▛▘▌▀▌▚ ▛▌▌▌▛▘▛▘█▌  ▐ █▌▛▘▜▘▛▘" << std::endl;
	std::cout << "▌▝ ▌█▌▐▖▙▖▌ ▌█▌▄▌▙▌▙▌▌ ▙▖▙▖  ▐ ▙▖▄▌▐▖▄▌" << std::endl;
	std::cout << std::endl;
	
	IMateriaSource* fullSrc = new MateriaSource();
    fullSrc->learnMateria(new Ice());
    fullSrc->learnMateria(new Cure());
    fullSrc->learnMateria(new Ice());
    fullSrc->learnMateria(new Cure());

    std::cout << "Learning 5th Materia (should not learn/crash):" << std::endl;
    AMateria* extraMateria = new Ice();
    fullSrc->learnMateria(extraMateria);
    delete extraMateria; // Clean up since the source rejected it

    std::cout << "Creating unknown Materia (should return NULL):" << std::endl;
    AMateria* unknown = fullSrc->createMateria("fire");
    if (unknown == NULL)
		std::cout << "Successfully returned NULL for unknown Materia!" << std::endl;

	// Clean up
	delete bob;
	delete you;
	delete src;
	delete original;
	delete copy;
	delete cloud;
	delete fullSrc;
	delete m2;
	return (0);
}

