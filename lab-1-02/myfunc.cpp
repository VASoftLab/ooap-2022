#include "myfunc.h"
#include "math.h"

/// <summary>
/// ������� ���������� ���������� �����
/// </summary>
/// <param name="N">�������� �������</param>
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
/// ������� ���������� Exp(X)
/// </summary>
/// <param name="X">�������� �������</param>
/// <param name="N">���������� ��������</param>
/// <returns></returns>
double getExpX(double X, int N)
{
	double sum = 0.0;

	for (int n = 0; n < N; n++)
		sum += pow(X, n) / fact(n);

    return sum;
}