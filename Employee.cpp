#include "Employee.h"
#include <fstream>
#include <vector>


bool Employee::LoginCheck(std::string S, int N)
{
	std::vector<std::string> information;

	int idline;
	std::string nameline;
	std::string MyTextReader;
	std::string filename = S;

	filename += std::to_string(N); //Combines String and ID to open txt file

	std::ifstream MyFileReader(filename + ".txt");

	while (getline(MyFileReader, MyTextReader)) {
		 

		information.push_back(MyTextReader); //Adds Name and ID to vector
	}

	MyFileReader.close();

	if (information.empty()) //Checks to see if the vector is Empty
	{
		std::cout << "File could not be found" << std::endl;
		return false;
	}
	nameline = information[0]; 

	
	idline = std::stoi(information[1]);

	if (nameline == S && idline == N) //Checks to see if the given name and PW matches the file 
	{
		return true;
	}

	return false;

}