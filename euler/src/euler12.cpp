#include "euler.h"

using namespace std;

int euler12()
{
	int divisor = 0;
	int index = 1;
	int triangle = 1;

	while (divisor<500)
	{
		triangle = generate_triangle(index);
		divisor = number_of_factors(triangle);
		index = index + 1;
	}

return triangle;
}
