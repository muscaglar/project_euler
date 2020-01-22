#include "euler.h"

using namespace std;

int generate_triangle(int n)
{
	int output = 0;
	for(int i = 1; i<=n; i++)
		output = output + i;
return output;
}
