#pragma once
#ifndef FACULTY_H
#define FACULTY_H
#include <iostream>
#include <string>
#include <list>
#include "Group.h"
using namespace std;

class Faculty {
private:
	int facultyId;
	string name;
	list<Group> groups;

public:
	Faculty(int& facultyId, string& name, list<Group>& groups);

	int get_faculty_id();

	string get_faculty_name();

	list<Group> get_groups();

	void printFaculty();
};

#endif
