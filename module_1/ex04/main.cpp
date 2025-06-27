/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulfernan <ulfernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:18:09 by ulfernan          #+#    #+#             */
/*   Updated: 2025/06/26 12:43:32 by ulfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int argc, char** argv)
{
	std::ifstream	infile;
	std::ofstream	copy;
	std::string		s1;
	std::string		s2;
	std::string		in_filename;
	size_t			pos;
	
	if (argc != 4) 
	{
		std::cout << "Format: ./program infile str1 str2\n"; 
		return (1);
	}
	s1 = argv[2];
	s2 = argv[3];
	infile.open(argv[1]);
	if (!infile.is_open())
	{
		std::cout << "Error: couldn't open file\n";
		return (1);
	}
	in_filename = argv[1];
	copy.open(in_filename + ".replace");
	if (!copy.is_open())
	{
		std::cout << "Error: couldn't create new file\n"; 
		return (1);
	}

	std::string 	content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());

	pos = content.find(s1);
	while (pos != std::string::npos)
	{
		content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
		pos = content.find(s1, pos + s2.length());
	}
	copy << content;
	return (0);
}
