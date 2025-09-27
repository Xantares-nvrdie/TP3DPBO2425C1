from User import User
from abc import ABC, abstractmethod
class Student(User):
    def __init__(self, userId, name, major):
        super().__init__(userId, name)
        self.__major = major          # private
        self.__submissions = []       # private

    def addSubmission(self, submission):
        self.__submissions.append(submission)

    def getSubmissions(self):
        return self.__submissions

    def getMajor(self):
        return self.__major

    def displayInfo(self):
        print(f"Student: {self._name} ({self._id}) | Major: {self.__major}")
