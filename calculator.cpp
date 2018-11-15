#include <iostream>
#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
	return a * b + 0.5;
}

int Calculator::Pow (double a, double b)
{
	return std::pow(a, b) + 0.5;
}

int main()
{
	Calculator calc;
	double x = 4.0, y = 2.0;
	std::cout << "Add: " << calc.Add(x, y) << " "
	        << "Sub: " << calc.Add(x, y) << " "
		<< "Mul: " << calc.Add(x, y) << " "
		<< "Pow: " << calc.Add(x, y) << std:endl;
	return 0;
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
