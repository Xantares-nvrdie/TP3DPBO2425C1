#pragma once //untuk mencegah multiple inclusion
#include <string>

using namespace std;

class Assignment {
private:
    // Atribut
    string title;
    string dueDate;

public:
    // Konstruktor
    Assignment() {}
    Assignment(string t, string d) : title(t), dueDate(d) {}

    // Destruktor
    ~Assignment() {}

    // getter untuk title dan dueDate
    string getTitle() const { return title; }
    void setTitle(string t) { title = t; }

    string getDueDate() const { return dueDate; }
    void setDueDate(string d) { dueDate = d; }
};
