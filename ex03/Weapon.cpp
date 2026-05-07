/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 12:26:26 by fpedroso          #+#    #+#             */
/*   Updated: 2026/05/07 12:26:26 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {}

void    Weapon::setType( std::string type )
{
    this->_type = type;
}

const std::string&	Weapon::getType()
{
    return (this->_type);
}
