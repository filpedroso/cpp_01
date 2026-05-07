/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 13:02:21 by fpedroso          #+#    #+#             */
/*   Updated: 2026/05/07 13:02:21 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA( std::string name, Weapon& w ) :
    _name(name),
    _weapon(w)
    {}

void	HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
