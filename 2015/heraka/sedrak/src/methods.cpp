#include "input.h"
#include "methods.h"
#include <iostream>
#include <cmath>
#include <cstdlib>

double newton(function func, double begin, double end, double x0, double epsilon)
{
	std::cout << "Newton: [" << begin << ", " << end << "], x0 = " << x0 << ", epsilon = " << epsilon << std::endl;
	double xk = x0;
	double xk1 = xk;
	double delta = 0;
	int k = 0;
	printf("%2s%10s%10s\n", "k", "xk", "f(xk)");
	do
	{
		xk = xk1;
		double fxk = f(xk);
		printf("%-2d%10.6f%10.6f\n", k, xk, fxk);
		xk1 = xk - fxk/f_shtr(xk);
		delta = fabs(xk1-xk);
		++k;
	} while (delta > epsilon);

	printf("%-2d%10.6f%10.6f\n", k, xk1, f(xk1));

	return xk1;
}

double newton_simple(function f, double begin, double end, double x0, double epsilon)
{
	std::cout << "Newton simple: [" << begin << ", " << end << "], x0 = " << x0 << ", epsilon = " << epsilon << std::endl;
	double xk = x0;
	double xk1 = xk;
	double delta = 0;
	int k = 0;
	printf("%2s%10s%10s\n", "k", "xk", "f(xk)");
	do
	{
		xk = xk1;
		double fxk = f(xk);
		printf("%-2d%10.6f%10.6f\n", k, xk, fxk);
		xk1 = xk - fxk/f_shtr(x0);
		delta = fabs(xk1-xk);
		++k;
	} while (delta > epsilon);

	printf("%-2d%10.6f%10.6f\n", k, xk1, f(xk1));

	return xk1;
}

double newton_v2(function f, double begin, double end, double x0, double epsilon)
{
	std::cout << "Newton v2: [" << begin << ", " << end << "], x0 = " << x0 << ", epsilon = " << epsilon << std::endl;
	double xk = x0;
	double xk1 = xk;
	double delta = 0;
	int k = 0;
	printf("%2s%10s%10s\n", "k", "xk", "f(xk)");
	do
	{
		xk = xk1;
		double fxk = f(xk);
		printf("%-2d%10.6f%10.6f\n", k, xk, fxk);
		double f_shtrxk = f_shtr(xk);
		xk1 = xk - fxk*f_shtrxk/(f_shtrxk*f_shtrxk - 0.5*fxk*f_shtr2(xk));
		delta = fabs(xk1-xk);
		++k;
	} while (delta > epsilon);

	printf("%-2d%10.6f%10.6f\n", k, xk1, f(xk1));

	return xk1;
}

double newton_v3(function f, double begin, double end, double x0, double epsilon)
{
	std::cout << "Newton v3: [" << begin << ", " << end << "], x0 = " << x0 << ", epsilon = " << epsilon << std::endl;
	double xk = x0;
	double xk1 = xk;
	double delta = 0;
	int k = 0;
	printf("%2s%10s%10s\n", "k", "xk", "f(xk)");
	do
	{
		xk = xk1;
		double fxk = f(xk);
		printf("%-2d%10.6f%10.6f\n", k, xk, fxk);
		double f_shtrxk = f_shtr(xk);
		double f_shtr2xk = f_shtr2(xk);
		double f_shtr3xk = f_shtr3(xk);
		xk1 = xk - (fxk*f_shtrxk*f_shtrxk-0.5*fxk*fxk*f_shtr2xk)/(f_shtrxk*f_shtrxk*f_shtrxk-fxk*f_shtrxk*f_shtr2xk+fxk*fxk*f_shtr3xk/6);
		delta = fabs(xk1-xk);
		++k;
	} while (delta > epsilon);

	printf("%-2d%10.6f%10.6f\n", k, xk1, f(xk1));

	return xk1;
}

