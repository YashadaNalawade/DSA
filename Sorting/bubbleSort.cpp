// Time complexity O(N^2)

#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		bool swapped = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int main()
{
	int a[] = {20, 9, 67, 100, 4};
	int n = sizeof(a) / sizeof(a[0]);
	bubbleSort(a, n);
	printArray(a, n);
	return 0;
}