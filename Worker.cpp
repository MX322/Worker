#include "Worker.h"

Worker::Worker(std::string _FIO, std::string _post, int _year, int _salary)
{
	this->FIO = _FIO;
	this->post = _post;
	this->year = _year;
	this->salary = _salary;
}


void Worker::ShowExperience(int experience) const
{
	if (2023 - this->year >= experience)
	{
		std::cout << this->FIO << std::endl;
	}
}


void Worker::ShowSalary(int salary) const
{
	if (this->salary >= salary)
	{
		std::cout << this->FIO << std::endl;
	}
}


void Worker::ShowPost(std::string post) const
{
	if (this->post == post)
	{
		std::cout << this->FIO << std::endl;
	}
}


int main()
{
	Worker Thomas("Bruno Thomas", "manager", 2018, 2300);
	Worker Robbins("Miles Robbins", "engineer", 2022, 900);
	Worker Banks("Chad Banks", "engineer", 2020, 1250);

	const int SIZE = 3;

	Worker workers[SIZE]{ Thomas, Robbins, Banks };

	std::cout << "Show Experience: " << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		workers[i].ShowExperience(2);
	}

	std::cout << "\nShow Salary: " << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		workers[i].ShowSalary(1000);
	}

	std::cout << "\nShow Post: " << std::endl;
	for (int i = 0; i < SIZE; i++)
	{
		workers[i].ShowPost("engineer");
	}
}