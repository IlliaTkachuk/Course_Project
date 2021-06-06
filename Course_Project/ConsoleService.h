#pragma once
#ifndef CONSOLE_SERVICE_H
#define CONSOLE_SERVICE_H
#include <iostream>
#include <string>
using namespace std;

class ConsoleService {

public:
	static string inputString();

	static int inputInt();

	static void outputString(string input);

	static void clearConsole();
};

#endif
