
#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;

//one function works for all data types. 
template <class T>

void bubbleSort(T a[], int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; i < j; j--)
			if (a[j - 1]>a[j])
				swap(a[j], a[j - 1]);
}


int main(){
	int a[5] = { 10,60,20,50,35 };
	int n = sizeof(a) / sizeof(a[0]);
	bubbleSort<int>(a, 5);
	cout << "Sorted Array: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	cout << sizeof(a);
	return 0;
}