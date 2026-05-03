/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:56:05 by fpedroso          #+#    #+#             */
/*   Updated: 2026/05/03 19:52:02 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombieHeap;

	randomChump("Stack Paolo");
	zombieHeap = newZombie("Heap Jeferson");
	zombieHeap->announce();

	delete zombieHeap;
	return (0);
}
