#include <iostream>
#include <vector>
#include <string>
#include "euler.h"

using namespace std;

int euler9()
{
	long product = 0;
	int n = 1000;
	int c = 0;
	long max_product = 1;
	for (c = 997; c>0;c--)
	{
		product = c * c - n * n + 2 * n * c;
		if (product>max_product)
			max_product = product;
	}
	std::cout << max_product << std::endl;
	return 0;
}
