#ifndef _METHODS_H__
#define _METHODS_H__

#include "input.h"

/*!
 * Apply Newton's method to find the solution
 * @param f The function
 * @param begin the range begin
 * @param end the range end
 * @param x0 The start of the iteration
 * @param epsilon The accuracy
 */
double newton(function f, double begin, double end, double x0, double epsilon);

/*!
 * Apply Newton's simplified method to find the solution
 * @param f The function
 * @param begin the range begin
 * @param end the range end
 * @param x0 The start of the iteration
 * @param epsilon The accuracy
 */
double newton_simple(function f, double begin, double end, double x0, double epsilon);

/*!
 * Apply Newton's method v2
 * @param f The function
 * @param begin the range begin
 * @param end the range end
 * @param x0 The start of the iteration
 * @param epsilon The accuracy
 */
double newton_v2(function f, double begin, double end, double x0, double epsilon);

/*!
 * Apply Newton's method v3
 * @param f The function
 * @param begin the range begin
 * @param end the range end
 * @param x0 The start of the iteration
 * @param epsilon The accuracy
 */
double newton_v3(function f, double begin, double end, double x0, double epsilon);

/*!
 * Apply Newton's method v4
 * @param f The function
 * @param begin the range begin
 * @param end the range end
 * @param x0 The start of the iteration
 * @param epsilon The accuracy
 */
double newton_v4(function f, double begin, double end, double x0, double epsilon);

/*!
 * Apply Newton's method v5
 * @param f The function
 * @param begin the range begin
 * @param end the range end
 * @param x0 The start of the iteration
 * @param epsilon The accuracy
 */
double newton_v5(function f, double begin, double end, double x0, double epsilon);

/*!
 * Apply quasi Newton's method
 * @param f The function
 * @param begin the range begin
 * @param end the range end
 * @param x0 The start of the iteration
 * @param epsilon The accuracy
 */
double quasi_newton(function f, double begin, double end, double x0, double epsilon);

/*!
 * Apply quasi Newton's method v1
 * @param f The function
 * @param begin the range begin
 * @param end the range end
 * @param x0 The start of the iteration
 * @param epsilon The accuracy
 */
double quasi_newton_v1(function f, double begin, double end, double x0, double epsilon);

/*!
 * Apply quasi Newton's method v2
 * @param f The function
 * @param begin the range begin
 * @param end the range end
 * @param x0 The start of the iteration
 * @param epsilon The accuracy
 */
double quasi_newton_v2(function f, double begin, double end, double x0, double epsilon);

#endif // _METHODS_H__
