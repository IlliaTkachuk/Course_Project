#include "CONSOLESERVICE.H"

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
		ConsoleService::clearConsole();
		cout << input;
	}

	void ConsoleService::clearConsole() {
		system("cls");
	}
