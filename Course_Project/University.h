#pragma once
#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <string>
#include <vector>
#include "Faculty.h"
using namespace std;

class University {
private:
	string name;
	vector<Faculty> faculties;

public:
	University(string name, vector<Faculty> faculties);
};

#endif
