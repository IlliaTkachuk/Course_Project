#include "FACULTY.H"

Faculty::Faculty(int& facultyId, string& name, list<Group>& groups) {
	this->name = name;
	this->facultyId = facultyId;
	this->groups = groups;
}

int Faculty::get_faculty_id() {
	return facultyId;
}

string Faculty::get_faculty_name() {
	return name;
}

list<Group> Faculty::get_groups() {
	return groups;
}

void Faculty::printFaculty() {
	cout << this->get_faculty_id() << " " << this->get_faculty_name() << endl;
}

