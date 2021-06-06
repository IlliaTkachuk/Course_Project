#include "DataInitializer.h"
#include <fstream>
using namespace std;

void DataInitializer::initializeFacultiesFile() {
		ifstream fileIn("Faculties.txt");
		string buffer;
		fileIn >> buffer;

		if (buffer == "") {
			ofstream fileOut("Faculties.txt");
			fileOut << "id\t\tfaculty name\t\tgroups\n";
			fileOut.close();
		}
		fileIn.close();
}

void DataInitializer::initializeGroupsFile() {
	ifstream fileIn("Groups.txt");
	string buffer;
	fileIn >> buffer;

	if (buffer == "") {
		ofstream fileOut("Groups.txt");
		fileOut << "group fields: todo\n";
		fileOut.close();
	}
	fileIn.close();
}

void DataInitializer::initializeStudentsFile() {
	ifstream fileIn("Students.txt");
	string buffer;
	fileIn >> buffer;

	if (buffer == "") {
		ofstream fileOut("Students.txt");
		fileOut << "student fields: todo\n";
		fileOut.close();
	}
	fileIn.close();
}