// File: Student.cpp
#pragma once
#include <iostream>
#include <string>

using namespace std;
#include "Submission.cpp"
#include "User.cpp" 


class Student : public User {
private:
    string major;
    vector<Submission*> submissions;

public:
    Student() {}
    Student(string id, string nm, string mj) : User(id, nm), major(mj) {}

    ~Student() override {
        for (auto sub : submissions) {
            delete sub;
        }
        submissions.clear();
    }

    string getMajor() const { return major; }
    void setMajor(string mj) { major = mj; }

    void addSubmission(Submission* sub) { submissions.push_back(sub); }
    vector<Submission*> getSubmissions() const { return submissions; }

    void displayInfo() const override {
        cout << "Student: " << name << " (ID: " << userId
            << ") | Major: " << major << endl;
    }
};
