#pragma once
#ifndef DataInitializer_h
#define DataInitializer_h
#include <fstream>
#include "FileService.h"
#include "EntityLists.h"
#include <list>
using namespace std;

class DataInitializer {
public:
	static void initializeFacultiesFile(ifstream &fileIn, ofstream &fileOut);
	static void initializeFaculties();			// Need to parse file data from "Faculties.txt" into the EntityLists::faculties initialization

	static void initializeGroupsFile();
	//static void initializeGroups();			// Need to parse file data from "Groups.txt" into the EntityLists::groups initialization

	static void initializeStudentsFile();
	//static void initializeStudents();			// Need to parse file data from "Students.txt" into the EntityLists::students initialization
};

#endif
