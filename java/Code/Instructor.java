// Kelas turunan dari User untuk merepresentasikan data seorang instruktur (Instructor)
public class Instructor extends User {
    // Atribut
    private String expertise; // Keahlian khusus instruktur

    // Konstruktor untuk membuat objek Instructor baru
    public Instructor(String userId, String name, String expertise) {
        // Memanggil konstruktor dari kelas induk (User)
        super(userId, name);
        this.expertise = expertise;
    }

    // Mengambil keahlian instruktur
    public String getExpertise() {
        return expertise;
    }

    // Mengubah keahlian instruktur
    public void setExpertise(String expertise) {
        this.expertise = expertise;
    }

    // Menampilkan informasi detail instruktur (override dari kelas User)
    @Override
    public void displayInfo() {
        System.out.println("Instructor ID: " + this.userId + ", Name: " + this.name + ", Expertise: " + this.expertise);
    }
}
