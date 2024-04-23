#include <iostream>
#include "scm.hpp"

int main() {
	unsigned int a, b;
	while (std::cin >> a >> b) {
		std::cout << "scm(" << a << ", " << b << ") = " << scm(a, b) << std::endl;
	}
}