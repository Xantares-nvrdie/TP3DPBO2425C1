from abc import ABC, abstractmethod

# Kelas abstrak sebagai dasar untuk semua jenis pengguna (User)
class User(ABC):
    # Konstruktor untuk membuat objek User
    def __init__(self, userId, name):
        self._id = userId
        self._name = name

    # Metode abstrak yang wajib diimplementasikan oleh kelas turunan
    @abstractmethod
    def displayInfo(self):
        pass

    # --- Getters ---
    # Mengambil ID pengguna
    def getUserId(self):
        return self._id

    # Mengambil nama pengguna
    def getName(self):
        return self._name

    # --- Setters ---
    # Mengubah ID pengguna
    def setUserId(self, userId):
        self._id = userId

    # Mengubah nama pengguna
    def setName(self, name):
        self._name = name
