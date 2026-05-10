/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WordReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:39:21 by fpedroso          #+#    #+#             */
/*   Updated: 2026/05/08 13:39:21 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WordReplacer.hpp"
#include <stdexcept>
#include <string>
#include <sstream>
#include <iostream>


void    WordReplacer::replace( const std::string& a, const std::string& b )
{
    size_t  matchIdx = 0;

    if (a.empty())
        return ;
    
    while ( (matchIdx = this->_content.find(a, matchIdx)) != std::string::npos )
    {
        _content.erase(matchIdx, a.length());
        _content.insert(matchIdx, b);
        matchIdx += b.length();
    }
}

void    WordReplacer::outputFile()
{
    std::string     newFilename = this->_filename + ".replace";
    std::ofstream   ofs(newFilename.c_str());

    if (!ofs.is_open())
        throw std::runtime_error("Error creating output file");

    ofs << this->_content;
    ofs.close();
}

void    WordReplacer::printItself()
{
    std::cout << this->_content << std::endl;
}


WordReplacer::WordReplacer( std::string filename ) : _filename(filename)
{
    std::ifstream       ifs(filename.c_str());
    std::ostringstream  ss;

    if (!ifs.is_open())
        throw std::runtime_error("Error when opening file");

    ss << ifs.rdbuf();
    this->_content = ss.str();
}
