#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

#include "Menu_Constants.h"
#include "ConsoleService.h"
#include "MenuService.h"

#include "Student.h"
#include "Group.h"
#include "Faculty.h"
#include "University.h"

using namespace std;

int main() {
	MenuService::printGeneralMenu();
	MenuService::printFacultyMenu();
	MenuService::printFacultyFindMenu();
	MenuService::printFacultyUpdateMenu();
	MenuService::printGroupMenu();
	MenuService::printGroupFindMenu();
	MenuService::printGroupUpdateMenu();

	system("pause");
	return 0;
}
