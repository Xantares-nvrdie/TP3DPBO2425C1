class Assignment:
    def __init__(self, title, dueDate):
        self.__title = title
        self.__dueDate = dueDate

    def getTitle(self):
        return self.__title

    def getDueDate(self):
        return self.__dueDate
