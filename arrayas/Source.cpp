#include"Function.h"
#include"Functions.cpp"

void main()
{
	setlocale(0, "");
	srand(time(NULL));
	const int n = 5;

	int i_arr[n];
	FillRand(i_arr, n);
	Print(i_arr, n);
	cout << "Сортировка..." << endl;
	Sort(i_arr, n);
	Print(i_arr, n);
	cout << "Сумма: " << Sum(i_arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(i_arr, n) << endl;
	cout << "Минимальное значение: " << minValue(i_arr, n) << endl;
	cout << "Максимальное значение: " << maxValue(i_arr, n) << endl << endl;

	double d_brr[n];
	FillRand(d_brr, n);
	Print(d_brr, n);
	cout << "Сортировка..." << endl;
	Sort(d_brr, n);
	Print(d_brr, n);
	cout << "Сумма: " << Sum(d_brr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(d_brr, n) << endl;
	cout << "Минимальное значение: " << minValue(d_brr, n) << endl;
	cout << "Максимальное значение: " << maxValue(d_brr, n) << endl << endl;

	/*int crr[n];
	FillRand(crr, n);
	Print(crr, n);
	Sort(crr, n);
	Print(crr, n);
	cout << endl;*/
	int i_arr2[ROWS][COLS];
	FillRand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);
	Sort(i_arr2, ROWS, COLS);
	cout << "Сортировка..." << endl;
	Print(i_arr2, ROWS, COLS);
	cout << "Сумма: " << Sum(i_arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое: " << Avg(i_arr2, ROWS, COLS);
}