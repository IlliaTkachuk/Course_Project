#include "FileService.h"

string FileService::getLastEntry(ifstream& fileIn) {
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
    return "Could not open the file!";
}

string FileService::showAllEntries(ifstream& fileIn) {
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

string FileService::findById(ifstream& fileIn, int& id) {
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

string FileService::findEntryByNumber(ifstream& fileIn, int& entryNumber) {
    string result = "";
    int currentLine = 0;
    while (getline(fileIn, result) && (currentLine <= entryNumber)) {}
    if (result == "") return "Improper input!";
    return  result;
}

int FileService::getIdFromLine(string& line) {
    if (!isdigit(line[0])) return -1;                                    // Expecting to have id-parameter at the first place
    int currentCharacter = 0;
    string idString = "";
    int result = -1;
    while (isdigit(line[currentCharacter])) {
        idString += line[currentCharacter];
        currentCharacter++;
    }
    return stoi(idString);
}

string FileService::getNameFromLine(string& line) {
    if (!isdigit(line[0])) return "Invalid input";                              // Expecting to have id-parameter at the first place
    int currentCharacter = 3;
    string resultName = "";
    // Checking for occurence of %d\t\t%c sequence (since id length may vary)
    while (!(isdigit(line[currentCharacter - 3])
        && isspace(line[currentCharacter - 2]) && isspace(line[currentCharacter - 1])
        && isalpha(line[currentCharacter]))) {
        currentCharacter++;
    }

    while (isalpha(line[currentCharacter])) {
        resultName += line[currentCharacter];
        currentCharacter++;
    }
    return resultName;
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