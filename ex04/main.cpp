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

int main(int argc, char **argv)
{
    FileClass   file;

    if (argc != 4)
        return (1);

    file = FileClass(argv[1]);
    file.replace(argv[2], argv[3]);

    
}
