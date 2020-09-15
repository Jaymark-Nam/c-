#include <iostream>
#include <fstream>
#include <istream>
#include <string>

#include "Student.h"
#include <stdio.h>

using namespace std;
#define MAX_STRING 100

Student::Student(){  //basic constructer initializes value inside data
	id = 0;
	for (int i = 0; i < MAX_STRING; i++)
		name[i] = '\0';
	for (int i = 0; i < MAX_STRING; i++)
		dept[i] = '\0';
}

Student::Student(int i, char * nam, char * dep){
	id = i;
	strcpy(name, nam);
	strcpy(dept, dep);
}


void Student::set(int i, char * nam, char * dep) {
	id = 0;
	for (int i = 0; i < MAX_STRING; i++)
		nam[i] = '\0';
	for (int i = 0; i < MAX_STRING; i++)
		dep[i] = '\0';
}

void Student::display() {
	cout << "Student Number: " << id << "Name:" << name << "Major:" << dept << endl;
}