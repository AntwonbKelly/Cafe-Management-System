#include "Administration.h"
#include <fstream>
#include <vector>
#include <fstream>

bool Administration::LoginCheck2(std::string s, int i)
{
	std::string filename = s;
	filename += std::to_string(i); //combines the passed in name and ID into one string;
	std::string nameline;
	int Idline;

	std::vector<std::string> filereadline; //Vector for holding the read in lines from txt file

	std::string myText;

	std::ifstream MyReadFile("Admin" + filename + ".txt"); //Combines "Admin", and ".txt" with filename

	while (getline(MyReadFile, myText))// Use a while loop  to read the file line by line

	{

		filereadline.push_back(myText); //Stores each line of the text document in vector;
	}

	if (filereadline.empty())
	{
		std::cout << "File could not be found " << std::endl;
		return false;
	}

	nameline = filereadline[0]; //Nameline is set to the name stored in the vector

	Idline = std::stoi(filereadline[1]); //Idline is set to the ID stored in the vector

	MyReadFile.close();


	if (nameline == s && Idline == i)
	{
		return true;
	}

	
	return false;
}

std::string Administration::EmployeeCreation(std::string s, int i)
{
	std::ofstream myfile; 

	std::string filename = s;

	filename += std::to_string(i); // Combines passed in name with ID

	myfile.open( filename + ".txt");

	myfile << s << std::endl;

	myfile << i;

	myfile.close();

	return filename;
}

