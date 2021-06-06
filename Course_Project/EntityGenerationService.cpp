#include "EntityGenerationService.h"

void EntityGenerationService::generateNewEntity(ifstream& fileIn, ofstream& fileOut, string& entityName, Entities entity) {
	int entityId = getNewId(fileIn);

	switch (entity) {
	case Entities::UNIVERSITY:
		// not implemented
		break;
	case Entities::FACULTY:
		fileOut << entityId << "\t\t" << entityName << "\t\t-\n";						// First created without groups
		break;
	case Entities::GROUP:
		// not implemented
		break;
	case Entities::STUDENT:
		// not implemented
		break;
	}
}

int EntityGenerationService::getNewId(ifstream& fileIn) {
	int entityId = 0;
	string lastLine = FileService::getLastEntry(fileIn);
	if (lastLine._Starts_with("id")) {												// The case when the table is initialized, but empty
		return 1;
	}
	int charIndex = 0;
	string idString = "";
	while (isdigit(lastLine[charIndex])) {
		idString += lastLine[charIndex];
		charIndex++;
	}
	entityId = atoi(idString.c_str());
	entityId++;

	return entityId;
}