#include "GROUP.H"

Group::Group(string name, int groupId, int facultyId, int studyYear, vector<Student> students, Student headman) {
	this->name = name;
	this->groupId = groupId;
	this->facultyId = facultyId;
	this->studyYear = studyYear;
	this->students = students;
	this->headman = headman;
}
