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
		cout << input + "\n";
	}

	void clearConsole() {
		int seconds = 10;
		cout << "\nClosing in: ";
		while (seconds != 0) {
			cout << seconds;
			Sleep(1000);
			seconds--;
			cout << "\b";
		}
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


/*
faculty crud
	sorting

	group crud
		sorting
		starosta
		student
*/