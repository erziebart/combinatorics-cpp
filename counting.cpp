#include "counting.h"
#include "factorial.h"

namespace combinatorics {
	unsigned long long perm(unsigned long long n, unsigned long long r) {
		if (r > n) {
			return 0;
		}
		else {
			return factorial(n)/factorial(n-r);
		}
	}

	unsigned long long comb(unsigned long long n, unsigned long long r) {
		return (perm(n, r) / factorial(r));
	}
}