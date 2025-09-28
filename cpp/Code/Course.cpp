#pragma once //untuk mencegah multiple inclusion
#include <string>
#include <vector>
//untuk mengakses kelas Instructor
#include "Instructor.cpp"
//untuk mengakses kelas Assignment
#include "Assignment.cpp"

using namespace std;

class Course {
private:
    // Atribut
    string courseCode;
    string title;
    Instructor* instructor;
    vector<Assignment*> assignments;

public:
    // Konstruktor
    Course() : instructor(nullptr) {}
    Course(string code, string t, Instructor* ins)
        : courseCode(code), title(t), instructor(ins) {}

    // Destruktor
    ~Course() {
        // Menghapus semua assignment yang dialokasikan secara dinamis
        for (auto ass : assignments) {
            delete ass;
        }
        assignments.clear();
    }

    //getter dan setter untuk course code
    string getCourseCode() const { return courseCode; }
    void setCourseCode(string code) { courseCode = code; }

    //getter dan setter untuk title
    string getTitle() const { return title; }
    void setTitle(string t) { title = t; }

    //getter dan setter untuk instructor
    Instructor* getInstructor() const { return instructor; }
    void setInstructor(Instructor* ins) { instructor = ins; }

    //getter dan setter untuk assignment
    void addAssignment(Assignment* ass) { assignments.push_back(ass); }
    vector<Assignment*> getAssignments() const { return assignments; }
};
