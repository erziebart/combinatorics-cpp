#include "factorial.h"

namespace combinatorics {
	unsigned int factorial(unsigned int n) {
		unsigned int prod = 1;
		for (unsigned int i = 1; i <= n; i++) {
			prod *= i;
		}
		return prod;
	}
}