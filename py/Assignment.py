class Assignment:
    def __init__(self, title, due_date):
        self._title = title
        self._due_date = due_date
        
    def get_title(self):
        return self._title
