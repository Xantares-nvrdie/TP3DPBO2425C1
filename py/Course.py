from __future__ import annotations
from typing import TYPE_CHECKING, List

# Impor hanya untuk type checking
if TYPE_CHECKING:
    from Instructor import Instructor
    from Assignment import Assignment

    
class Course:
    def __init__(self, course_code: str, title: str, instructor: 'Instructor'):
        self._course_code = course_code
        self._title = title
        self._instructor = instructor
        self._assignments: List['Assignment'] = []

    def get_title(self) -> str:
        return self._title

    def add_assignment(self, assignment: 'Assignment'):
        self._assignments.append(assignment)

    def get_assignments(self) -> List['Assignment']:
        return self._assignments

    def display_info(self):
        print(f"Detail Kursus: [{self._course_code}] {self._title}")
        print(f"Instruktur    : {self._instructor.get_name()}")
        print("Daftar Tugas  :")
        if not self._assignments:
            print("  -> Belum ada tugas.")
        else:
            for assignment in self._assignments:
                print(f"  - {assignment.get_title()} (Tenggat: {assignment._due_date})")
