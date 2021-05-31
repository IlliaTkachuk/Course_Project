#include "CONSOLESERVICE.H"
#include "MENUSERVICE.H"

	string ConsoleService::inputString() {
		string input;
		cin >> input;
		return input;
	}

	int ConsoleService::inputInt() {
		int input;
		cin >> input;
		return input;
	}

	void ConsoleService::outputString(string input) {
		cout << input;
	}

	void ConsoleService::clearConsole() {
		system("cls");
	}

	//bool isInteger(const std::string& s)
	//{
	//	if (s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;

	//	char* p;
	//	strtol(s.c_str(), &p, 10);

	//	return (*p == 0);
	//}

	//void validateInput(int &input) {
	//	string unvalidatedInput;
	//	cin >> unvalidatedInput;
	//	while (!isInteger(unvalidatedInput)) {
	//		MenuService::wrongKeyTyped();
	//		cin >> unvalidatedInput;
	//	}
	//}
