/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 13:32:02 by fpedroso          #+#    #+#             */
/*   Updated: 2026/05/07 13:32:02 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string name ) :
    _name(name),
    _weapon(NULL)
    {}

void	HumanB::attack()
{
    if (!this->_weapon)
        std::cout << _name << " attacks with their hands" << std::endl;
    else
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& w )
{
    this->_weapon = &w;
}
