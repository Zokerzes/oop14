#include "Student.h"

Student::Student()
{
	name = "none";
	age = 0;
	examPassed = false;
}

Student::Student(string name, int age, bool examPassed)
{
	this->age = age;
	this->examPassed = examPassed;
	this->name = name;

}

void Student::showinfo()
{
	cout << "----------------------------" << endl;
	cout << "name       -" << name << endl;
	cout << "age        -" << age << endl;
	cout << "examPassed -" << examPassed << endl;
	cout << "----------------------------" << endl;
}
