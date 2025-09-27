from __future__ import annotations
from typing import TYPE_CHECKING

from User import User
from Assignment import Assignment

# Impor Course hanya untuk type checking
if TYPE_CHECKING:
    from Course import Course

class Instructor(User):
    def __init__(self, user_id, name, expertise):
        super().__init__(user_id, name)
        self._expertise = expertise

    def display_info(self):
        return f"{super().display_info()}, Peran: Instruktur, Keahlian: {self._expertise}"
    
    def create_assignment(self, course: 'Course', title: str, due_date: str):
        assignment = Assignment(title, due_date)
        course.add_assignment(assignment)
        print(f"[INFO] Instruktur {self._name} menambahkan tugas '{title}'.")
