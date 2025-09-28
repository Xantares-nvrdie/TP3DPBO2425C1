import java.util.ArrayList;
import java.util.List;

// Kelas untuk merepresentasikan data sebuah mata kuliah (Course)
public class Course {
    // Atribut
    private String courseCode;
    private String title;
    private Instructor instructor;
    private List<Assignment> assignments;

    // Konstruktor untuk membuat objek Course baru
    public Course(String courseCode, String title, Instructor instructor) {
        this.courseCode = courseCode;
        this.title = title;
        this.instructor = instructor;
        this.assignments = new ArrayList<>();
    }

    // Mengambil kode mata kuliah
    public String getCourseCode() {
        return courseCode;
    }

    // Mengambil judul mata kuliah
    public String getTitle() {
        return title;
    }

    // Mengambil objek instruktur
    public Instructor getInstructor() {
        return instructor;
    }

    // Mengambil daftar tugas
    public List<Assignment> getAssignments() {
        return assignments;
    }

    // Mengubah kode mata kuliah
    public void setCourseCode(String courseCode) {
        this.courseCode = courseCode;
    }

    // Mengubah judul mata kuliah
    public void setTitle(String title) {
        this.title = title;
    }

    // Mengganti instruktur mata kuliah
    public void setInstructor(Instructor instructor) {
        this.instructor = instructor;
    }

    // Menambahkan tugas baru ke dalam list
    public void addAssignment(Assignment assignment) {
        this.assignments.add(assignment);
    }
}
