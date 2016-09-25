#include "functions.h"

//All functions must be tested in "main"
void main()
{
	const int N = 50000;

	long i;

	int size;

	int choise;

	char repeat;

	long Array[N];

	srand(time(0));

	long Size[3] = { 10000, 20000, 50000 };

	float search_timeBSort(0),
		search_timeB2Sort(0),
		search_timeInsSort(0),
		search_timeQuickSort(0);


	

	line('-', 79);

	cout << "Choose size: " << endl;
	cout << "1: 10000" << endl;
	cout << "2: 20000" << endl;
	cout << "3: 50000" << endl;

	
	cout << "Your choise: ";
	cin >> size;

	line('-', 79);

	begin:

	cout << "Which sort method do you want?" << endl;
	cout << "1: BSort" << endl;
	cout << "2: BSort2" << endl;
	cout << "3: InsertionSort" << endl;
	cout << "4: QuickSort" << endl;
	cout << "0: Exit" << endl;

	cout << "Your choise: ";
	cin >> choise;

	line('-', 79);

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

	cout << "\t\tNon-sorted array: " << endl;

	PrintArray(Array, N);

	line('-', 79);

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

	cout << "\t\tSorted array: " << endl;

	PrintArray(Array, N);

	line('-', 79);

	switch (choise)
	{
		case 1:	 search_timeBSort = end_time - start_time; break;
		case 2:	 search_timeB2Sort = end_time - start_time; break;
		case 3:	 search_timeInsSort = end_time - start_time; break;
		case 4:	 search_timeQuickSort = end_time - start_time; break;
	}
	

	if(search_timeBSort != 0) cout << "Time BSort: " << search_timeBSort / CLOCKS_PER_SEC << endl;
	if(search_timeB2Sort != 0) cout << "Time B2Sort: " << search_timeB2Sort / CLOCKS_PER_SEC << endl;
	if(search_timeInsSort != 0) cout << "Time InsertSort: " << search_timeInsSort / CLOCKS_PER_SEC << endl;
	if(search_timeQuickSort != 0) cout << "Time QuickSort: " << search_timeQuickSort / CLOCKS_PER_SEC << endl;

	line('-', 79);
	
	cout << "Do you want to look at another method? Y/N \n";
	cin >> repeat;

	if (repeat == 'Y' || repeat == 'y')
	{
		system("cls");
		goto begin;
	}

	system("pause>>void");
}