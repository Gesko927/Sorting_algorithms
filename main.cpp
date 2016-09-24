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