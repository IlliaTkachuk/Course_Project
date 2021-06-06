#include <iostream>
#include <string>
#include <list>
#include <windows.h>

#include "Menu_Constants.h"
#include "ConsoleService.h"
#include "MenuService.h"

#include "Student.h"
#include "Group.h"
#include "Faculty.h"
#include "University.h"

#include "EntityLists.h"

#include "DataInitializer.h"
#include "EntityGenerationService.h"
#include "FileService.h"

#include "CaseHandler.h"

namespace choices {
	enum class Option {
		ZERO,
		ONE,
		TWO,
		THREE,
		FOUR,
		FIVE,
		INVALID_INPUT
	};
}

using namespace std;
using namespace choices;

Option resolveOption(string input) {
	if (input == "0") return Option::ZERO;
	if (input == "1") return Option::ONE;
	else if (input == "2") return Option::TWO;
	else if (input == "3") return Option::THREE;
	else if (input == "4") return Option::FOUR;
	else if (input == "5") return Option::FIVE;
	else return Option::INVALID_INPUT;
}


int main() {
	extern list<Faculty> faculties;
	extern list<Group> groups;
	extern list<Student> students;

	DataInitializer::initializeFaculties();
	DataInitializer::initializeGroupsFile();
	DataInitializer::initializeStudentsFile();

	for (Faculty faculty : faculties) {
		faculty.printFaculty();
	}
	system("pause");

	string input;
	//cout << "Use number keys to navigate throgh menus\n\n";
	while (true) {
		MenuService::printGeneralMenu();

		cout << "Answer: ";  cin >> input;

		switch (resolveOption(input)) {
		case Option::ONE:
			MenuService::printFacultyMenu();
			cin >> input;
			switch (resolveOption(input)) {
			case Option::ZERO:
				break;
			case Option::ONE:
				CaseHandler::handleCaseFacultyCreate();
				break;
			case Option::TWO:
				CaseHandler::handleCaseFacultyFindAll();
				break;
			case Option::THREE:
				MenuService::printFacultyFindMenu();
				cin >> input;
				switch (resolveOption(input)) {
				case Option::ZERO:
					break;
				case Option::ONE:
					CaseHandler::handleCaseFacultyFindById();
					system("pause");
					break;
				case Option::TWO:
					CaseHandler::handleCaseFacultyFindByName();
					system("pause");
					break;
				default:
					MenuService::wrongKeyTyped();
					system("pause");
				}
				//"1.Find faculty by name\n2.Find faculty by id\n\n0. Back to main menu"
				break;
			case Option::FOUR:
				MenuService::printFacultyUpdateMenu();
				cin >> input;
				switch (resolveOption(input)) {
				case Option::ZERO:
					break;
				case Option::ONE:
					//CaseHandler::handleCaseFacultyUpdateName();
					ConsoleService::outputString("Faculty name changed!\n");			//TODO: findFaculty
					system("pause");
					break;
				case Option::TWO:
					ConsoleService::outputString("Faculty dean reassigned!\n");			//TODO: findFaculty
					system("pause");
					break;
				case Option::THREE:
					ConsoleService::outputString("Group added!\n");						//TODO: insert group parameters
					system("pause");
					break;
				case Option::FOUR:
					ConsoleService::outputString("Group deleted!\n");					//TODO: findFaculty
					system("pause");
					break;
				default:
					MenuService::wrongKeyTyped();
					system("pause");
				}
				//"1.Change faculty name\n2.Assign dean\n3.Add group\n4.Delete group\n\n0. Back to main menu"
				break;
			case Option::FIVE:
				ConsoleService::outputString("Faculty deleted!\n");			//TODO: choose faculty by: name, id
				system("pause");
				break;
			default:
				MenuService::wrongKeyTyped();
				system("pause");
			}
			//"1.Create faculty\n2.Find all faculties\n3.Find faculty\n4.Update faculty\n5.Delete faculty\n\n0. Back"

			break;
		case Option::TWO:
			MenuService::printGroupMenu();
			cin >> input;
			switch (resolveOption(input)) {
			case Option::ZERO:
				break;
			case Option::ONE:
				ConsoleService::outputString("Group created!\n");
				system("pause");
				break;
			case Option::TWO:
				ConsoleService::outputString("All Groups:\n");
				system("pause");
				break;
			case Option::THREE:
				MenuService::printGroupFindMenu();
				cin >> input;
				switch (resolveOption(input)) {
				case Option::ZERO:
					break;
				case Option::ONE:
					ConsoleService::outputString("Group found by id!\n");
					system("pause");
					break;
				case Option::TWO:
					ConsoleService::outputString("Group found by name!\n");
					system("pause");
					break;
				default:
					MenuService::wrongKeyTyped();
					system("pause");
				}
				break;

				// 1. Find group by name2. Find group by id

			case Option::FOUR:
				MenuService::printGroupUpdateMenu();
				cin >> input;
				switch (resolveOption(input)) {
				case Option::ZERO:
					break;
				case Option::ONE:
					ConsoleService::outputString("Group name changed!\n");				//TODO: findGroup
					system("pause");
					break;
				case Option::TWO:
					ConsoleService::outputString("Group headman reassigned!\n");		//TODO: findGroup
					system("pause");
					break;
				case Option::THREE:
					ConsoleService::outputString("Student added!\n");					//TODO: insert group parameters
					system("pause");
					break;
				case Option::FOUR:
					ConsoleService::outputString("Student deleted!\n");					//TODO: findStudent
					system("pause");
					break;
				default:
					MenuService::wrongKeyTyped();

					// 1. Change group name2. Assign headman3. Add student4. Delete student
				}
				break;
			case Option::FIVE:
				ConsoleService::outputString("Group deleted!\n");						//TODO: choose group by: name, id
				system("pause");
				break;

			default:
				//ConsoleService::validateInput(input);
				MenuService::wrongKeyTyped();
				system("pause");
				break;
				// 1. Create group2.Find all groups3.Find group4.Update group5.Delete group
			}
			/*default:
				MenuService::wrongKeyTyped();
				system("pause");
				break;*/
		}
	}
	system("pause");
	return 0;
}