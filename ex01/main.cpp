/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:33:02 by fpedroso          #+#    #+#             */
/*   Updated: 2026/05/04 12:33:02 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
    int amount = 6;
	Zombie* horde = zombieHorde(amount, "jack");

    for (int i = 0; i < amount; i++) {
        std::cout << "Zombie " << i << std::endl;
        horde[i].announce();
        std::cout << std::endl;
    }

    delete [] horde;

	return (0);
}
