#pragma once
#ifndef FACULTY_H
#define FACULTY_H
#include <string>
#include <vector>
#include "Group.h"
using namespace std;

class Faculty {
private:
	int facultyId;
	string name;
	vector<Group> groups;

public:
	Faculty(string name, int facultyId, vector<Group> groups);
};

#endif
