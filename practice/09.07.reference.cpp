
#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;

int main() {
	int x = 10;

	int & ref = x;
	ref = 400;
	cout << "x=" << x << endl;


	x = 30;
	cout << "reference= " << ref << endl;

	// x=400, reference=30

	return 0;
}
/*When a variable is declared as reference, it becomes an alternative name for an existing variable. A variable can be declared as reference by putting ‘&’ in the declaration.
*/