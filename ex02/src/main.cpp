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

#include "../include/AAnimal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "\n=============================================" << std::endl;
    std::cout << "1. ABSTRACT CLASS TEST (AAnimal)" << std::endl;
    std::cout << "=============================================\n" << std::endl;

    // AAnimal myAnimal; 
    // AAnimal* myAnimalPtr = new AAnimal();

    std::cout << "\n=============================================" << std::endl;
    std::cout << "2. POLYMORPHISM & ARRAY DESTRUCTION TEST" << std::endl;
    std::cout << "=============================================\n" << std::endl;

    const int arraySize = 4;
    AAnimal* animals[arraySize];

    for (int i = 0; i < arraySize / 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = arraySize / 2; i < arraySize; i++) {
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
    std::cout << "3. DEEP COPY VERIFICATION (from ex01)" << std::endl;
    std::cout << "=============================================\n" << std::endl;

    std::cout << "Creating 'basic' Dog:" << std::endl;
    Dog basic;
    {
        std::cout << "\nEntering new scope, creating 'tmp' as a copy of 'basic':" << std::endl;
        Dog tmp = basic; 
        std::cout << "Exiting scope... 'tmp' should be destroyed here!" << std::endl;
    }
    
    std::cout << "\nEnd of main, destroying basic..." << std::endl;

    return 0;
}
