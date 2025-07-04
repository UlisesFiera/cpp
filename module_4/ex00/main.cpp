/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 13:50:35 by ulfernan          #+#    #+#             */
/*   Updated: 2025/07/03 13:50:35 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

int main() 
{
    // Correct polymorphism
    const Animal* meta = new Animal();
    const Animal* j = new Cat();

    std::cout << "This is a " << j->getType() << "." << std::endl;  // Cat
    j->makeSound();                          // Cat sound

    std::cout << "This is a " << meta->getType() << "." << std::endl; // Animal
    meta->makeSound();                          // Animal sound

    delete meta;
    delete j;

    std::cout << "----" << std::endl;

    // Wrong polymorphism (no virtual)
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "This is a " << wrongCat->getType() << " and it won't sound good:" << std::endl;   // WrongCat
    wrongCat->makeSound();                            // WrongAnimal sound (no polymorphism)

    std::cout << "This is " << wrongMeta->getType() << "." << std::endl;  // WrongAnimal
    wrongMeta->makeSound();                           // WrongAnimal sound

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
