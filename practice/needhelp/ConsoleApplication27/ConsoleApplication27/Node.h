#pragma once
#include <cstdio>
#include <iostream>
#include<string>
#include <fstream>
using namespace std;

class Node
{
private:
	int data;
	Node * link;
public:
	Node(int val);
	Node * getLink();
	void setLink(Node * next);
	void display();

	bool hasData(int val);
	void insertNext(Node * n)p;
	Node * removeNext();
};
