// File: Submission.cpp
#pragma once
#include <string>

using namespace std;

// Forward declaration karena kelas didefinisikan nanti
class Student; 
class Assignment;

class Submission {
private:
    Student* student;
    string submissionDate;
    Assignment* assignment;
    int grade;

public:
    Submission() : student(nullptr), assignment(nullptr), grade(0) {}
    Submission(Student* s, string subDate, Assignment* a, int g)
        : student(s), submissionDate(subDate), assignment(a), grade(g) {}

    ~Submission() {}

    Student* getStudent() const { return student; }
    void setStudent(Student* s) { student = s; }

    string getSubmissionDate() const { return submissionDate; }
    void setSubmissionDate(string d) { submissionDate = d; }

    Assignment* getAssignment() const { return assignment; }
    void setAssignment(Assignment* a) { assignment = a; }

    int getGrade() const { return grade; }
    void setGrade(int g) { grade = g; }
};
