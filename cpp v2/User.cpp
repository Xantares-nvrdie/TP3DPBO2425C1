#pragma once // SANGAT PENTING untuk mencegah error inklusi ganda
#include <string>

using namespace std;
class User {
protected:
    string userId;
    string name;

public:
    User() {}
    User(string id, string nm) : userId(id), name(nm) {}

    virtual ~User() {} // destructor virtual

    string getUserId() const { return userId; }
    void setUserId(string id) { userId = id; }

    string getName() const { return name; }
    void setName(string nm) { name = nm; }

    // pure virtual function -> bikin User jadi abstrak
    virtual void displayInfo() const = 0;
};
