#include "STUDENT.H"

Student::Student() {
    this->firstName = "Unknown";
    this->lastName = "Unknown";
    this->groupId = -1;
    this->gpa = 0;
    this->phoneNumber = "Unknown";
}

Student::Student(string firstName, string lastName, int groupId, double gpa, string phoneNumber) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->groupId = groupId;
    this->gpa = gpa;
    this->phoneNumber = phoneNumber;
}
