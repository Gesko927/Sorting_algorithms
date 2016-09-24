#include <iostream>

using namespace std;
// Maks
// I will add testing function later
// "Standart choice"
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