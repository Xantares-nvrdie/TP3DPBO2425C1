#pragma once //untuk mencegah multiple inclusion
#include <string>

using namespace std;

// Forward declaration karena kelas didefinisikan nanti
class Student; 
class Assignment;

class Submission {
private:
    // Atribut
    Student* student;
    string submissionDate;
    Assignment* assignment;
    int grade;

public:
    // Konstruktor
    Submission() : student(nullptr), assignment(nullptr), grade(0) {}
    Submission(Student* s, string subDate, Assignment* a, int g)
        : student(s), submissionDate(subDate), assignment(a), grade(g) {}

    // Destruktor
    ~Submission() {}

    // getter dan setter student
    Student* getStudent() const { return student; }
    void setStudent(Student* s) { student = s; }

    // getter dan setter submissionDate
    string getSubmissionDate() const { return submissionDate; }
    void setSubmissionDate(string d) { submissionDate = d; }

    // getter dan setter assignment
    Assignment* getAssignment() const { return assignment; }
    void setAssignment(Assignment* a) { assignment = a; }

    // getter dan setter grade
    int getGrade() const { return grade; }
    void setGrade(int g) { grade = g; }
};
