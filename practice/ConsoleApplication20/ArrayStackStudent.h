#pragma once
#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include "Student.h"
#include <stdlib.h>
using namespace std;

inline void error(char * str)
{
	cout << str << endl;
	exit(1);
}

#define MAX_STACK_SIZE 100

class StudentStack
{
private:
	int top;
	Student data[MAX_STACK_SIZE];
public:
	StudentStack();
	
	bool isEmpty();
	bool isFull();
	void push(Student x);
	Student pop();
	Student peek();
	void display();
};


