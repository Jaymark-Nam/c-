
#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;



int fun(int & x)
{
	return x;
}
int main()
{
	int i = 10;
	cout << fun(i);
	return 0;
}