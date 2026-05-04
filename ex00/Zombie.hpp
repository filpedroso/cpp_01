/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:56:01 by fpedroso          #+#    #+#             */
/*   Updated: 2026/05/03 19:49:42 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie(std::string _name);
		~Zombie();

		void announce( void );
};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif
