#pragma once //mencegah multiple inclusion
#include <iostream>
#include <string>

using namespace std;

#include "Submission.cpp"
#include "User.cpp" 

//class turunan dari kelas abstrak user
class Student : public User {
private:
    //atribut
    string major;
    vector<Submission*> submissions;

public:
    //constructor
    Student() {}
    Student(string id, string nm, string mj) : User(id, nm), major(mj) {}

    //destructor
    ~Student() override {
        // Menghapus semua submission yang dialokasikan secara dinamis
        for (auto sub : submissions) {
            delete sub;
        }
        submissions.clear();
    }

    //getter dan setter major
    string getMajor() const { return major; }
    void setMajor(string mj) { major = mj; }

    //getter dan setter submissions
    void addSubmission(Submission* sub) { submissions.push_back(sub); }
    vector<Submission*> getSubmissions() const { return submissions; }

    //polymorphic display info
    void displayInfo() const override {
        cout << "Student: " << name << " (ID: " << userId
            << ") | Major: " << major << endl;
    }
};
