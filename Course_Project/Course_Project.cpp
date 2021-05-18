#include <iostream>
#include <string>
#include <windows.h>
#include "MENU_CONSTANTS.h"

using namespace std;

class ConsoleService {

public:
	static string inputString() {
		string input;
		cin >> input;
		return input;
	}

	static int inputInt() {
		int input;
		cin >> input;
		return input;
	}

	static void outputString(string input) {
		cout << input;
	}

	static void clearConsole() {
		system("cls");
	}

};

class MenuService {
public:
	static void printGeneralMenu() {
		ConsoleService::outputString(menu_constants::GENERAL_MENU);
	}

	static void printFacultyMenu() {
		ConsoleService::outputString(menu_constants::FACULTY_MENU);
	}

	static void printFacultyFindMenu() {
		ConsoleService::outputString(menu_constants::FACULTY_FIND_MENU);
	}

	static void printFacultyUpdateMenu() {
		ConsoleService::outputString(menu_constants::FACULTY_UPDATE_MENU);
	}

	static void printGroupMenu() {
		ConsoleService::outputString(menu_constants::GROUP_MENU);
	}

	static void printGroupFindMenu() {
		ConsoleService::outputString(menu_constants::GROUP_FIND_MENU);
	}

	static void printGroupUpdateMenu() {
		ConsoleService::outputString(menu_constants::GROUP_UPDATE_MENU);
	}
};

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
