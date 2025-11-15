/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:44:36 by sel-khao          #+#    #+#             */
/*   Updated: 2025/11/14 19:16:32 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>//ofstream, ifstream

void replace(const std::string& content, const std::string& str1, const std::string& str2, const std::string& newFile);

int	main(int argc, char **argv)
{
	if (argc != 4){
		std::cerr << "not the right arguments" << std::endl;
		return 1;
	}
	std::string line;
	std::string content;
	std::string file = argv[1];
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	std::ifstream inputFile(argv[1]);

	if (str1.empty() || !inputFile || str2.empty()){
		std::cerr << "error: there's something wrong with the file/string" << std::endl;
		return 1;
	}
	while (std::getline(inputFile, line)){
		content += line;
		if (!inputFile.eof())
			content += '\n';
	}
	std::string newFile = file + ".replace";
	replace(content, str1, str2, newFile);
	inputFile.close();
	return 0;
}

void replace(const std::string& content, const std::string& str1, const std::string& str2, const std::string& newFile){
	size_t pos = 0;
	std::string before = "";
	while (content.find(str1, pos) != std::string::npos)
	{
		size_t found = content.find(str1, pos);
		before += content.substr(pos, found - pos);
		before += str2;
		pos = found + str1.length();
	}
	before += content.substr(pos);
	std::ofstream outputFile(newFile.c_str());
	if (!outputFile){
		std::cerr << "error: cannot create file" << std::endl;
		return ;
	}
	outputFile << before;
	outputFile.close();
}

