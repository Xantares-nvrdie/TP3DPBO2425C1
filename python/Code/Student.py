from User import User
from abc import ABC, abstractmethod

# Kelas turunan dari User untuk merepresentasikan data seorang mahasiswa (Student)
class Student(User):
    # Konstruktor untuk membuat objek Student baru
    def __init__(self, userId, name, major):
        # Memanggil konstruktor dari kelas induk (User)
        super().__init__(userId, name)
        self.__major = major 
        self.__submissions = []

    # Menambahkan submission baru ke dalam list
    def addSubmission(self, submission):
        self.__submissions.append(submission)

    # Mengambil daftar submission
    def getSubmissions(self):
        return self.__submissions

    # Mengambil jurusan mahasiswa
    def getMajor(self):
        return self.__major

    # Mengubah jurusan mahasiswa
    def setMajor(self, major):
        self.__major = major

    # Menampilkan informasi detail mahasiswa (override dari kelas User)
    def displayInfo(self):
        print(f"Student: {self._name} ({self._id}) | Major: {self.__major}")
