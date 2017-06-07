#include "counting.h"
#include "factorial.h"

namespace combinatorics {
	unsigned int perm(unsigned int n, unsigned int r) {
		if (r > n) {
			return 0;
		}
		else {
			unsigned int prod = 1;
			for (unsigned int i = n; i > n-r; i--) {
				prod *= i;
			}
			return prod;
		}
	}

	unsigned int comb(unsigned int n, unsigned int r) {
		return (perm(n, r) / factorial(r));
	}
}