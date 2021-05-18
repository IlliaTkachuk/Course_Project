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
		ConsoleService::outputString(menu_constants::generalMenu);
	}

	static void printFacultyMenu() {
		ConsoleService::outputString(menu_constants::facultyMenu);
	}

	static void printFacultyFindMenu() {
		ConsoleService::outputString(menu_constants::facultyFindMenu);
	}

	static void printFacultyUpdateMenu() {
		ConsoleService::outputString(menu_constants::facultyUpdateMenu);
	}

	static void printGroupMenu() {
		ConsoleService::outputString(menu_constants::groupMenu);
	}

	static void printGroupFindMenu() {
		ConsoleService::outputString(menu_constants::groupFindMenu);
	}

	static void printGroupUpdateMenu() {
		ConsoleService::outputString(menu_constants::groupUpdateMenu);
	}
};

int main() {

	MenuService::printGeneralMenu();
	cout << "\n\n\n";
	MenuService::printFacultyMenu();
	cout << "\n\n\n";
	MenuService::printFacultyFindMenu();
	cout << "\n\n\n"; 
	MenuService::printFacultyUpdateMenu();
	cout << "\n\n\n";
	MenuService::printGroupMenu();
	cout << "\n\n\n";
	MenuService::printGroupFindMenu();
	cout << "\n\n\n"; 
	MenuService::printGroupUpdateMenu();

	system("pause");
	return 0;
}
