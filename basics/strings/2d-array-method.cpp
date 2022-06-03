// C++ program to demonstrate array of strings using
// useful when all the string sizes are known and a desired memory footprint is needed
// Note that the first dimension value can be omitted and the compiler can compute the correct sizes 
// the second dimension value however cannot be omitted because the compiler needs to compute the appropriate memory layout
#include <iostream>

int main()
{
	// Initialize 2D array
	char colour[4][7] = { "Blue", "Red", "Orange",
						"Yellow" };

	// Printing Strings stored in 2D array
	for (int i = 0; i < 4; i++)
		std::cout << colour[i] << "\n";

	return 0;
}
