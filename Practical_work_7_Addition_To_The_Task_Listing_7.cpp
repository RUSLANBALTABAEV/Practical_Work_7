// Practical_work_7_Addition_To_The_Task_Listing_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 4;
	const int M = 4;
	int Y[N][M];
	int S = 0;
	int S1 = 0;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			Y[i][j] = (i + 1) * (j + 1);
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cout << setw(3) << Y[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			if (j == M - 1 - i)
			{
				S += Y[i][j];
			}

			cout << "Сумма отрицательной диагонали массива: " << S << endl;
		}
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++i)
		{
			S1 += Y[i][j];
		}

		cout << "Сумма всех элементов массива: " << S1 << endl;
	}

	return 0;
}