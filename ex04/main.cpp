#include <iostream>
#include <fstream>
#include <cstring>

std::size_t	getContentSize(std::ifstream &file)
{
	file.seekg(0, file.end);
	std::size_t	length = file.tellg();
	file.seekg(0, file.beg);
	return length;
}

//Open the input file.
//Read one line at a time.
//Search for the first occurrence of the target string.
//When found:
//	Copy the part before the match.
//	Append the replacement text.
//	Continue searching after the match.
//Write the processed line to an output file.

std::string	replaceText(std::ifstream &file, std::string target,
		std::string replace)
{
	std::string	line;
	std::string	newline;
	std::size_t	start_pos = 0;
	std::size_t	end;

	while (std::getline(file, line))
	{
		while ((end = line.find(target)) != std::string::npos)
		{
			newline = line.substr(start_pos, end);
			newline += replace;
			newline += line.substr(end);
			start_pos = end;
		}
	}
	return newline;
}

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Invalid number of arguments\n";
		std::cerr << "Usage: ./sed <filename> <target> <replacement>" << std::endl;
		return 0;
	}
	const char			*filename = argv[1];
	std::string const	txtTarget = argv[2];
	std::string const	txtReplacement = argv[3];

	std::ifstream		file(filename);
	if (!file.is_open())
	{
		std::cerr << "File doesn't exist." << std::endl;
		file.close();
		return (0);
	}
	std::string result = replaceText(file, txtTarget, txtReplacement);
	file.close();
	return (0);
}
