// File: User.cpp
#pragma once // SANGAT PENTING untuk mencegah error inklusi ganda
#include <string>

using namespace std;

// Kelas Abstrak sebagai dasar
class User {
protected:
    string userId;
    string name;
public:
    User(string id, string n) : userId(id), name(n) {}
    virtual ~User() = default;
    string getName() const { return name; }
    virtual string displayInfo() const = 0;
};
