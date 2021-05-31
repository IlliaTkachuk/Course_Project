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
	std::cout << __cplusplus << std::endl;
	cout << "Use number keys to navigate throgh menus\n\n";
	while (true) {
		MenuService::printGeneralMenu();
		int input;
		cin >> input;
		switch (input) {
		case 1:
			MenuService::printFacultyMenu();
			cin >> input;
			switch (input) {
			case 0:
				break;
			case 1:
				ConsoleService::outputString("Faculty created!\n");
				break;
			case 2:
				ConsoleService::outputString("All Faculties:\n");
				break;
			case 3:
				MenuService::printFacultyFindMenu();
				cin >> input;
				switch (input) {
				case 0:
					break;
				case 1:
					ConsoleService::outputString("Faculty found by name!\n");			//TODO:"Type faculty name: ..."
					break;
				case 2:
					ConsoleService::outputString("Faculty found by id!\n");				//TODO:"Type faculty id: ..."
					break;
				default:
					MenuService::wrongKeyTyped();
				}
				//"1.Find faculty by name\n2.Find faculty by id\n\n0. Back to main menu"
				break;
			case 4:
				MenuService::printFacultyUpdateMenu();
				cin >> input;
				switch (input) {
				case 0:
					break;
				case 1:
					ConsoleService::outputString("Faculty name changed!\n");			//TODO: findFaculty
					break;
				case 2:
					ConsoleService::outputString("Faculty dean reassigned!\n");			//TODO: findFaculty
					break;
				case 3:
					ConsoleService::outputString("Group added!\n");						//TODO: insert group parameters
					break;
				case 4:
					ConsoleService::outputString("Group deleted!\n");					//TODO: findFaculty
					break;
				default:
					MenuService::wrongKeyTyped();
				}
				//"1.Change faculty name\n2.Assign dean\n3.Add group\n4.Delete group\n\n0. Back to main menu"
				break;
			case 5:
				ConsoleService::outputString("Faculty deleted!\n");			//TODO: choose faculty by: name, id
				break;
			default:
				MenuService::wrongKeyTyped();
			}
			//"1.Create faculty\n2.Find all faculties\n3.Find faculty\n4.Update faculty\n5.Delete faculty\n\n0. Back"
			
			break;
		case 2:
			MenuService::printGroupMenu();
			break;
		default:
			//ConsoleService::validateInput(input);
			MenuService::wrongKeyTyped();
			break;
		}
	}

	system("pause");
	return 0;
}
