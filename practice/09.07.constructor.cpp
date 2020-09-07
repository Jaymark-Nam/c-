
#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;
class Geeks
{
public:
	int id;

	Geeks()
	{
		cout << "Default Constructor called" << endl;
		id = -1;
	}
	Geeks(int x) {
		cout << "Parametrized constructor called" << endl;
		id = x;
	}
};

int main() {
	Geeks o1;

	cout << "Geek id is: " << o1.id << endl;
	Geeks o2(40);
	cout << "Geek is id:" << o2.id << endl;
	return 0;
}