#include "euler.h"

using namespace std;

int number_of_factors(int n)
{
	int count = 0;
	for (int i=1; i<=sqrt(n); i++)
		{
			if (n%i == 0)
				{// If divisors are equal, print only one
	                if (n/i == i)
	                	count = count + 1;//printf("%d ", i);
	                else // Otherwise print both
	                	count = count + 2;//printf("%d %d ", i, n/i);
	            }
		}
return count;
}
