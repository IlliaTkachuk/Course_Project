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
	}

	void clearConsole() {
		system("cls");
	}

};

class MenuService {
private:
	string menu1 = "1.Manage faculties\n2.Manage student groups";
	string menu2 = "1.Create faculty\n2.Find all faculties\n3.Find faculty\n4.Update faculty\n5.Delete faculty";
	string menu3 = "1.Find faculty by name\n2.Find faculty by id";
	string menu4 = "1.Change faculty name\n2.Assign dean\n3.Add group\n4.Delete group";
	string menu5 = "1.Create group\n2.Find all groups\n3.Find group\n4.Update group\n5.Delete group";
	string menu6 = "1.Find group by name\n2.Find group by id";
	string menu7 = "1.Change group name\n2.Assign headman\n3.Add student\n4.Delete student";
	
public:
	void printMenu1() {
		cout << menu1;
		cout << "\n";
	}

	void printMenu2() {
		cout << menu2;
		cout << "\n";
	}

	void printMenu3() {
		cout << menu3;
		cout << "\n";
	}

	void printMenu4() {
		cout << menu4;
		cout << "\n";
	}

	void printMenu5() {
		cout << menu5;
		cout << "\n";
	}

	void printMenu6() {
		cout << menu6;
		cout << "\n";
	}

	void printMenu7() {
		cout << menu7;
		cout << "\n";
	}
};

int main() {

	ConsoleService consoleService;
	MenuService menuService;
	//menuService.printMenu1();
	//cout << "\n\n\n";
	//menuService.printMenu2();
	//cout << "\n\n\n"; 
	//menuService.printMenu3();
	//cout << "\n\n\n"; 
	//menuService.printMenu4();
	//cout << "\n\n\n"; 
	//menuService.printMenu5();
	//cout << "\n\n\n"; 
	//menuService.printMenu6();
	//cout << "\n\n\n"; 
	//menuService.printMenu7();

	system("pause");
	return 0;
}
