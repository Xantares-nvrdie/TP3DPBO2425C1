from Instructor import Instructor
from Assignment import Assignment

class Course:
    # Konstruktor untuk membuat objek Course baru
    def __init__(self, code, title, instructor):
        self.__code = code
        self.__title = title
        self.__instructor = instructor
        self.__assignments = []

    # Menambahkan tugas baru ke dalam list
    def addAssignment(self, assignment):
        self.__assignments.append(assignment)

    # Mengambil daftar tugas
    def getAssignments(self):
        return self.__assignments

    # Mengambil objek instruktur
    def getInstructor(self):
        return self.__instructor

    # Mengambil judul mata kuliah
    def getTitle(self):
        return self.__title

    # Mengambil kode mata kuliah
    def getCourseCode(self):
        return self.__code

    # Mengubah kode mata kuliah
    def setCourseCode(self, code):
        self.__code = code
    
    # Mengubah judul mata kuliah
    def setTitle(self, title):
        self.__title = title

    # Mengganti instruktur mata kuliah
    def setInstructor(self, instructor):
        self.__instructor = instructor
