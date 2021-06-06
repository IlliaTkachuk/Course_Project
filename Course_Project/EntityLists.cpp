#include <iostream>
#include <list>

#include "University.h"
#include "Faculty.h"
#include "Group.h"
#include "Student.h"

using namespace std;

class EntityLists {
	list<Faculty> faculties;
	list<Group> groups;
	list<Student> students;
};
