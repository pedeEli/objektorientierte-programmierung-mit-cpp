#include "scm.hpp"

unsigned int scm(unsigned int a, unsigned int b) {
	unsigned int a0 = a, b0 = b;
	while (a != b) {
		if (a > b) {
			b += b0;
		} else {
			a += a0;
		}
	}
	return a;
}