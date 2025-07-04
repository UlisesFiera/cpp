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

    // Copy test
    Dog agallas;
    Dog agallas_copy;

    agallas.setIdeas("I'm scared!");
    std::cout << "Agallas has an idea: " << 
    agallas_copy = agallas;


    delete doggy2;
}
