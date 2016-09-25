#include "functions.h"

//All functions must be tested in "main"
void main()
{
	const int N = 50000;
	long i;
	long Array[N];
	srand(time(0));
	long Size[3] = { 10000, 20000, 50000 };

	cout << "Choose size: " << endl;
	cout << "1: 10000" << endl;
	cout << "2: 20000" << endl;
	cout << "3: 50000" << endl;

	int size;
	cin >> size;

	int choise;

	cout << "Which sort method do you want?" << endl;
	cout << "1: BSort" << endl;
	cout << "2: BSort2" << endl;
	cout << "3: InsertionSort" << endl;
	cout << "4: QuickSort" << endl;
	cout << "0: Exit" << endl;

	cin >> choise;

	switch (size)
	{
		case 1:
		{
			for (i = 0; i < N; ++i)
			{
				Array[i] = rand() % Size[0];
			}	
		} break;

		case 2: 
		{
			for (i = 0; i < N; ++i)
			{
				Array[i] = rand() % Size[1];
			}
		} break;

		case 3: 
		{
			for (i = 0; i < N; ++i)
			{
				Array[i] = rand() % Size[2];
			}
		} break;

		default:
		{
			cout << "Invalid choise!" << endl;
			return;
		} break;
	}
	

	float start_time = clock();

	switch (choise)
	{
		case 1: BSort(Array, N); break;

		case 2: BSort2(Array, N); break;

		case 3: InsertionSort(Array, N); break;

		case 4: QSort(Array, 0, N - 1); break;

		case 0: return; break;
	}
	
	float end_time = clock();
	float search_time = end_time - start_time;

	cout << "Chas sortuvannya: " << search_time / CLOCKS_PER_SEC << "\n";
	
	system("pause>>void");
}