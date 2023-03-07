#pragma once
#include <iostream>

class Worker
{
private:
	std::string FIO;
	std::string post;
	int year;
	int salary;

public:
	explicit Worker(std::string _FIO, std::string _post, int _year, int _salary);

	void ShowExperience(int experience) const;
	void ShowSalary(int salary) const;
	void ShowPost(std::string post) const;

};

