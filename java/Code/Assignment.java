public class Assignment {
    //atribut
    private String title;
    private String dueDate;

    //constructor
    public Assignment(String title, String dueDate) {
        this.title = title;
        this.dueDate = dueDate;
    }

    //getter title
    public String getTitle() {
        return title;
    }

    //getter due date
    public String getDueDate() {
        return dueDate;
    }

    //setter title
    public void setTitle(String title) {
        this.title = title;
    }
    
    //setter due date
    public void setDueDate(String dueDate) {
        this.dueDate = dueDate;
    }
}
