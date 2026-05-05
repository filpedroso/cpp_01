/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:25:11 by fpedroso          #+#    #+#             */
/*   Updated: 2026/05/05 13:25:11 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
    std::string     strVar = "HI THIS IS BRAIN";
    std::string*    stringPTR = &strVar;
    std::string&    stringREF = strVar;

    std::cout << "Memory address of the string variable: " << &strVar << std::endl;
    std::cout << "Memory address held by stringPTR:      " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF:      " << &stringREF << std::endl;

    std::cout << "Value of the string variable:  " << strVar << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}
