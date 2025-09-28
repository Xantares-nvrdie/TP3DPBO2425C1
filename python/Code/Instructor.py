from User import User
from abc import ABC, abstractmethod
class Instructor(User):
    # Konstruktor untuk membuat objek Instructor baru
    def __init__(self, userId, name, expertise):
        # Memanggil konstruktor dari kelas induk (User)
        super().__init__(userId, name)
        self.__expertise = expertise

    # Mengambil keahlian instruktur
    def getExpertise(self):
        return self.__expertise

    # Mengubah keahlian instruktur
    def setExpertise(self, expertise):
        self.__expertise = expertise

    # Menampilkan informasi detail instruktur (override dari kelas User)
    def displayInfo(self):
        print(f"Instructor: {self._name} ({self._id}) | Expertise: {self.__expertise}")
