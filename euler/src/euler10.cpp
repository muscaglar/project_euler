#include "euler.h"

using namespace std;

int euler10() // sieve of eratostheres
{
	const long n = 2000000;
	long count = 0;
	    bool prime[n+1];
	    memset(prime, true, sizeof(prime));

	    for (long p=2; p*p<=n; p++)
	    {
	        // If prime[p] is not changed, then it is a prime
	        if (prime[p] == true)
	        {
	            // Update all multiples of p
	            for (long i=p*2; i<=n; i += p)
	                prime[i] = false;
	        }
	    }

	    // Print all prime numbers
	    for (long p=2; p<n; p++)
	       if (prime[p])
	       {
	          count = count + p;
	       }

	    std::cout << count << std::endl;
	    return 0;
}
