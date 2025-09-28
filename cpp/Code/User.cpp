#pragma once //mencegah multiple inclusion
#include <string>

using namespace std;

//kelas abstrak
class User {
protected:
    //atribut
    string userId;
    string name;

public:
    //constructor
    User() {}
    User(string id, string nm) : userId(id), name(nm) {}

    //destructor
    virtual ~User() {} // destructor virtual

    //getter dan setter user id
    string getUserId() const { return userId; }
    void setUserId(string id) { userId = id; }

    //getter dan setter name
    string getName() const { return name; }
    void setName(string nm) { name = nm; }

    // pure virtual function -> bikin User jadi abstrak
    virtual void displayInfo() const = 0;
};
