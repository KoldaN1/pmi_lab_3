#include <iostream>

int main() 
{
	unsigned int x; // Число
	int i; // Бит

	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter i: ";
	std::cin >> i;

	bool result = (x >> i) & 1;

	std::cout << "Result in  byte " << i << ": " << result << std::endl; 

	return 0;
}