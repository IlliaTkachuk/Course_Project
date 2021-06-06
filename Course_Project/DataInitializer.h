#pragma once
#ifndef DataInitializer_h
#define DataInitializer_h


class DataInitializer {
public:
	static void initializeFacultiesFile();
	static void initializeFaculties();			// Need to parse file data from "Faculties.txt" into the EntityLists::faculties initialization

	static void initializeGroupsFile();
	//static void initializeGroups();			// Need to parse file data from "Groups.txt" into the EntityLists::groups initialization

	static void initializeStudentsFile();
	//static void initializeStudents();			// Need to parse file data from "Students.txt" into the EntityLists::students initialization
};

#endif
