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
    // Array test
    std::cout << "Array test begins...\n";
    const int   size = 100;
    Animal*     AnimalArray[size];
    int         i;

    i = 0;
    while (i < size / 2)
    {
        AnimalArray[i] = new Dog;
        i++;
    }
    while (i < size)
    {
        AnimalArray[i] = new Cat;
        i++;
    }
    i = 0;
    while (i < size)
    {
        delete AnimalArray[i];
        i++;
    }
    std::cout << "Array test ended. Starting delete test...\n";

    // Delete test
    const Animal* doggy = new Dog();
    const Animal* kitty = new Cat();

    delete doggy;
    delete kitty;
	std::cout << "Delete test ended. Starting copy test...\n";

    // Copy test
    Dog agallas;
    Dog agallas_copy;

    agallas.setIdeas("agallas is scared!", 0);
    std::cout << "agallas has an idea: " << agallas.getIdeas(0) << std::endl;
	agallas_copy.setIdeas("agallas copy is not scared!", 0);
	std::cout << "agallas_copy has an idea: " << agallas_copy.getIdeas(0) << std::endl;
    agallas_copy = agallas;
	std::cout << "Now, agallas idea is the same as before: " << agallas.getIdeas(0) << std::endl;
	std::cout << "And agallas_copy idea is the same: " << agallas_copy.getIdeas(0) << std::endl;
	agallas_copy.setIdeas("I am very brave!", 0);
	std::cout << "Still, agallas idea is the same: " << agallas.getIdeas(0) << std::endl;
	std::cout << "But now, agallas_copy idea has changed: " << agallas_copy.getIdeas(0) << std::endl;
}
