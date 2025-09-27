// File: Assignment.cpp
#pragma once
#include <string>

using namespace std;

class Assignment {
private:
    string title;
    string dueDate;
public:
    Assignment(string t, string dd) : title(t), dueDate(dd) {}
    string getTitle() const { return title; }
    string getDueDate() const { return dueDate; }
};
