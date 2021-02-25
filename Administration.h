#pragma once
#include <string>
#include <iostream>

class Administration
{
private:

	std::string Name;

	int id;

public:

	bool LoginCheck2(std::string s, int i);

	std::string EmployeeCreation(std::string s, int i);
};