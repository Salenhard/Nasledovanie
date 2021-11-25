#include <iostream>
#include "Programmer.h"

int main()
{
	setlocale(0, "RU");
	Programmer s1;
	s1.set_secondname("Salen");
	std::cout << s1.get_string();
}
