#pragma once

#include <cstdio>
#include <iostream>
#include <fstream>
#include <istream>
#include <string>
using namespace std;
#define MAX_LIST_SIZE 100

inline void error(char * str)
{
	cout << str << endl;
	exit(1);
}

class ArrayList
{
private:
	int data[MAX_LIST_SIZE];
	int length=5;
public : 
	ArrayList();
	~ArrayList();
	void insert(int pos, int e);
	void remove(int pos);
	int getEntry(int pos);
	bool isFull();
	bool isEmpty();
	bool find(int item);
	void replace(int pos, int e);
	int size();
	void display();
	void clear();
};



