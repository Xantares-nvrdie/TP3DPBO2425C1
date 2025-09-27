// File: Student.cpp
#pragma once
#include <iostream>
#include <string>

using namespace std;
#include "Assignment.cpp"
#include "Submission.cpp"
#include "User.cpp" 


// Kelas Student adalah turunan dari User
class Student : public User {
private:
    string major;
    vector<shared_ptr<Submission>> submissions;
public:
    Student(string id, string n, string maj) 
        : User(id, n), major(maj) {}

    string displayInfo() const override {
        return "ID: " + userId + ", Nama: " + name + ", Peran: Mahasiswa, Jurusan: " + major;
    }

    shared_ptr<Submission> submitAssignment(const Assignment& assignment) {
        auto submission = make_shared<Submission>(this, &assignment);
        submissions.push_back(submission);
        cout << "Mahasiswa " << name << " mengerjakan tugas '" << assignment.getTitle() << "'." << endl;
        return submission;
    }
    
    void viewGrades() const;
};
