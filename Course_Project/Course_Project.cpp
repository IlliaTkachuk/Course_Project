#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class ConsoleService {

public:
	string inputString() {
		string input;
		cin >> input;
		return input;
	}

	int inputInt() {
		int input;
		cin >> input;
		return input;
	}

	void outputString(string input) {
		cout << input;
		cout << "\n";
	}

	void clearConsole() {
		system("cls");
	}

};

int main() {

	ConsoleService service;
	int intResult = service.inputInt();
	string stringResult = service.inputString();
	cout << "OutputString: ";
	service.outputString(stringResult);

	service.clearConsole();

	system("pause");
	return 0;
}
