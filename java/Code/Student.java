import java.util.ArrayList;
import java.util.List;

// Kelas turunan dari User untuk merepresentasikan data seorang mahasiswa (Student)
public class Student extends User {
    // Atribut
    private String major; // Jurusan mahasiswa
    private List<Submission> submissions; // Daftar submission yang telah dikumpulkan

    // Konstruktor untuk membuat objek Student baru
    public Student(String userId, String name, String major) {
        // Memanggil konstruktor dari kelas induk (User)
        super(userId, name);
        this.major = major;
        this.submissions = new ArrayList<>(); // Inisialisasi list kosong
    }

    // Mengambil jurusan mahasiswa
    public String getMajor() {
        return major;
    }
    
    // Mengambil daftar submission mahasiswa
    public List<Submission> getSubmissions() {
        return submissions;
    }
    
    // Mengubah jurusan mahasiswa
    public void setMajor(String major) {
        this.major = major;
    }

    // Menambahkan submission baru ke dalam list
    public void addSubmission(Submission submission) {
        this.submissions.add(submission);
    }

    // Menampilkan informasi detail mahasiswa (override dari kelas User)
    @Override
    public void displayInfo() {
        System.out.println("Student ID: " + this.userId + ", Name: " + this.name + ", Major: " + this.major);
    }
}
