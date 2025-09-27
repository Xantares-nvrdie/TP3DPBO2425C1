// File: main.cpp
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

// ---- PENTING: URUTAN INCLUDE HARUS BENAR ----
// 1. Sertakan kelas dasar dan kelas sederhana
#include "User.cpp"
#include "Assignment.cpp"

// 2. Sertakan kelas-kelas yang saling bergantung, pastikan forward declaration sudah digunakan
#include "Submission.cpp"
#include "Student.cpp"
#include "Instructor.cpp"
#include "Course.cpp"

// Karena createAssignment butuh definisi lengkap Course, kita implementasikan di sini
void Instructor::createAssignment(Course& course, const string& title, const string& dueDate) {
    auto assignment = make_shared<Assignment>(title, dueDate);
    course.addAssignment(assignment);
    cout << "Instruktur " << name << " menambahkan tugas '" << title << "' ke kursus '" << course.getTitle() << "'." << endl;
}

// Perbaikan untuk Student::viewGrades agar bisa memanggil getTitle() dari Assignment
void Student::viewGrades() const {
    cout << "\n--- Laporan Nilai untuk " << name << " ---" << endl;
    if (submissions.empty()) {
        cout << "Belum ada tugas yang dikerjakan." << endl;
        return;
    }
    for (const auto& sub : submissions) {
        cout << "  - Tugas: " << sub->getAssignment()->getTitle() 
            << ", Nilai: " << sub->getGradeStr() << endl;
    }
}


int main() {
    // Inisialisasi Objek
    Instructor instructor1("INS001", "Dr. Elara", "Machine Learning");
    Student student1("STU01", "Beni", "Ilmu Komputer");
    Student student2("STU02", "Sari", "Ilmu Data");

    // Mengelola objek utama
    vector<Course> courses;
    courses.emplace_back("CS101", "Pengantar AI", &instructor1);
    
    vector<Student> students;
    students.push_back(student1);
    students.push_back(student2);

    cout << "--- Setup Kursus dan Tugas ---" << endl;
    courses[0].displayInfo();
    instructor1.createAssignment(courses[0], "Analisis Regresi", "2025-10-10");
    instructor1.createAssignment(courses[0], "Klasifikasi Gambar", "2025-10-20");
    cout << endl;
    courses[0].displayInfo();

    cout << "\n--- Aktivitas Mahasiswa ---" << endl;
    const auto& aiAssignments = courses[0].getAssignments();
    
    auto submissionBeni = students[0].submitAssignment(*aiAssignments[0]);
    auto submissionSari1 = students[1].submitAssignment(*aiAssignments[0]);
    auto submissionSari2 = students[1].submitAssignment(*aiAssignments[1]);
    
    cout << "\n--- Proses Penilaian oleh Instruktur ---" << endl;
    cout << "Instruktur " << instructor1.getName() << " menilai tugas..." << endl;
    submissionBeni->setGrade(95);
    submissionSari1->setGrade(88);

    // Lihat hasil akhir
    for (const auto& student : students) {
        student.viewGrades();
    }

    return 0;
}
