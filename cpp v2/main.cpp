// File: main.cpp
#include <iostream>
#include <string>
#include <vector>

#include "User.cpp"
#include "Instructor.cpp"
#include "Student.cpp"
#include "Course.cpp"
#include "Assignment.cpp"
#include "Submission.cpp"

using namespace std;
int main() {
    // Buat Instructor
    Instructor ins1("I001", "Dr. Budi", "Computer Science");
    Instructor ins2("I002", "Dr. Yaya", "Artificial Intelligence");

    // Buat Course
    Course course1("CS101", "Intro to Programming", &ins1);
    Course course2("CS102", "Data Structure", &ins1);
    Course course3("CS103", "Machine Learning", &ins2);

    // Buat Assignment
    Assignment* a1 = new Assignment("Tugas 1", "2025-10-10");
    Assignment* a2 = new Assignment("Tugas 2", "2025-11-01");
    Assignment* a3 = new Assignment("Tugas 3", "2025-11-01");
    course1.addAssignment(a1);
    course1.addAssignment(a2);
    course3.addAssignment(a3);

    // Buat Student
    Student s1("S001", "Ani", "Informatics");
    Student s2("S002", "Arya", "Computer Science");

    // Buat Submission
    Submission* sub1 = new Submission(&s1, "2025-10-05", a1, 90);
    s1.addSubmission(sub1);
    Submission* sub2 = new Submission(&s2, "2025-10-04", a3, 90);
    s2.addSubmission(sub2);


    // Polymorphism: simpan pointer User*
    vector<User*> users;
    users.push_back(&ins1);
    users.push_back(&s1);
    users.push_back(&ins2);
    users.push_back(&s2);

    vector<Student*> students;
    students.push_back(&s1);
    students.push_back(&s2);

    vector<Instructor*> instructors;
    instructors.push_back(&ins1);
    instructors.push_back(&ins2);

    cout << "=== User Info ===" << endl;
    for (auto u : users) {
        u->displayInfo(); // polymorphic call
    }
    cout << endl;
    cout << "=== Student Info ===" << endl;
    for (auto s : students) {
        s->displayInfo(); // polymorphic call
    }
    cout << endl;

    cout << "=== Instructor Info ===" << endl;
    for (auto i : instructors) {
        i->displayInfo(); // polymorphic call
    }
    cout << endl;

    cout << "\n=== Course Info ===" << endl;
    cout << "Course: " << course1.getTitle() << " (" << course1.getCourseCode() << ")" << endl;
    cout << "Instructor: " << course1.getInstructor()->getName()
        << " - " << course1.getInstructor()->getExpertise() << endl;

    cout << "\nAssignments:" << endl;
    for (auto ass : course1.getAssignments()) {
        cout << "- " << ass->getTitle() << " (Due: " << ass->getDueDate() << ")" << endl;
    }

    cout << "\nSubmissions by " << s1.getName() << ":" << endl;
    for (auto sub : s1.getSubmissions()) {
        cout << "Submitted: " << sub->getAssignment()->getTitle()
            << " on " << sub->getSubmissionDate()
            << " | Grade: " << sub->getGrade() << endl;
    }

    return 0;
}
