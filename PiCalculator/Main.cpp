#include <iostream>
#include <iomanip>

int main()
{
	int iterations = 1000000;
	double pi = 3.0;
	bool positive = true;
	double num = 2.0;

	for (size_t i = 0; i < iterations; i++)
	{
		double term = 4.0 / (num * (num + 1.0) * (num + 2.0));
		num += 2.0;
		if (positive)
		{
			pi += term;
			positive = false;
		}
		else
		{
			pi -= term;
			positive = true;
		}
	}
	std::cout << std::setprecision(15);
	std::cout << pi;
}