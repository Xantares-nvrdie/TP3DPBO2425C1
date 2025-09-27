from abc import ABC, abstractmethod

class User(ABC):
    def __init__(self, userId, name):
        self._id = userId
        self._name = name

    @abstractmethod
    def displayInfo(self):
        pass

    def getUserId(self):
        return self._id

    def getName(self):
        return self._name
