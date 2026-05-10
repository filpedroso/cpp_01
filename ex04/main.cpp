/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 14:39:50 by fpedroso          #+#    #+#             */
/*   Updated: 2026/05/07 14:39:50 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WordReplacer.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
        return (1);

    try
    {
        WordReplacer   file(argv[1]);
        std::cout << "Loaded File:" << std::endl;
        file.printItself();

        file.replace(argv[2], argv[3]);
        std::cout << "Replaced Loaded File:" << std::endl;
        file.printItself();

        file.outputFile();

        WordReplacer file2(std::string(argv[1]) + ".replace");
        std::cout << "Replaced Created File:" << std::endl;
        file2.printItself();
    }
    catch(const std::exception& e)
    {
        std::cerr << "ERROR: " << e.what() << '\n';
        return (1);
    }
    return (0);
}
