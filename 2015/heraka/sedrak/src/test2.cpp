#include "input.h"
#include <cmath>

double f(double x)
{
	return 2*x+log10(2*x+3)-1;
}

double f_shtr(double x)
{
	return 2+2/((2*x+3)*log(10));
}

double f_shtr2(double x)
{
	return -4/((2*x+3)*(2*x+3)*log(10));
}

double f_shtr3(double x)
{
	return (16*(2*x+3))/(pow((2*x+3), 4)*log(10));
}

double range_begin = 0.1;
double range_end = 0.9;
double x0 = 0.5;
double epsilon = 0.0001;
