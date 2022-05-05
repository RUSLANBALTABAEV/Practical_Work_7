// Practical_work_7_Task_2_Listing_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <ctime>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	srand((int)time(0));
	int m = 0;
	const int n = 5;
	double A[n][n], X[(n * n) / 2], s = 0.0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 19 - 9;
			
			if (i > n - 1 - j)
			{
				X[m++] = A[i][j];
			}

			if (A[i][j] > 0)
			{
				s += A[i][j];
			}

			cout << setw(3) << A[i][j] << " ";
		}
		
		cout << endl;
	}

	cout << "Сумма положительный: " << s << endl;

	for (int i = 0; i < (n * n - n) / 2; i++)
	{
		cout << X[i] << " ";
		cout << endl;
	}
	_getch();
	return 0;
}