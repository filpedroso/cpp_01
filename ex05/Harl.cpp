/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:27:54 by fpedroso          #+#    #+#             */
/*   Updated: 2026/05/10 21:27:54 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

void    Harl::complain( std::string level )
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void    (Harl::*memberFuncs[])() =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*memberFuncs[i])();
            return ;
        }
    }
}

void    Harl::debug( void )
{
    std::cout << "Debug level called." << std::endl;
}

void    Harl::info( void )
{
    std::cout << "Info level called." << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "Warning level called!" << std::endl;
}

void    Harl::error( void )
{
    std::cout << "ERROR level called!!!" << std::endl;
}
