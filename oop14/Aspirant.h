#pragma once
#include "Student.h"
#include<iostream>
#include<string>
using namespace std;
class Aspirant :  protected Student
{
protected:
	string namePhD;
	bool  defensePhD;

public:

	Aspirant();
	Aspirant(string name, int age, bool examPassed, string namePhD, bool defensePhD) :
		Student(name, age, examPassed) 
	{
		this->name = name;
		this->age = age;
		this->examPassed= examPassed;
		this->namePhD= namePhD;
		this->defensePhD=defensePhD;
	};

	void show();
};

