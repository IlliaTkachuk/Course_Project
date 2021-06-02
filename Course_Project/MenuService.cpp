#include "MenuService.h"

	void MenuService::printGeneralMenu() {
		ConsoleService::outputString(Menu_Constants::GENERAL_MENU);
	}

	void MenuService::printFacultyMenu() {
		ConsoleService::outputString(Menu_Constants::FACULTY_MENU);
	}

	void MenuService::printFacultyFindMenu() {
		ConsoleService::outputString(Menu_Constants::FACULTY_FIND_MENU);
	}

	void MenuService::printFacultyUpdateMenu() {
		ConsoleService::outputString(Menu_Constants::FACULTY_UPDATE_MENU);
	}

	void MenuService::printGroupMenu() {
		ConsoleService::outputString(Menu_Constants::GROUP_MENU);
	}

	void MenuService::printGroupFindMenu() {
		ConsoleService::outputString(Menu_Constants::GROUP_FIND_MENU);
	}

	void MenuService::printGroupUpdateMenu() {
		ConsoleService::outputString(Menu_Constants::GROUP_UPDATE_MENU);
	}

	void MenuService::wrongKeyTyped() {
		ConsoleService::outputString(Menu_Constants::WRONG_KEY_TYPED);
	}
