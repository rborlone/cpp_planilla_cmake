#include <iostream>
#include <fmt/core.h>

int main()
{
	using fmt::format;

	#Plantilla Hello World
	std::cout<<format("Hello World {}!\n",2024);
	return 0;
}

