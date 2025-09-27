// File: Course.cpp
#pragma once
#include <iostream>
#include <string>

using namespace std;
#include "Instructor.cpp"
#include <vector>
#include "Assignment.cpp"
#include <memory>


// Kelas Course butuh definisi Instructor dan Assignment
class Course {
private:
    string courseCode;
    string title;
    const Instructor* instructor;
    vector<shared_ptr<Assignment>> assignments;
public:
    Course(string code, string t, const Instructor* instr) 
        : courseCode(code), title(t), instructor(instr) {}

    string getTitle() const {
        return title;
    }

    void addAssignment(shared_ptr<Assignment> assignment) {
        assignments.push_back(assignment);
    }

    const vector<shared_ptr<Assignment>>& getAssignments() const {
        return assignments;
    }

    void displayInfo() const {
        cout << "[" << courseCode << "] " << title << " (Instruktur: " << instructor->getName() << ")" << endl;
        cout << "  Daftar Tugas:" << endl;
        if (assignments.empty()) {
            cout << "  - Belum ada tugas." << endl;
        }
        for (const auto& asg : assignments) {
            cout << "  - " << asg->getTitle() << " (Tenggat: " << asg->getDueDate() << ")" << endl;
        }
    }
};
