// File: Course.cpp
#pragma once
#include <string>

using namespace std;
#include "Instructor.cpp"
#include <vector>
#include "Assignment.cpp"

class Course {
private:
    string courseCode;
    string title;
    Instructor* instructor;
    vector<Assignment*> assignments;

public:
    Course() : instructor(nullptr) {}
    Course(string code, string t, Instructor* ins)
        : courseCode(code), title(t), instructor(ins) {}

    ~Course() {
        for (auto ass : assignments) {
            delete ass;
        }
        assignments.clear();
    }

    string getCourseCode() const { return courseCode; }
    void setCourseCode(string code) { courseCode = code; }

    string getTitle() const { return title; }
    void setTitle(string t) { title = t; }

    Instructor* getInstructor() const { return instructor; }
    void setInstructor(Instructor* ins) { instructor = ins; }

    void addAssignment(Assignment* ass) { assignments.push_back(ass); }
    vector<Assignment*> getAssignments() const { return assignments; }
};
