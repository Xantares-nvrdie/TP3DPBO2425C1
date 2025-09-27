from User import User
from abc import ABC, abstractmethod
class Instructor(User):
    def __init__(self, userId, name, expertise):
        super().__init__(userId, name)
        self.__expertise = expertise   # private

    def getExpertise(self):
        return self.__expertise

    def displayInfo(self):
        print(f"Instructor: {self._name} ({self._id}) | Expertise: {self.__expertise}")
