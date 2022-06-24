#pragma once
#include<iostream>
#include<string>
using namespace std;
class Student
{
protected:

	string name;
	int age;
	bool examPassed;

public:

	Student();
	Student(string, int, bool);
	~Student() {};
	void showinfo();
	
};

