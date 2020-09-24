#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class grade;

class info {
private:
	string name;
	string major;
	int number;
public:
	info(string, string, int);
	friend void printgrade(info, grade);
};
class grade {
	double gradeaverage;
public:
	grade(double);
	friend void printgrade(info, grade);
};

info::info(string a, string b, int c) :name(a), major(b), number(c) {

}S
grade::grade(double a) {
	gradeaverage = a;
}
void printgrade(info a, grade b) {
	cout << "name? :" << a.name << endl;
	cout << "major? :" << a.major << endl;
	cout << "number? :" << a.number<< endl;
	cout << "gpa? :" << b.gradeaverage<< endl;
}

int main() {
	info i("oo", "Computer science", 1111);
	grade j(4.5);

	printgrade(i, j);
	return 0;
}
