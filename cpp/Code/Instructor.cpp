#pragma once //mencegah multiple inclusion
#include <string>
#include <iostream>
#include "User.cpp" 

using namespace std;

//class turunan dari kelas abstrak user
class Instructor : public User {
private:
    //atribut
    string expertise;

public:
    //constructor
    Instructor() {}
    Instructor(string id, string nm, string exp) : User(id, nm), expertise(exp) {}

    //destructor
    ~Instructor() override {}

    //getter dan setter expertise
    string getExpertise() const { return expertise; }
    void setExpertise(string exp) { expertise = exp; }

    //polymorphic display info
    void displayInfo() const override {
        cout << "Instructor: " << name << " (ID: " << userId
            << ") | Expertise: " << expertise << endl;
    }
};
