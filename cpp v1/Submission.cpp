// File: Submission.cpp
#pragma once
#include <string>

using namespace std;

// Forward declaration karena kelas Student didefinisikan nanti
class Student; 
// Forward declaration karena kelas Assignment didefinisikan di file lain
class Assignment;

class Submission {
private:
    const Student* student;
    const Assignment* assignment;
    int grade;
    bool isGraded;
public:
    Submission(const Student* s, const Assignment* a) 
        : student(s), assignment(a), grade(0), isGraded(false) {}

    void setGrade(int g) {
        grade = g;
        isGraded = true;
    }

    string getGradeStr() const {
        return isGraded ? to_string(grade) : "Belum Dinilai";
    }

    const Assignment* getAssignment() const {
        return assignment;
    }
};