double newton_v4(function f, double begin, double end, double x0, double epsilon)
{
	std::cout << "Newton v4: [" << begin << ", " << end << "], x0 = " << x0 << ", epsilon = " << epsilon << std::endl;
	double xk = x0;
	double xk1 = xk;
	double delta = 0;
	int k = 0;
	printf("%2s%10s%10s\n", "k", "xk", "f(xk)");
	do
	{
		xk = xk1;
		double fxk = f(xk);
		printf("%-2d%10.6f%10.6f\n", k, xk, fxk);
		double f_shtrxk = f_shtr(xk);
		double f_shtr2xk = f_shtr2(xk);
		xk1 = xk - (fxk*f_shtrxk*f_shtrxk-0.5*fxk*fxk*f_shtr2xk)/(f_shtrxk*f_shtrxk*f_shtrxk);
		delta = fabs(xk1-xk);
		++k;
	} while (delta > epsilon);

	printf("%-2d%10.6f%10.6f\n", k, xk1, f(xk1));

	return xk1;
}

double newton_v5(function f, double begin, double end, double x0, double epsilon)
{
	std::cout << "Newton v5: [" << begin << ", " << end << "], x0 = " << x0 << ", epsilon = " << epsilon << std::endl;
	double xk = x0;
	double xk1 = xk;
	double delta = 0;
	int k = 0;
	printf("%2s%10s%10s\n", "k", "xk", "f(xk)");
	do
	{
		xk = xk1;
		double fxk = f(xk);
		printf("%-2d%10.6f%10.6f\n", k, xk, fxk);
		double f_shtrxk = f_shtr(xk);
		double f_shtr2xk = f_shtr2(xk);
		double f_shtr3xk = f_shtr3(xk);
		xk1 = xk - (fxk*f_shtrxk*f_shtrxk+0.5*fxk*fxk*f_shtr2xk)/(f_shtrxk*f_shtrxk*f_shtrxk)
					+ fxk*fxk*fxk*(f_shtrxk*f_shtr3xk-3*f_shtr2xk*f_shtr2xk)/(6*pow(f_shtrxk, 5));
		delta = fabs(xk1-xk);
		++k;
	} while (delta > epsilon);

	printf("%-2d%10.6f%10.6f\n", k, xk1, f(xk1));

	return xk1;
}


double quasi_newton(function f, double begin, double end, double x0, double epsilon)
{
	std::cout << "Quasi Newton: [" << begin << ", " << end << "], x0 = " << x0 << ", epsilon = " << epsilon << std::endl;

	double fa = f(begin);
	double f_shtr2a = f_shtr2(begin);

	double fb = f(end);
	double f_shtr2b = f_shtr2(end);

	if (fb*f_shtr2b>0)
		return quasi_newton_v1(f, begin, end, begin, epsilon);
	
	if (fa*f_shtr2a>0)
		return quasi_newton_v2(f, begin, end, end, epsilon);

}

double quasi_newton_v1(function f, double begin, double end, double x0, double epsilon)
{
	std::cout << "Quasi Newton v1: [" << begin << ", " << end << "], x0 = " << x0 << ", epsilon = " << epsilon << std::endl;
	double xk = x0;
	double xk1 = xk;
	double delta = 0;
	int k = 0;
	printf("%2s%10s%10s\n", "k", "xk", "f(xk)");
	double fb = f(end);
	do
	{
		xk = xk1;
		double fxk = f(xk);
		printf("%-2d%10.6f%10.6f\n", k, xk, fxk);
		xk1 = xk - (end-xk)*fxk/(fb-fxk);
		delta = fabs(xk1-xk);
		++k;
	} while (delta > epsilon);

	printf("%-2d%10.6f%10.6f\n", k, xk1, f(xk1));

	return xk1;
}

double quasi_newton_v2(function f, double begin, double end, double x0, double epsilon)
{
	std::cout << "Quasi Newton v2: [" << begin << ", " << end << "], x0 = " << x0 << ", epsilon = " << epsilon << std::endl;
	double xk = x0;
	double xk1 = xk;
	double delta = 0;
	int k = 0;
	printf("%2s%10s%10s\n", "k", "xk", "f(xk)");
	double fa = f(begin);
	do
	{
		xk = xk1;
		double fxk = f(xk);
		printf("%-2d%10.6f%10.6f\n", k, xk, fxk);
		xk1 = xk - (begin-xk)*fxk/(fa-fxk);
		delta = fabs(xk1-xk);
		++k;
	} while (delta > epsilon);

	printf("%-2d%10.6f%10.6f\n", k, xk1, f(xk1));

	return xk1;
}
