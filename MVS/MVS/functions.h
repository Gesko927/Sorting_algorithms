#pragma once
#include <iostream>  //For Eugene's code
#include <ctime>	//For Eugene's code
#include <iomanip> //For Eugene's code

using namespace std;

// Maks
// I will add testing function later
// "Standart choice"
//-----------------------------------------------------------------------------------------------------
template <typename T>
void BSort(T array[], long size)
{
	bool flag = true;
	long i, j;

	T temp;

	for (j = 1;; j++)
	{
		for (i = 0; i < size - j; i++)
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				flag = false;
			}

		if (flag)
			break;

		flag = true;
	}
}
//-----------------------------------------------------------------------------------------------------
// Modification of "boat" sorting
template <typename T>
void BSort2(T array[], long size) // size - size of array
{
	long i, rezerv;				//i - counter for array, rezerv - for saving counter pisition
	T temp;						//temp - for swap
	i = 0;

	while (i < size - 1)
	{
		if (array[i] > array[i + 1]) // compare
		{
			rezerv = i + 1;			// save counter position
			while ((i >= 0) && (array[i] > array[i + 1]))  // swap while..
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				i--;				// compare elements behind 'i'
			}
			i = rezerv;				// return 'i' on position
		}
		else
			i++;					// next elements
	}
}
//-----------------------------------------------------------------------------------------------------
// Eugene Roman
template <typename T>
void InsertionSort(T arrayPtr[], long length) // Insertion sort
{
	int temp, // temporary variable for storing the value of the sorted array element
		item; // the index of the previous element
	for (int counter = 1; counter < length; counter++)
	{
		temp = arrayPtr[counter]; // initialize a temporary variable current value of the array element
		item = counter - 1; // remember the previous index of the array element
		while (item >= 0 && arrayPtr[item] > temp) // while the index is not equal to 0, and the previous element of an array greater than the current
		{
			arrayPtr[item + 1] = arrayPtr[item]; // permutation of the array elements
			arrayPtr[item] = temp;
			item--;
		}
	}
}
//-----------------------------------------------------------------------------------------------------
//Andriy Datskiv
//Quick Sort
template <typename T>
void QSort(T array[], long first, long last)
{
	if (first < last)//compare first element with last 
	{
		long i;//vaiables for indexes
		long j;
		T temp;//for swap
		T point;

		point = array[first];//fixed element of array

		i = first;//left end of array
		j = last;//right end of array

		while (i < j)
		{
			while (array[i] <= point && i < last)
				i++;
			while (array[j] >= point && j > first)
				j--;

			if (i < j)//swapping elements
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}

		temp = array[first];
		array[first] = array[j];
		array[j] = temp;

		//Recursion QuickSort
		QSort(array, first, j - 1);
		QSort(array, j + 1, last);
	}
}

// Eugene Roman
/*
void TEST_ALGORITHM_INSERT_SORTING(void)
{
	srand(time(0));
	cout << "Input size of array: ";
	int size_of_array; // length of the array
	cin >> size_of_array;

	int *sorted_array = new int[size_of_array]; // one dimensional dynamic array
	for (int counter = 0; counter < size_of_array; counter++)
	{
		cin >> sorted_array[counter]; // fill an array
		cout << setw(4) << sorted_array[counter] << "  "; // the output of the array on the screen
	}
	cout << "----------------------------------------------------------------";

	InsertionSort(sorted_array, size_of_array); // call inserts sorting functions

	for (int counter = 0; counter < size_of_array; counter++)
	{
		cout << setw(4) << sorted_array[counter] << "   "; // Printing a sorted array
	}
	cout << "----------------------------------------------------------------";
	delete[] sorted_array; // frees up the memory
	cout << "\nSpent time: " << clock() / 1000.0 << endl;
}
//-----------------------------------------------------------------------------------------------------*/
template <typename T>
void PrintArray(T array[], long size)
{

	long i, j, in;
	cout << "\n\n V masyvi : " << size << "Elementiv \n";

	for (j = 0; j<3; ++j)
	{
		switch (j)
		{
		case 0:  in = 0;
			cout << "\n\n Pochatok : \n";
			break;
		case 1:  in = size / 2 - 5;
			cout << "\n\n Seredyna : \n";
			break;
		case 2:  in = size - 10;
			cout << "\n\n Kinets : \n";
			break;
		}

		for (i = in; i<in + 10; ++i)
		{
			if (i % 5 == 0)
				cout << endl;
			cout << setw(15) << array[i];
		}
	}
}
