/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:32:53 by fpedroso          #+#    #+#             */
/*   Updated: 2026/05/04 12:32:53 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string	_name;

	public:
		~Zombie();

        void    setName( const std::string& name );
		void    announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif
