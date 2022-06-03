// C++ program to demonstrate array of strings using
#include <iostream>

int main()
{
	// Initialize array of pointer
	const char *colour[4] = { "Blue", "Red",
							"Orange", "Yellow" };

	// Printing Strings stored in 2D array
	for (int i = 0; i < 4; i++)
		std::cout << colour[i] << "\n";

	return 0;
}
