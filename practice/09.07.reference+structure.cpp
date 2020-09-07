
#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;


struct Student {
	string name;
	string address;
	int rollNo;
}mine;

/*
Imagine a function that has to receive a large object. If we pass it without reference, a new copy of it is created which causes wastage of CPU time and memory. We can use references to avoid this.*/

void print(const Student & s) 
{
	cout << "His name is "<< s.name << ", " << s.address << " and " << s.rollNo<<endl;
}
int main()
{

	mine.name = "JayMark";
	mine.address = "Seoul";
	mine.rollNo = 50;

	print(mine);
	return 0;
}

