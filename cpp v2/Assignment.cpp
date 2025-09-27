// File: Assignment.cpp
#pragma once
#include <string>

using namespace std;

class Assignment {
private:
    string title;
    string dueDate;

public:
    Assignment() {}
    Assignment(string t, string d) : title(t), dueDate(d) {}

    ~Assignment() {}

    string getTitle() const { return title; }
    void setTitle(string t) { title = t; }

    string getDueDate() const { return dueDate; }
    void setDueDate(string d) { dueDate = d; }
};
