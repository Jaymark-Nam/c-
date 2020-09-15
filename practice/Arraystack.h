
#pragma once
#include <iostream>
#include <fstream>
#include <istream>
#include <string>

using namespace std;

inline void error(char * str)
{
	cout << str << endl;
	exit(1);
}

const int MAX_STACK_SIZE = 20;

class Arraystack
{
private:
	int data[MAX_STACK_SIZE];
	int top;

public:
	Arraystack();
	~Arraystack();
	void push(int x);
	int pop();
	int peek();
	bool isFull();
	bool isEmpty();
	int size();
};



