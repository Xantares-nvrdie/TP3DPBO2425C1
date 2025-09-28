class Assignment:
    # Konstruktor untuk membuat objek Assignment baru
    def __init__(self, title, dueDate):
        self.__title = title
        self.__dueDate = dueDate

    # Mengambil judul tugas
    def getTitle(self):
        return self.__title

    # Mengambil tanggal deadline
    def getDueDate(self):
        return self.__dueDate

    # Mengubah judul tugas
    def setTitle(self, title):
        self.__title = title

    # Mengubah tanggal deadline
    def setDueDate(self, dueDate):
        self.__dueDate = dueDate
