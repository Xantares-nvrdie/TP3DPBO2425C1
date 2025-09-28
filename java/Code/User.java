// Kelas abstrak sebagai dasar untuk semua jenis pengguna (User)
public abstract class User {
    // Atribut yang dapat diakses oleh kelas turunan (protected)
    protected String userId;
    protected String name;

    // Konstruktor untuk membuat objek User
    public User(String userId, String name) {
        this.userId = userId;
        this.name = name;
    }

    // Metode abstrak yang wajib diimplementasikan oleh kelas turunan
    public abstract void displayInfo();

    // Mengambil ID pengguna
    public String getUserId() {
        return userId;
    }

    // Mengambil nama pengguna
    public String getName() {
        return name;
    }

    // Mengubah ID pengguna
    public void setUserId(String userId) {
        this.userId = userId;
    }

    // Mengubah nama pengguna
    public void setName(String name) {
        this.name = name;
    }
}
