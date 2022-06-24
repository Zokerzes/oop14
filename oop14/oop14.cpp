

#include <iostream>
#include "Student.h"
#include <string>
#include "Aspirant.h"
int main()
{
	Aspirant a("Vasy", 22, true, "choto_tam", true);
	Student b("Ivan", 19, false);
	a.show();
	b.showinfo();
}

