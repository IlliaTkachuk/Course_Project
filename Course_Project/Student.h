#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student {
private:
	string studentId;
	string firstName;
	string lastName;
	int groupId;
	double gpa;
	//Date birthDate;
	string phoneNumber;

public:
	Student();

	Student(string firstName, string lastName, int groupId, double gpa, string phoneNumber);
};

#endif
