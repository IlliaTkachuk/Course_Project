#pragma once
#ifndef GROUP_H
#define GROUP_H
#include <string>
#include <vector>
#include "Student.h"
using namespace std;

class Group {
private:
	string name;
	int groupId;
	int facultyId;
	int studyYear;
	vector<Student> students;				// list vs. vector
	Student headman;

public:
	Group(string name, int groupId, int facultyId, int studyYear, vector<Student> students, Student headman);
};

#endif
