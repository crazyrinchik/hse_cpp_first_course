#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    int age;
    double grade;

    friend std::istream& operator>>(std::istream& is, Student& student) {
        return is >> student.name >> student.age >> student.grade;
    }

    friend std::ostream& operator<<(std::ostream& os, const Student& student) {
        return os << "Name: " << student.name << ", Age: " << student.age << ", Grade: " << student.grade;
    }
};

bool operator==(const Student& lhs, const Student& rhs) {
    return lhs.name == rhs.name && lhs.age == rhs.age && lhs.grade == rhs.grade;
}

bool operator!=(const Student& lhs, const Student& rhs) {
    return !(lhs == rhs);
}

bool operator<(const Student& lhs, const Student& rhs) {
    return lhs.name < rhs.name || (lhs.name == rhs.name && (lhs.age < rhs.age || (lhs.age == rhs.age && lhs.grade < rhs.grade)));
}

std::vector<Student> readRecordsFromFile(const std::string& fileName) {
    std::vector<Student> students;
    std::ifstream file(fileName);

    Student student;
    while (file >> student) {
        students.push_back(student);
    }

    return students;
}

void addRecord(std::vector<Student>& students, const Student& student) {
    students.push_back(student);
}

void deleteRecord(std::vector<Student>& students, size_t index) {
    students.erase(students.begin() + index);
}

void displayRecords(const std::vector<Student>& students) {
    for (const auto& student : students) {
        std::cout << student << "\n";
    }
}

void writeRecordsToFile(const std::string& fileName, const std::vector<Student>& students) {
    std::ofstream file(fileName);

    for (const auto& student : students) {
        file << student << "\n";
    }
}

int main() {
    std::vector<Student> students = readRecordsFromFile("students.txt");

    Student newStudent;
    std::cin >> newStudent;
    addRecord(students, newStudent);

    size_t index;
    std::cin >> index;
    deleteRecord(students, index);

    displayRecords(students);

    writeRecordsToFile("students_v2.txt", students);

    return 0;
}
