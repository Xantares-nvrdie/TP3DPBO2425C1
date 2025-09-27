from abc import ABC, abstractmethod

class User(ABC):
    def __init__(self, user_id, name):
        self._user_id = user_id
        self._name = name

    def get_name(self):
        return self._name

    @abstractmethod
    def display_info(self):
        return f"ID: {self._user_id}, Nama: {self._name}"
