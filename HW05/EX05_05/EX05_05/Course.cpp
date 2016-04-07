#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{
	if (numberOfStudents < capacity) {
		students[numberOfStudents] = name;
		numberOfStudents++;
	}
	else
	{
		capacity=increaseCapacity();
		addStudent(courseName);
	}
}

void Course::dropStudent(const string& name)
{
	string temp;
	int check = 0;
	for (int i = 0;i < capacity;i++)
	{
		if (name == students[i])
			check++;
		if (check >0)
			students[i] = students[i + 1];
	}
	students[numberOfStudents] = "NULL";
	numberOfStudents--;
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents()
{
	return numberOfStudents;
}

int Course::increaseCapacity() const
{
	int newCap = capacity + 10;
	string* temp = new string[capacity];
	for (int i = 0; i < capacity;i++) {
		temp[i] = students[i];
	}
	delete[] students;
	string* students = new string[newCap];
	for (int i = 0;i < capacity;i++)
	{
		students[i] = temp[i];
	}
	delete[] temp;
	return newCap;
}

void Course::clear() {
	delete[] students;
}