/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:56:01 by fpedroso          #+#    #+#             */
/*   Updated: 2026/05/03 19:00:05 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
