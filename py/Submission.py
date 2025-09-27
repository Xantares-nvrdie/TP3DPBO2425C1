# Kita impor 'annotations' untuk mengatasi circular dependency saat type hinting
from __future__ import annotations 
from datetime import date
from typing import TYPE_CHECKING

# Impor hanya untuk type hinting agar tidak terjadi error circular import
if TYPE_CHECKING:
    from Student import Student
    from Assignment import Assignment

class Submission:
    def __init__(self, student: 'Student', assignment: 'Assignment', submission_date: date):
        self.student = student
        self.assignment = assignment
        self.submission_date = submission_date
        self.grade = None

    def set_grade(self, grade: int):
        self.grade = grade
        
    def get_grade_str(self) -> str:
        return str(self.grade) if self.grade is not None else "BelumDinilai"
