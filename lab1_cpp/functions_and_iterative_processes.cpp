#include <cmath>
#include <iostream>
#include <iomanip>


double sum1(const double& x, const short& n);
double sum2(const double& x, const double& eps);
double sum_iter_eq(double x, int k);
double y(const double& x);
double x_step(const double& x_bot, const double& x_top, const short& step_num);


double sum1(const double& x, const short& n)
{
	double z = 0.0;
	for (short k = 0; k <= n; k++)
	{
		z += sum_iter_eq(x, k);
	}
	return z;
}

double sum2(const double& x, const double& eps)
{
	double z = 0.0, ak = 1.0;
	short k = 0;
	while (fabs(ak) > eps)
	{
		ak = sum_iter_eq(x, k);
		z += ak;
		k++;
	}
	return z;
}

double sum_iter_eq(const double x, const int k)
{
	return pow(log(3) * x, k) / tgamma(k + 1);
}

double y(const double& x)
{
	return pow(3, x);
}

double x_step(const double& x_bot, const double& x_top, const short& step_num)
{
	return (x_top - x_bot) / (step_num - 1);
}

int main()
{
	constexpr double x_bot{0.0}, x_top{1.0};
	short n{0};
	constexpr uint8_t k{10};
	double delta{0.0001};

	std::cout << "Lab1: C++. Functions and iteration processes.\n";
	std::cout << "Enter the number of steps: ";
	std::cin >> n;
	std::cout << "Enter the delta (epsilon): ";
	std::cin >> delta;

	std::cout << std::setw(15) << "x"
		<< std::setw(15) << "Sn"
		<< std::setw(15) << "Se"
		<< std::setw(15) << "y_exact"
		<< '\n';
	for (short j = 0; j <= k; j++)
	{
		double x = x_bot + j * x_step(x_bot, x_top, k);
		std::cout << std::fixed << std::setprecision(6)
			<< std::setw(15) << x
			<< std::setw(15) << sum1(x, n)
			<< std::setw(15) << sum2(x, delta)
			<< std::setw(15) << y(x)
			<< '\n';
	}
	return 0;
}
