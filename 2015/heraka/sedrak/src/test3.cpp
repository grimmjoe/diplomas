#include "input.h"
#include <cmath>

double f(double x)
{
	return x*x-2*x;
}

double f_shtr(double x)
{
	return 2*x-2;
}

double f_shtr2(double x)
{
	return 2;
}

double f_shtr3(double x)
{
	return 0;
}

double range_begin = -4; 
double range_end = 4;
double x0 = 1;
double epsilon = 0.0001;
