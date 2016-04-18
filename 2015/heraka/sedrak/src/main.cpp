#include "input.h"
#include "methods.h"
#include <iostream>

int main()
{
	double x = newton(f, range_begin, range_end, x0, epsilon);
	std::cout << "X = " << x << std::endl;

	x = newton_simple(f, range_begin, range_end, x0, epsilon);
	std::cout << "X = " << x << std::endl;

	x = newton_v2(f, range_begin, range_end, x0, epsilon);
	std::cout << "X = " << x << std::endl;

	x = newton_v3(f, range_begin, range_end, x0, epsilon);
	std::cout << "X = " << x << std::endl;

	x = newton_v4(f, range_begin, range_end, x0, epsilon);
	std::cout << "X = " << x << std::endl;

	x = newton_v5(f, range_begin, range_end, x0, epsilon);
	std::cout << "X = " << x << std::endl;

	x = quasi_newton(f, range_begin, range_end, x0, epsilon);
	std::cout << "X = " << x << std::endl;

	return 0;
}
