
#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;
class Geeks
{
public:
	int id;

	~Geeks()
	{
		cout << "Destructor called for id: " <<id <<  endl;
	}
};

int main() {
	Geeks o1;
	o1.id = 42;
	int i = 0;
	while (i < 5)
	{
		Geeks o2;
		o2.id = i;
		i++;
	}
	return 0;
}