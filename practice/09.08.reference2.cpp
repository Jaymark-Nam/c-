
#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;


void swap(char * & s1, char *&  s2)
{
	char *temp = s1;
	s1 = s2;
	s2 = temp;
}
int main()
{
	char *s1 = "Jay";
	char *s2 = "Mark";
	
	swap(s1, s2);
	cout << s1 << " " << s2 << endl;
	return 0;
}