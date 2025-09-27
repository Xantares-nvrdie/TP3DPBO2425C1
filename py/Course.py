from Instructor import Instructor
from Assignment import Assignment

class Course:
    def __init__(self, code, title, instructor):
        self.__code = code
        self.__title = title
        self.__instructor = instructor
        self.__assignments = []

    def addAssignment(self, assignment):
        self.__assignments.append(assignment)

    def getAssignments(self):
        return self.__assignments

    def getInstructor(self):
        return self.__instructor

    def getTitle(self):
        return self.__title

    def getCourseCode(self):
        return self.__code
