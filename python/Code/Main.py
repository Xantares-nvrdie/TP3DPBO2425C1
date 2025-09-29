from Instructor import Instructor
from Student import Student
from Course import Course
from Assignment import Assignment
from Submission import Submission

def main():
    # Membuat beberapa objek Instructor
    ins1 = Instructor("I001", "Dr. Budi", "Computer Science")
    ins2 = Instructor("I002", "Dr. Yaya", "Artificial Intelligence")
    ins3 = Instructor("I003", "Dr. Citra", "Data Science")

    # Membuat beberapa objek Course dan menugaskan Instruktur
    course1 = Course("CS101", "Intro to Programming", ins1)
    course2 = Course("CS102", "Data Structure", ins1)
    course3 = Course("CS103", "Machine Learning", ins2)
    course4 = Course("CS104", "Database Systems", ins3)
    course5 = Course("CS105", "Web Development", ins1)

    # Membuat beberapa objek Assignment
    a1 = Assignment("Tugas 1 - Logic", "2025-10-10")
    a2 = Assignment("Tugas 2 - Looping", "2025-11-01")
    a3 = Assignment("Tugas 3 - AI Model", "2025-11-01")
    a4 = Assignment("Tugas 4 - ERD", "2025-12-01")
    a5 = Assignment("Tugas 5 - Final Project", "2025-12-15")

    # Menambahkan Assignment ke masing-masing Course
    course1.addAssignment(a1)
    course1.addAssignment(a2)
    course3.addAssignment(a3)
    course4.addAssignment(a4)
    course5.addAssignment(a5)

    # Membuat beberapa objek Student
    s1 = Student("S001", "Ani", "Informatics")
    s2 = Student("S002", "Arya", "Computer Science")
    s3 = Student("S003", "Budi", "Informatics")
    s4 = Student("S004", "Cindy", "Information Systems")

    # Membuat beberapa objek Submission dan mencatatnya untuk setiap Student
    sub1 = Submission(s1, "2025-10-05", a1, 90)
    s1.addSubmission(sub1)
    sub2 = Submission(s2, "2025-10-04", a3, 90)
    s2.addSubmission(sub2)
    sub3 = Submission(s3, "2025-10-08", a1, 85)
    s3.addSubmission(sub3)
    sub4 = Submission(s4, "2025-11-28", a4, 95)
    s4.addSubmission(sub4)
    sub5 = Submission(s1, "2025-10-30", a2, 88)
    s1.addSubmission(sub5)

    # Mengumpulkan semua data ke dalam List untuk mempermudah proses penampilan data
    users = [ins1, ins2, ins3, s1, s2, s3, s4]
    students = [s1, s2, s3, s4]
    courses = [course1, course2, course3, course4, course5]

    # Menampilkan detail semua pengguna (User)
    print("========================================")
    print("       DETAIL SEMUA PENGGUNA")
    print("========================================")

    if not users:
        print("Belum ada user.")
    else:
        for user in users:
            user.displayInfo()  # Memanggil metode secara polimorfik
    print("\n")

    # Menampilkan detail semua mata kuliah (Course) beserta tugasnya
    print("========================================")
    print("       DETAIL SEMUA MATA KULIAH")
    print("========================================")

    if not courses:
        print("Belum ada course.")
    else:
        for course in courses:
            print(f"Course: {course.getTitle()} ({course.getCourseCode()})")
            instructor = course.getInstructor()
            print(f"   Instructor: {instructor.getName()} - {instructor.getExpertise()}")
            print("   Assignments:")
            if not course.getAssignments():
                print("     - Belum ada tugas.")
            else:
                for assignment in course.getAssignments():
                    print(f"     - {assignment.getTitle()} (Due: {assignment.getDueDate()})")
            print()

    # Menampilkan detail semua submission yang dikelompokkan per mahasiswa
    print("========================================")
    print("     DETAIL SEMUA SUBMISSION MAHASISWA")
    print("========================================")
    if not students:
        print("Belum ada student.")
    else:
        for student in students:
            print(f"Submissions by {student.getName()} ({student.getUserId()}):")
            if not student.getSubmissions():
                print("   - Belum ada submission.")
            else:
                for submission in student.getSubmissions():
                    assignment = submission.getAssignment()
                    print(f"   - Tugas: {assignment.getTitle()} | Tanggal: {submission.getSubmissionDate()} | Nilai: {submission.getGrade()}")
            print()

if __name__ == "__main__":
    main()
