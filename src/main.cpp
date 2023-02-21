//Задание №2
#include <iostream>
#define N 3
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int arr[N][N], i, j, p[N] = { 1, 1, 1 };
	cout << "Исходная матрица: \n";
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			arr[i][j] = -50 + rand() % 100;
			cout << "\t" << arr[i][j];
		}
		cout << "\n\n";
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			p[i] = p[i] * arr[j][i];
		}

	}
	cout << "Вектор из произведений элементов столбцов: ";
	for (i = 0; i < N; i++)
	{
		cout << "\t" << p[i];
	}
	cout << endl;
	cout << "Среднее арифметическое данного вектора: ";
	float sum = 0;
	for (i = 0; i < N; i++)
	{
		sum = sum + p[i];
	}
	cout << sum / N;
	return 0;
}