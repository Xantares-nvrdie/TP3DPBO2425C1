// File: Instructor.cpp
#pragma once
#include <string>
#include <iostream>
#include "User.cpp" 
using namespace std;

class Instructor : public User {
private:
    string expertise;

public:
    Instructor() {}
    Instructor(string id, string nm, string exp) : User(id, nm), expertise(exp) {}

    ~Instructor() override {}

    string getExpertise() const { return expertise; }
    void setExpertise(string exp) { expertise = exp; }

    void displayInfo() const override {
        cout << "Instructor: " << name << " (ID: " << userId
            << ") | Expertise: " << expertise << endl;
    }
};
