#ifndef _INPUT_H_
#define _INPUT_H_

typedef double (*function)(double);

/*!
 * The input function
 * @param x The argument
 * @return the execution of the function
*/
double f(double x);

/*!
 * The first-order derivative of the input function
 * @param x The argument
 * @return the execution of the function
*/
double f_shtr(double x);

/*!
 * The second-order derivative of the input function
 * @param x The argument
 * @return the execution of the function
*/
double f_shtr2(double x);

/*!
 * The third-order derivative of the input function
 * @param x The argument
 * @return the execution of the function
*/
double f_shtr3(double x);

/// The beginning of the range
extern double range_begin;

/// The end of the range
extern double range_end;

/// The starting point of the iteration
extern double x0;

/// The accuracy
extern double epsilon;


#endif // _INPUT_H_
