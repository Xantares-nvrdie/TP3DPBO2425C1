#include <iostream>
#include <string>
#include <vector>

// Mengimpor semua kelas yang diperlukan
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
    Instructor ins3("I003", "Dr. Citra", "Data Science"); 

    // Buat Course
    Course course1("CS101", "Intro to Programming", &ins1);
    Course course2("CS102", "Data Structure", &ins1);
    Course course3("CS103", "Machine Learning", &ins2);
    Course course4("CS104", "Database Systems", &ins3); 
    Course course5("CS105", "Web Development", &ins1); 

    // Buat Assignment
    Assignment* a1 = new Assignment("Tugas 1 - Logic", "2025-10-10");
    Assignment* a2 = new Assignment("Tugas 2 - Looping", "2025-11-01");
    Assignment* a3 = new Assignment("Tugas 3 - AI Model", "2025-11-01");
    Assignment* a4 = new Assignment("Tugas 4 - ERD", "2025-12-01"); 
    Assignment* a5 = new Assignment("Tugas 5 - Final Project", "2025-12-15"); 
    
    // Tambah Assignment ke Course
    course1.addAssignment(a1);
    course1.addAssignment(a2);
    course3.addAssignment(a3);
    course4.addAssignment(a4);
    course5.addAssignment(a5);

    // Buat Student
    Student s1("S001", "Ani", "Informatics");
    Student s2("S002", "Arya", "Computer Science");
    Student s3("S003", "Budi", "Informatics"); 
    Student s4("S004", "Cindy", "Information Systems"); 

    // Buat Submission
    Submission* sub1 = new Submission(&s1, "2025-10-05", a1, 90);
    s1.addSubmission(sub1);
    Submission* sub2 = new Submission(&s2, "2025-10-04", a3, 90);
    s2.addSubmission(sub2);
    Submission* sub3 = new Submission(&s3, "2025-10-08", a1, 85); 
    s3.addSubmission(sub3);
    Submission* sub4 = new Submission(&s4, "2025-11-28", a4, 95); 
    s4.addSubmission(sub4);
    Submission* sub5 = new Submission(&s1, "2025-10-30", a2, 88);
    s1.addSubmission(sub5);
    

    // Kumpulan Data untuk Ditampilkan
    vector<User*> users = {&ins1, &ins2, &ins3, &s1, &s2, &s3, &s4};
    vector<Student*> students = {&s1, &s2, &s3, &s4};
    vector<Instructor*> instructors = {&ins1, &ins2, &ins3};
    vector<Course*> courses = {&course1, &course2, &course3, &course4, &course5};


    // Tampilkan Detail Semua Pengguna
    cout << "========================================" << endl;
    cout << "       DETAIL SEMUA PENGGUNA" << endl;
    cout << "========================================" << endl;
    if (users.empty()) {
        cout << "Belum ada user." << endl;
    } else {
        for (auto u : users) {
            u->displayInfo(); // Polymorphic call
        }
    }
    cout << "\n";

    // Tampilkan Detail Semua Mata Kuliah
    cout << "========================================" << endl;
    cout << "       DETAIL SEMUA MATA KULIAH" << endl;
    cout << "========================================" << endl;
    if (courses.empty()) {
        cout << "Belum ada mata kuliah." << endl;
    } else {
        for (const auto c : courses) {
            cout << "Course: " << c->getTitle() << " (" << c->getCourseCode() << ")" << endl;
            cout << "   Instructor: " << c->getInstructor()->getName()
                << " - " << c->getInstructor()->getExpertise() << endl;
            cout << "   Assignments:" << endl;
            if (c->getAssignments().empty()) {
                cout << "     - Belum ada tugas." << endl;
            } else {
                for (const auto ass : c->getAssignments()) {
                    cout << "     - " << ass->getTitle() << " (Due: " << ass->getDueDate() << ")" << endl;
                }
            }
            cout << endl;
        }
    }

    // Tampilkan semua detail submission mahasiswa
    cout << "========================================" << endl;
    cout << "     DETAIL SEMUA SUBMISSION MAHASISWA" << endl;
    cout << "========================================" << endl;
    if (students.empty()) {
        cout << "Belum ada mahasiswa." << endl;
    } else {
        for (const auto s : students) {
            cout << "Submissions by " << s->getName() << " (" << s->getUserId() << "):" << endl;
            if (s->getSubmissions().empty()) {
                cout << "   - Belum ada submission." << endl;
            } else {
                for (const auto sub : s->getSubmissions()) {
                    cout << "   - Tugas: " << sub->getAssignment()->getTitle()
                        << " | Tanggal: " << sub->getSubmissionDate()
                        << " | Nilai: " << sub->getGrade() << endl;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
