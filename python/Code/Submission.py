from Student import Student
from Assignment import Assignment

# Kelas untuk merepresentasikan data sebuah submission (pengumpulan tugas)
class Submission:
    # Konstruktor untuk membuat objek Submission baru
    def __init__(self, student, date, assignment, grade):
        self.__student = student
        self.__date = date
        self.__assignment = assignment
        self.__grade = grade

    # --- Getters ---
    # Mengambil objek mahasiswa
    def getStudent(self):
        return self.__student
        
    # Mengambil objek tugas
    def getAssignment(self):
        return self.__assignment

    # Mengambil tanggal submission
    def getSubmissionDate(self):
        return self.__date

    # Mengambil nilai
    def getGrade(self):
        return self.__grade

    # --- Setters ---
    # Mengubah mahasiswa yang bersangkutan
    def setStudent(self, student):
        self.__student = student
        
    # Mengubah tugas yang bersangkutan
    def setAssignment(self, assignment):
        self.__assignment = assignment

    # Mengubah tanggal submission
    def setSubmissionDate(self, date):
        self.__date = date

    # Mengubah atau memberikan nilai
    def setGrade(self, grade):
        self.__grade = grade
