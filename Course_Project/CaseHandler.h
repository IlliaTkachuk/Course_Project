#pragma once
#ifndef CaseHandler_H
#define CaseHandler_H
#include <iostream>
#include <string>
#include "ConsoleService.h"
#include "Menu_Constants.h"
using namespace std;

class CaseHandler {
public:
	static void handleCaseFacultyCreate();

	static void handleCaseFacultyFindAll();

	static void handleCaseFacultyFindById();

	static void handleCaseFacultyFindByName();

	//static void handleCaseFacultyUpdateName();

	//static void handleCaseFacultyDelete();
};
#endif
