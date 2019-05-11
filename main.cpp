#include <iostream>
#include<iomanip>
using namespace std;
template<typename T>



int BinarySearch(const  T list[], T key, int listSize)
{
	int low = 0;
	int high = listSize - 1;

	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (key < list[mid])
			high = mid - 1;
		else if (key == list[mid])
			return mid;
		else
			low = mid + 1;
	}

	return -1;
}
template<typename T>
void InsertionSort(T list[], int listSize)
{
	for (int i = 1; i < listSize; i++)
	{
		// Insert list[i] into a sorted sublist list[0..i-1] so that
		//  list[0..i] is sorted. 
		T currentElement = list[i];
		int k;
		for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
		{
			list[k + 1] = list[k];
		}

		// Insert the current element into list[k+1]
		list[k + 1] = currentElement;
	}

}

int main()
{
	const int SIZE = 9;
	int list[] = { 1,5,6,2,3,7,9,8,4 };
	int  a, b, c;
	cin >> a >> b >> c;
	cout << "From:";
	for (int i = 0; i < SIZE; i++) {
		if (i == 8)
			cout << list[i] << " ";
		else
			cout << list[i] << ",";
	}
	cout << endl;
	InsertionSort(list, 9);
	cout << "To:";
	for (int i = 0; i < SIZE; i++) {
		if (i == 8)
			cout << list[i] << " ";
		else
			cout << list[i] << ",";
	}
	cout << endl;
	cout << a << " at " << BinarySearch(list, a, 9) << endl;
	cout << b << " at " << BinarySearch(list, b, 9) << endl;
	cout << c << " at " << BinarySearch(list, c, 9) << endl;
	cout << endl;
	cout << endl;
	double list1[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
	double d, e, f;
	cin >> d >> e >> f;
	cout << "From: ";
	for (int i = 0; i < 9; i++) {
		if (i == 8)
			cout << list1[i] << " ";
		else
			cout << list1[i] << ",";
	}
	cout << endl;
	InsertionSort(list1, 9);
	cout << "To: ";
	for (int i = 0; i < 9; i++) {
		if (i == 8)
			cout << list1[i] << " ";
		else
			cout << list1[i] << ",";
	}
	cout << endl;
	cout << d << " at " << BinarySearch(list1, d, 9) << endl;
	cout << e << " at " << BinarySearch(list1, e, 9) << endl;
	cout << f << " at " << BinarySearch(list1, f, 9) << endl;
	cout << endl;
	cout << endl;
	system("pause");
	return 0;
}