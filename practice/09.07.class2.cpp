
#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;
class Geeks
{
public:
	string geekname;
	int id;

	void printname();
	void printid()
	{
		cout << "Geek is is:" << id;
	}
	
};

void Geeks::printname()
{
	cout << "Geekname is :" << geekname;
}

int main() {
	Geeks o1;
	o1.geekname = "Jay";
	o1.id = 1;

	o1.printname();
	cout << endl;

	o1.printid();
	return 0;
}