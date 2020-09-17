#pragma once
#include <iostream>
#include <fstream>
#include <istream>
#include <string>
using namespace std;

class Node
{
private:
	int item;
	Node * link;
public:
	Node(int i)
	{
		item = i;
		link = NULL;
	}
	~Node(void);
	Node * getLink();
	void setLink(Node * p);
};
#pragma once
#include "Student.h"

class Node : public Student
{
private:
	Node * link;
public:
	Node(int id, char * name, char * dept);
	~Node(void);
	Node * getLink();
	void setLink(Node * p);
};
