#include "CaseHandler.h"
#include "Entities.h"
#include "EntityGenerationService.h"
#include "FileService.h"
#include <fstream>
#include <string>
using namespace std;

void CaseHandler::handleCaseFacultyCreate() {
	ConsoleService::outputString("Insert faculty name:\nAnswer: ");
	string facultyName;
	cin >> facultyName;
	
	ifstream fileIn("Faculties.txt");
	ofstream fileOut("Faculties.txt", ios::app);
	EntityGenerationService::generateNewEntity(fileIn, fileOut, facultyName, Entities::FACULTY);
	fileIn.close();
	fileOut.close();
	fileIn.open("Faculties.txt");
	ConsoleService::outputString(Menu_Constants::FACULTY_CREATED + FileService::getLastEntry(fileIn));
	fileIn.close();
	system("pause");
}

void CaseHandler::handleCaseFacultyFindAll() {
	ifstream fileIn("Faculties.txt");
	string result = FileService::showAllEntries(fileIn);
	ConsoleService::outputString(result);
	fileIn.close();
	system("pause");
}

void CaseHandler::handleCaseFacultyFindById() {
	ifstream fileIn("Faculties.txt");
	int facultyId;

	ConsoleService::outputString("Insert id:\n");
	cin >> facultyId;
	string result = FileService::findById(fileIn, facultyId);
	ConsoleService::outputString(result);
	
	fileIn.close();
	system("pause");
}

void CaseHandler::handleCaseFacultyFindByName() {
	ifstream fileIn("Faculties.txt");
	string facultyName;

	ConsoleService::outputString("Insert name:\n");
	cin >> facultyName;
	string result = FileService::findByName(fileIn, facultyName);
	ConsoleService::outputString(result);

	fileIn.close();
	system("pause");
}

// AFTER: faculties are sorted by id's
//void CaseHandler::handleCaseFacultyUpdateName() {
//	ifstream fileIn("Faculties.txt");
//	int facultyId;
//	ConsoleService::outputString("Find faculty by id:\n");
//	cin >> facultyId;
//	ConsoleService::outputString("Change the name to:\n");
//
//	string facultyName;
//	cin >> facultyName;
//	string result = FileService::findById(fileIn, facultyId);
//	int prevNameIndex = 0;
//	while (!isalpha(result[prevNameIndex])) {								// finding the first occurence of a letter
//		prevNameIndex++;
//	}
//	result.replace(prevNameIndex, prevNameIndex + facultyName.length(), facultyName);			// updated entry
//
//	ofstream fileOut("Faculties.txt");
//
//	//FileService::removeLine(fileIn, fileOut, facultyId + 1);				// ASSUMPTION: Faculties are always sorted by id
//	ConsoleService::outputString(result);
//
//	fileIn.close();
//	fileOut.close();
//	system("pause");
//}