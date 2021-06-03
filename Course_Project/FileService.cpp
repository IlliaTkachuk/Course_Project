#include "FileService.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
//#include <string_view>
using namespace std;

string FileService::getLastEntry(ifstream &fileIn) {
    if (fileIn)                              // если файл открылс€
    {
        string lastLine;
        string temp;                // создаем буфер, куда будет считыватьс€ информаци€
        while (getline(fileIn, temp))         //  ѕока мы получили строку - тело цикла исполн€етс€ ||  когда файл закончилс€ (все строки считались) - цикл false
        {
            lastLine = temp;
            // выводит последнюю прочитанную строку
            //... остальные ваши действи€     
        }
        return lastLine + "\n";
    }
}

string FileService::showAllEntries(ifstream &fileIn) {
    string result = "";
    string currentLine;
    while (getline(fileIn, currentLine)) {         //  ѕока мы получили строку - тело цикла исполн€етс€ ||  когда файл закончилс€ (все строки считались) - цикл false
        result += currentLine;
        result += "\n";
        // выводит последнюю прочитанную строку
        //... остальные ваши действи€     
    }
    return result + "\n";
}

string FileService::findById(ifstream &fileIn, int &id) {
    string result = "";
    string currentLine = "";
    while (getline(fileIn, currentLine)) {
        if (currentLine._Starts_with(to_string(id))) {
            result = currentLine;
            break;
        }
    }
    if (result == "") return "The element with given id is not found!";

    return result + "\n";
}

string FileService::findByName(ifstream& fileIn, string& name) {
    string result = "";
    string currentLine = "";
    while (getline(fileIn, currentLine)) {
        if (currentLine.find(name) != string::npos) {
            result = currentLine;
            break;
        }
    }
    if (result == "") return "The element with given name is not found!";

    return result + "\n";
}

//bool removeLine(ifstream &fileIn, ofstream &fileOut, size_t index) {
//    vector<string> vec;
//    if (fileIn.is_open())
//    {
//        string str;
//        while (std::getline(fileIn, str))
//            vec.push_back(str);
//        fileIn.close();
//        if (vec.size() < index)
//            return false;
//        vec.erase(vec.begin() + index);
//        if (fileOut.is_open())
//        {
//            copy(vec.begin(), vec.end(),
//                ostream_iterator<string>(fileOut, "\n"));
//            fileOut.close();
//            return true;
//        }
//        return false;
//    }
//    return false;
//}