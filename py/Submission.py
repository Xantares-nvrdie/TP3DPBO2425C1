from Student import Student
from Assignment import Assignment

class Submission:
    def __init__(self, student, date, assignment, grade):
        self.__student = student
        self.__date = date
        self.__assignment = assignment
        self.__grade = grade

    def getAssignment(self):
        return self.__assignment

    def getSubmissionDate(self):
        return self.__date

    def getGrade(self):
        return self.__grade
