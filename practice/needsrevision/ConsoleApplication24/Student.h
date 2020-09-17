#pragma once
#include <iostream>
#include <string.h>
using namespace std;

#define MAX_STRING 100

class Student
{
private:
	int id;
	char name[MAX_STRING];
	char dept[MAX_STRING];
public:
	Student();
	Student(int, char*, char*);
	void set(int, char*, char*);
	void display();
};