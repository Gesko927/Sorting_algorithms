#pragma once
#include <iostream>  //For Eugene's code
#include <ctime>	//For Eugene's code
#include <iomanip> //For Eugene's code

using namespace std;

// Maks
// I will add testing function later
// "Standart choice"
//-----------------------------------------------------------------------------------------------------
void BSort(int array[], long size);
//-----------------------------------------------------------------------------------------------------
// Modification of "boat" sorting
void BSort2(int array[], long size); // size - size of array

//-----------------------------------------------------------------------------------------------------
// Eugene Roman

void InsertionSort(int arrayPtr[], long length); // Insertion sort

//-----------------------------------------------------------------------------------------------------
//Andriy Datskiv
//Quick Sort
void QSort(int array[], long first, long last);

//-----------------------------------------------------------------------------------------------------

void PrintArray(int array[], long size);

void line(char c, int n);
