/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WordReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:38:59 by fpedroso          #+#    #+#             */
/*   Updated: 2026/05/08 13:38:59 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILECLASS_HPP
# define FILECLASS_HPP

#include <fstream>

class WordReplacer
{
    std::string _filename;
    std::string _content;

public:

    WordReplacer( std::string filename );

    void    replace( const std::string& a, const std::string& b );
    void    printItself();
    void    outputFile();
};

#endif
