#include <string>
#include <iostream>
using namespace std; 

int main() {
	int * p = new int; //정수형 동적할당
	if (p == 0) {
		cout << "fail" << endl;
		return 0;
	}
	*p = 69;
	cout << *p << endl;
	delete p;
	return 0;
}

