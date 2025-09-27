
from Instructor import Instructor
from Student import Student
from Course import Course

def print_header(title):
    """Fungsi bantuan untuk mencetak header yang rapi."""
    print("\n" + "=" * 50)
    print(f"| {title.upper():^46} |")
    print("=" * 50)


if __name__ == "__main__":
    instructor1 = Instructor("INS001", "Dr. Elara", "Machine Learning")
    student1 = Student("STU01", "Beni", "Ilmu Komputer")
    student2 = Student("STU02", "Sari", "Ilmu Data")
    
    courses = [Course("CS101", "Pengantar AI", instructor1)]
    students = [student1, student2]

    print_header("Setup Kursus dan Tugas")
    courses[0].display_info()
    instructor1.create_assignment(courses[0], "Analisis Regresi", "2025-10-10")
    instructor1.create_assignment(courses[0], "Klasifikasi Gambar", "2025-10-20")

    print_header("Aktivitas Mahasiswa")
    ai_assignments = courses[0].get_assignments()
    submission_beni = student1.submit_assignment(ai_assignments[0])
    submission_sari_1 = student2.submit_assignment(ai_assignments[0])
    submission_sari_2 = student2.submit_assignment(ai_assignments[1])
    
    print_header("Proses Penilaian")
    print(f"[INFO] Instruktur {instructor1.get_name()} menilai tugas...")
    submission_beni.set_grade(95)
    submission_sari_1.set_grade(88)

    print_header("Laporan Nilai Akhir")
    for student in students:
        student.view_grades()
