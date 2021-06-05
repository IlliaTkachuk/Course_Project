#pragma once
#ifndef EntityGenerationService_h
#define EntityGenerationService_h
#include "Entities.h"
#include "FileService.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class EntityGenerationService {
public:
	static void generateNewEntity(ifstream &fileIn, ofstream &fileOut, string &entityName, Entities entity);

private:
	static int getNewId(ifstream& fileIn);
};

#endif
