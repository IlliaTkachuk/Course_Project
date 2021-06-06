#include "DataInitializer.h"

extern list<Faculty> faculties;
extern list<Group> groups;
extern list<Student> students;

// If Faculties.txt does not exist/is empty, creates it and fills the parameters row
void DataInitializer::initializeFacultiesFile(ifstream& fileIn, ofstream& fileOut) {
	string buffer;
	getline(fileIn, buffer);
	if (buffer == "") {
		fileOut << "id\t\tfaculty name\t\tgroups\n";
	}
}

// If Groups.txt does not exist/is empty, creates it and fills the parameters row
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

// If Students.txt does not exist/is empty, creates it and fills the parameters row
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

//Result: "Faculties.txt" is created, if it doesn't exist
//		  If the file contains Faculty entries, filling faculties list in
void DataInitializer::initializeFaculties() {
	ifstream fileIn("Faculties.txt");
	ofstream fileOut("Faculties.txt", ios::app);
	DataInitializer::initializeFacultiesFile(fileIn, fileOut);				// Faculties.txt is empty


	int currentRow = 1;
	string currentLine = "";
	//getline(fileIn, currentLine);				// Skipping the first line
	while (getline(fileIn, currentLine)) {
		int id = FileService::getIdFromLine(currentLine);
		string name = FileService::getNameFromLine(currentLine);
		//list<Group> groups = FileService::getGroupsFromLine(currentLine);
		list<Group> groups;						// list of groups is empty

		Faculty currentLineFaculty(id, name, groups);
		faculties.push_back(currentLineFaculty);
	}
	fileIn.close();
}