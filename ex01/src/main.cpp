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
#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "\n=============================================" << std::endl;
    std::cout << "1. ARRAY OF ANIMALS TEST (Virtual Destructors)" << std::endl;
    std::cout << "=============================================\n" << std::endl;

    const int arraySize = 4;
    Animal* animals[arraySize];

    for (int i = 0; i < arraySize / 2; i++) {
        std::cout << "Creating Dog " << i << ":" << std::endl;
        animals[i] = new Dog();
    }
    for (int i = arraySize / 2; i < arraySize; i++) {
        std::cout << "Creating Cat " << i << ":" << std::endl;
        animals[i] = new Cat();
    }

    std::cout << "\n--- Testing sounds ---" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        animals[i]->makeSound();
    }

    std::cout << "\n--- Deleting animals array ---" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }


    std::cout << "\n=============================================" << std::endl;
    std::cout << "2. DEEP COPY TEST (Copy Constructor with Scope)" << std::endl;
    std::cout << "=============================================\n" << std::endl;

    std::cout << "Creating 'basic' Dog:" << std::endl;
    Dog basic;
	{
        std::cout << "\nEntering new scope, creating 'tmp' as a copy of 'basic':" << std::endl;
        Dog tmp = basic; 
        std::cout << "Exiting scope... 'tmp' should be destroyed here!" << std::endl;
    }
    
    std::cout << "\n'basic' Dog is still alive outside the scope!" << std::endl;


    std::cout << "\n=============================================" << std::endl;
    std::cout << "3. DEEP COPY TEST (Assignment Operator)" << std::endl;
    std::cout << "=============================================\n" << std::endl;

    std::cout << "Creating two Cats:" << std::endl;
    Cat cat1;
    Cat cat2;

    std::cout << "\nAssigning cat1 to cat2:" << std::endl;
    cat2 = cat1;
    
    std::cout << "\nEnd of main, destroying stack variables..." << std::endl;

    return 0;
}
