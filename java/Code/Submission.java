// Kelas untuk merepresentasikan data sebuah submission (pengumpulan tugas)
public class Submission {
    // Atribut
    private Student student;
    private String submissionDate;
    private Assignment assignment;
    private int grade;

    // Konstruktor untuk membuat objek Submission baru
    public Submission(Student student, String submissionDate, Assignment assignment, int grade) {
        this.student = student;
        this.submissionDate = submissionDate;
        this.assignment = assignment;
        this.grade = grade;
    }

    // Mengambil objek mahasiswa
    public Student getStudent() {
        return student;
    }

    // Mengambil tanggal submission
    public String getSubmissionDate() {
        return submissionDate;
    }

    // Mengambil objek tugas
    public Assignment getAssignment() {
        return assignment;
    }

    // Mengambil nilai
    public int getGrade() {
        return grade;
    }
    
    // Mengubah mahasiswa yang bersangkutan
    public void setStudent(Student student) {
        this.student = student;
    }

    // Mengubah tanggal submission
    public void setSubmissionDate(String submissionDate) {
        this.submissionDate = submissionDate;
    }

    // Mengubah tugas yang bersangkutan
    public void setAssignment(Assignment assignment) {
        this.assignment = assignment;
    }

    // Mengubah atau memberikan nilai
    public void setGrade(int grade) {
        this.grade = grade;
    }
}
