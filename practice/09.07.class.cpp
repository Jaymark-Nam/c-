
#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;
class Geeks
{
public:
	string geekname;
	void printname()
	{
		cout << "Geekname is: " << geekname;
	}
};

int main() {
	Geeks o1;
	o1.geekname = "Jay";
	o1.printname();
	return 0;
}