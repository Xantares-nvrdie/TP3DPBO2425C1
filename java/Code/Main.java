import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Membuat beberapa objek Instructor
        Instructor ins1 = new Instructor("I001", "Dr. Budi", "Computer Science");
        Instructor ins2 = new Instructor("I002", "Dr. Yaya", "Artificial Intelligence");
        Instructor ins3 = new Instructor("I003", "Dr. Citra", "Data Science");

        // Membuat beberapa objek Course dan menugaskan Instruktur
        Course course1 = new Course("CS101", "Intro to Programming", ins1);
        Course course2 = new Course("CS102", "Data Structure", ins1);
        Course course3 = new Course("CS103", "Machine Learning", ins2);
        Course course4 = new Course("CS104", "Database Systems", ins3);
        Course course5 = new Course("CS105", "Web Development", ins1);

        // Membuat beberapa objek Assignment
        Assignment a1 = new Assignment("Tugas 1 - Logic", "2025-10-10");
        Assignment a2 = new Assignment("Tugas 2 - Looping", "2025-11-01");
        Assignment a3 = new Assignment("Tugas 3 - AI Model", "2025-11-01");
        Assignment a4 = new Assignment("Tugas 4 - ERD", "2025-12-01");
        Assignment a5 = new Assignment("Tugas 5 - Final Project", "2025-12-15");

        // Menambahkan Assignment ke masing-masing Course
        course1.addAssignment(a1);
        course1.addAssignment(a2);
        course3.addAssignment(a3);
        course4.addAssignment(a4);
        course5.addAssignment(a5);

        // Membuat beberapa objek Student
        Student s1 = new Student("S001", "Ani", "Informatics");
        Student s2 = new Student("S002", "Arya", "Computer Science");
        Student s3 = new Student("S003", "Budi", "Informatics");
        Student s4 = new Student("S004", "Cindy", "Information Systems");

        // Membuat beberapa objek Submission dan mencatatnya untuk setiap Student
        Submission sub1 = new Submission(s1, "2025-10-05", a1, 90);
        s1.addSubmission(sub1);
        Submission sub2 = new Submission(s2, "2025-10-04", a3, 90);
        s2.addSubmission(sub2);
        Submission sub3 = new Submission(s3, "2025-10-08", a1, 85);
        s3.addSubmission(sub3);
        Submission sub4 = new Submission(s4, "2025-11-28", a4, 95);
        s4.addSubmission(sub4);
        Submission sub5 = new Submission(s1, "2025-10-30", a2, 88);
        s1.addSubmission(sub5);

        // Mengumpulkan semua data ke dalam List untuk mempermudah proses penampilan data
        List<User> users = new ArrayList<>(List.of(ins1, ins2, ins3, s1, s2, s3, s4));
        List<Student> students = new ArrayList<>(List.of(s1, s2, s3, s4));
        List<Course> courses = new ArrayList<>(List.of(course1, course2, course3, course4, course5));
        
        //OUTPUT
        // Menampilkan detail semua pengguna (User)
        System.out.println("========================================");
        System.out.println("       DETAIL SEMUA PENGGUNA");
        System.out.println("========================================");
        if (users.isEmpty()) {
            System.out.println("Belum ada user.");
        } else {
            for (User user : users) {
                user.displayInfo(); // Memanggil metode secara polimorfik
            }
        }
        System.out.println("\n");

        // Menampilkan detail semua mata kuliah (Course) beserta tugasnya
        System.out.println("========================================");
        System.out.println("       DETAIL SEMUA MATA KULIAH");
        System.out.println("========================================");
        if (courses.isEmpty()) {
            System.out.println("Belum ada course.");
        } else {
            for (Course course : courses) {
                System.out.printf("Course: %s (%s)\n", course.getTitle(), course.getCourseCode());
                Instructor instructor = course.getInstructor();
                System.out.printf("   Instructor: %s - %s\n", instructor.getName(), instructor.getExpertise());
                System.out.println("   Assignments:");
                if (course.getAssignments().isEmpty()) {
                    System.out.println("     - Belum ada tugas.");
                } else {
                    for (Assignment assignment : course.getAssignments()) {
                        System.out.printf("     - %s (Due: %s)\n", assignment.getTitle(), assignment.getDueDate());
                    }
                }
                System.out.println();
            }
        }

        // Menampilkan detail semua submission yang dikelompokkan per mahasiswa
        System.out.println("========================================");
        System.out.println("     DETAIL SEMUA SUBMISSION MAHASISWA");
        System.out.println("========================================");
        if (students.isEmpty()) {
            System.out.println("Belum ada student.");
        } else {
            for (Student student : students) {
                System.out.printf("Submissions by %s (%s):\n", student.getName(), student.getUserId());
                if (student.getSubmissions().isEmpty()) {
                    System.out.println("   - Belum ada submission.");
                } else {
                    for (Submission submission : student.getSubmissions()) {
                        Assignment assignment = submission.getAssignment();
                        System.out.printf("   - Tugas: %s | Tanggal: %s | Nilai: %d\n",
                                assignment.getTitle(), submission.getSubmissionDate(), submission.getGrade());
                    }
                }
                System.out.println();
            }
        }
    }
}
