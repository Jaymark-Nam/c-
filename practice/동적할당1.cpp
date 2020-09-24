#include <string>
#include <iostream>
using namespace std; 

int main() {
	cout << "입력할 정수의 갯수를 써주세요 : ";
	int num;
	cin >> num;
	int *p = new int[num];
	cout << "정수를 입력해주세요" << endl;
	double sum = 0;
	for (int i = 0; i <= num - 1; i++) {
		cin >> p[i];
		sum += p[i];
	}
	double avg = sum / num;
	cout << "평균" << avg << endl;
	delete[] p;

}