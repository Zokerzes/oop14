#include "Aspirant.h"

Aspirant::Aspirant()
{
	name = "none";
	age = 0;
	examPassed = true;
	namePhD = "none";
	defensePhD = false;
}

void Aspirant::show()
{
	cout << "----------------------------" << endl;
	cout << "name       -" << name << endl;
	cout << "age        -" << age << endl;
	cout << "examPassed -" << examPassed << endl;
	cout << "namePhD    -" << namePhD << endl;
	cout << "defensePhD -" << defensePhD << endl;
	cout << "----------------------------" << endl;

}

