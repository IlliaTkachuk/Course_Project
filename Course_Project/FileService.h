#pragma once
#ifndef FileService_h
#define FileService_h
#include <string>
#include <fstream>
using namespace std;

class FileService {
public:
	static string getLastEntry(ifstream &fileIn);

	//void readLastLineFromGroups();

	//void readLastLineFromStudents();

	static string showAllEntries(ifstream &fileIn);

	static string findById(ifstream &fileIn, int &id);

	static string findByName(ifstream& fileIn, string& name);

	//static string updateName(ofstream& file, string& from, string& to);				// Outdated!

	//static bool removeLine(ifstream& fileIn, ofstream& fileOut, size_t index);
};

#endif
