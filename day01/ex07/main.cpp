/*==============================================================================
 * Project: Sed is for Losers
 *
 * Program: Replace two strings in a file
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#include <iostream>
#include <string>
#include <fstream>

void find_and_replace(std::string& source, std::string const& find, std::string const& replace)
{
    for(std::string::size_type i = 0; (i = source.find(find, i)) != std::string::npos;)
    {
        source.replace(i, find.length(), replace);
        i += replace.length();
    }
}

int main(int argc, char  *argv[])
{
	std::ifstream ifs;
	std::ofstream ofs;
	std::string line;

	if (argc == 4)
	{
		std::string inFile = argv[1];
		std::string searchWord = argv[2];
		std::string replaceWord = argv[3];

		ifs.open(inFile);
		ofs.open(inFile + ".replace");
		while (std::getline(ifs, line))
		{
			find_and_replace(line, searchWord, replaceWord);
    		ofs << line << std::endl;
		}
		ifs.close();
		ofs.close();
	}
	else
		std::cout << "USAGE: " << argv[0]
			<< " [file] [searchword] [replaceword]" << std::endl;
}