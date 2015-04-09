#include <iostream>

namespace
{
	const int DATA_INIT = 10;
}

int main()
{
	std::cout << "Hellow World," << std::endl;
	std::cout << "？？？," << std::endl;
	
	int g = 0x100;
	
	int a = DATA_INIT;
	std::cout << a << std::endl;
	
	a += 100;
	std::cout << a << std::endl;
	
	return 0;
}
