#pragma once
#ifndef MENU_SERVICE_H
#define MENU_SERVICE_H
#include <iostream>
#include <string>
#include "ConsoleService.h"
#include "Menu_Constants.h"
using namespace std;

class MenuService {
public:
	static void printGeneralMenu();

	static void printFacultyMenu();

	static void printFacultyFindMenu();

	static void printFacultyUpdateMenu();

	static void printGroupMenu();

	static void printGroupFindMenu();

	static void printGroupUpdateMenu();

	static void wrongKeyTyped();
};
#endif
