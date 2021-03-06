#pragma once
#ifndef MENU_CONSTANTS_H
#define MENU_CONSTANTS_H
#include <string>

namespace Menu_Constants {
	const std::string GENERAL_MENU = "1.Manage faculties\n2.Manage student groups\n";
	const std::string FACULTY_MENU = "1.Create faculty\n2.Find all faculties\n3.Find faculty\n4.Update faculty\n5.Delete faculty\n\n0. Back to main menu\n";
	const std::string FACULTY_FIND_MENU = "1.Find faculty by id\n2.Find faculty by name\n\n0. Back to main menu\n";
	const std::string FACULTY_UPDATE_MENU = "1.Change faculty name\n2.Assign dean\n3.Add group\n4.Delete group\n\n0. Back to main menu\n";
	const std::string GROUP_MENU = "1.Create group\n2.Find all groups\n3.Find group\n4.Update group\n5.Delete group\n\n0. Back to main menu\n";
	const std::string GROUP_FIND_MENU = "1.Find group by id\n2.Find group by name\n\n0. Back to main menu\n";
	const std::string GROUP_UPDATE_MENU = "1.Change group name\n2.Assign headman\n3.Add student\n4.Delete student\n\n0. Back to main menu\n";
	const std::string WRONG_KEY_TYPED = "Invalid key. Use numbers to navigate the menu. Try again\n";

	const std::string FACULTY_CREATED = "Faculty created:\nid\t\tname\t\tgroups\n";
}
#endif
