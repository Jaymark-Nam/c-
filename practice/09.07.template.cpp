
#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;

//one function works for all data types. 
template <typename T>
T myMax(T x, T y)
{
	return (x > y) ? x : y;
}
int main()
{
	cout << myMax<int>(3,6) << endl;
	cout << myMax<char>('a' , 'v') << endl;
	return 0;
}