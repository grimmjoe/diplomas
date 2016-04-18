#include "input.h"

double f(double x)
{
	return x*x*x-2*x*x+1;
}

double f_shtr(double x)
{
	return 3*x*x - 4*x;
}

double f_shtr2(double x)
{
	return 6*x - 4;
}

double f_shtr3(double x)
{
	(void) x;
	return 6;
}

double range_begin = -4;
double range_end = 4;
double x0 = 4;
double epsilon = 0.0001;
