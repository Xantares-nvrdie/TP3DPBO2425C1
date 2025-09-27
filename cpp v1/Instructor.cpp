// File: Instructor.cpp
#pragma once
#include <string>
#include "User.cpp" 
using namespace std;

// Forward declaration karena Course didefinisikan nanti
class Course; 

// Kelas Instructor adalah turunan dari User
class Instructor : public User {
private:
    string expertise;
public:
    Instructor(string id, string n, string exp) 
        : User(id, n), expertise(exp) {}

    string displayInfo() const override {
        return "ID: " + userId + ", Nama: " + name + ", Peran: Instruktur, Keahlian: " + expertise;
    }

    // Definisi metode ini perlu definisi lengkap Course, jadi kita letakkan di main.cpp atau setelah Course.cpp di-include
    void createAssignment(Course& course, const string& title, const string& dueDate);
};
