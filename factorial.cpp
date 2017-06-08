#include "factorial.h"
#include <stdexcept>

namespace combinatorics {
	unsigned long long factorial(unsigned long long n) {
		// detect overflow
		if (n > 20) {
			throw std::overflow_error("factorial answer too high");
		}

		unsigned long long prod = 1;
		for (unsigned int i = 1; i <= n; i++) {
			prod *= i;
		}
		return prod;
	}
}