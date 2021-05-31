#include "MenuService.h"

	void MenuService::printGeneralMenu() {
		ConsoleService::outputString(menu_constants::GENERAL_MENU);
	}

	void MenuService::printFacultyMenu() {
		ConsoleService::outputString(menu_constants::FACULTY_MENU);
	}

	void MenuService::printFacultyFindMenu() {
		ConsoleService::outputString(menu_constants::FACULTY_FIND_MENU);
	}

	void MenuService::printFacultyUpdateMenu() {
		ConsoleService::outputString(menu_constants::FACULTY_UPDATE_MENU);
	}

	void MenuService::printGroupMenu() {
		ConsoleService::outputString(menu_constants::GROUP_MENU);
	}

	void MenuService::printGroupFindMenu() {
		ConsoleService::outputString(menu_constants::GROUP_FIND_MENU);
	}

	void MenuService::printGroupUpdateMenu() {
		ConsoleService::outputString(menu_constants::GROUP_UPDATE_MENU);
	}
