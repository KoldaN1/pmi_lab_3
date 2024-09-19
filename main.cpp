#include <iostream>

int main() 
{
	unsigned int x; // Число
	int i; // Бит

	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter i: ";
	std::cin >> i;

	std::cout << "Result in byte " << i << " is: " << (x & (1 << i)) << std::endl;
}