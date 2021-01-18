#include"Function.h"

template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Print(T arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				/*arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];*/
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>
void Sort(T arr[ROWS][COLS], const int m, const int n)
{
#ifdef DEBUG
	int iter = 0;
	int exch = 0;
#endif // DEBUG
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = i; k < m; k++)
			{
				/*int l;
				if (k == i)l = j + 1;
				else l = 0;*/
				for (int l = (k == i) ? j + 1 : 0; l < n; l++)
				{
#ifdef DEBUG
					iter++;
#endif // DEBUG
					if (arr[k][l] < arr[i][j])
					{
						/*arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];*/
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
#ifdef DEBUG
						exch++;
#endif // DEBUG
					}
				}
			}
		}
	}
#ifdef DEBUG
	cout << "Итераций: " << iter << endl << "Обмен элемнтов: " << exch << endl;
#endif // DEBUG
}

template<typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
template<typename T>
T Sum(T arr[ROWS][COLS], const int m, const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template<typename T>
double Avg(T arr[], const int n)
{
	T Avg = 0;
	Avg = (Sum(arr, n)) / n;
	return Avg;
}
template<typename T>
double Avg(T arr[ROWS][COLS], const int m, const int n)
{
	T Avg = 0;
	Avg = Sum(arr, m, n) / (m * n);
	return Avg;
}

template<typename T>
T minValue(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

template<typename T>
T maxValue(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}