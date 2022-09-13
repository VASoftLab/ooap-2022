#include "myfunc.h"
#include "math.h"

/// <summary>
/// Функция вычисления факториала числа
/// </summary>
/// <param name="N">Аргумент функции</param>
/// <returns></returns>
long double fact(int N)
{
    if (N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
		return N * fact(N - 1);
}

/// <summary>
/// Функция вычисления Exp(X)
/// </summary>
/// <param name="X">Аргумент функции</param>
/// <param name="N">Количество итераций</param>
/// <returns></returns>
double getExpX(double X, int N)
{
	double sum = 0.0;

	for (int n = 0; n < N; n++)
		sum += pow(X, n) / fact(n);

    return sum;
}