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
	cout << "����������..." << endl;
	Sort(i_arr, n);
	Print(i_arr, n);
	cout << "�����: " << Sum(i_arr, n) << endl;
	cout << "������� ��������������: " << Avg(i_arr, n) << endl;
	cout << "����������� ��������: " << minValue(i_arr, n) << endl;
	cout << "������������ ��������: " << maxValue(i_arr, n) << endl << endl;

	double d_brr[n];
	FillRand(d_brr, n);
	Print(d_brr, n);
	cout << "����������..." << endl;
	Sort(d_brr, n);
	Print(d_brr, n);
	cout << "�����: " << Sum(d_brr, n) << endl;
	cout << "������� ��������������: " << Avg(d_brr, n) << endl;
	cout << "����������� ��������: " << minValue(d_brr, n) << endl;
	cout << "������������ ��������: " << maxValue(d_brr, n) << endl << endl;

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
	cout << "����������..." << endl;
	Print(i_arr2, ROWS, COLS);
	cout << "�����: " << Sum(i_arr2, ROWS, COLS) << endl;
	cout << "������� ��������������: " << Avg(i_arr2, ROWS, COLS);
}