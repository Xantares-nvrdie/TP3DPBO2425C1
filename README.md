# 💎 TUGAS PRAKTIKUM 3 DPBO C1
Buat program berbasis OOP dengan minimal 3 kelas menggunakan bahasa pemrograman C++ dan Python dengan tema bebas.
implementasi utama konsep:<br>
- inheritance<br>
- composition<br>
- array of object (bisa pake vector)<br>

Bonus nilai sebanyak ?? jika menambahkan bahasa Java dan mengimplementasikan minimal satu dari materi:
- Hierarchical inheritance<br>
- Multiple inheritance<br>
- Hybrid inheritance<br>

# 🤝🏻 JANJI
Saya, Bintang Fajar Putra Pamungkas dengan NIM 2405073, mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahan-Nya. Maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# ⚒️ DIAGRAM
<img width="682" height="515" alt="Screenshot 2025-09-29 at 00 53 20" src="https://github.com/user-attachments/assets/df2b9003-1b1a-4cd4-a932-3cf66417c6bf" />
<br>Disini panah tanpa tulisan extend berarti association dan panah dengan extend berarti inheritance<br>
<img width="585" height="325" alt="uml" src="https://github.com/user-attachments/assets/6d8d1897-05c5-4a1e-9deb-ee48abddb549" />
<br>

## IMPLEMENTASI KONSEP<br>
-  Hierarchical inheritance<br>
-  Composition<br>
-  Association<br>
-  Array of object<br>
-  Inheritance<br>
-  Kelas Abstrak<br>
-  Polymorphism<br><br>

## RELASI DAN HUBUNGAN ANTAR CLASS
1. Class User<br>
  Class ini merupakan kelas abstrak dan merupakan kelas parent dari Student dan Instructor. Class ini berisi atribut umum seperti userId dan name.
  Atribut userId dan name bersifat protected karena kedua atribut ini perlu diakses oleh kelas turunannya tanpa harus melalui metode getter. Ini memudahkan kelas turunan untuk menggunakan atribut tersebut, misalnya dalam metode displayInfo()

2. Class Student<br>
   Class ini merupakan kelas turunan dari User. Class ini berisi atribut tambahan major dan submission. Atribut ini bersifat private untuk melindungi data, jadi hanya bisa dimodifikasi melalui setter.
   Untuk atribut submission, dia merupakan Composition dari class Submission, alasannya adalah Submission dan Student ini merupakan satu kesatuan dan tidak bisa dipisahkan.
   
3. Class Instructor<br>
   Class ini merupakan kelas turunan dari User. Class ini berisi atribut tambahan expertise. Atribut ini bersifat private untuk melindungi data, jadi hanya bisa dimodifikasi melalui setter.

4. Class Assignment<br>
   Class ini berisi atribut title dan dueDate. Atribut ini bersifat private untuk melindungi data, jadi hanya bisa dimodifikasi melalui setter.

5. Class Submission<br>
   Class ini memiliki hubungan Association dengan class Assignment dan Student, alasannya karena class ini dengan class Assignment dan Student hanya sekedar mengenal(linked) saja dan bukan memiliki. Class ini berisi atribut student, submissionDate, assignment, grade.
   .Atribut ini bersifat private untuk melindungi data, jadi hanya bisa dimodifikasi melalui setter.

6. Class Course<br>
   Class ini memiliki hubungan Association dengan class Instructor karena di kasus ini 1 Course hanya bisa berisi Instructor. Class ini juga memiliki hubungan Composition/composite dengan class Assignment, 1 Course dapat memiliki banyak Assignment dan merupakan satu kesatuan, jadi jika course hilang
   maka Assignment nya juga tidak berarti. Atribut di class ini ada courseCode, title, instructor, dan assignments. Semua bersifat private untuk melindungi data, jadi hanya bisa dimodifikasi melalui setter.



# ⛔️ ALUR MAIN PROGRAM<br>
1. Membuat objek Instructor<br>
    Program membuat 3 instruktur (ins1, ins2, ins3) dengan bidang keahlian berbeda.

3. Membuat objek Course<br>
    Program membuat 5 mata kuliah (course1 s.d. course5) dan masing-masing dihubungkan dengan instruktur yang mengajarnya (association).

4. Membuat Assignment<br>
    Program membuat 5 tugas (a1 s.d. a5) dengan judul dan tanggal deadline.
    Tugas-tugas tertentu ditambahkan ke mata kuliah terkait (composition).

5. Membuat Student<br>
    Program membuat 4 mahasiswa (s1, s2, s3, s4) dari berbagai jurusan.

6. Membuat Submission (pengumpulan tugas)<br>
    Setiap mahasiswa mengumpulkan tugas tertentu dengan tanggal dan nilai.
    Submission ini dihubungkan (association) dengan Student dan Assignment.
    Submission dimasukkan ke daftar submission milik Student (composition).

7. Menyimpan data ke dalam vector<br>
  - Semua User (Student & Instructor) dimasukkan ke dalam vector<User*>.
  - Semua mahasiswa disimpan dalam vector<Student*>.
  - Semua instruktur disimpan dalam vector<Instructor*>.
  - Semua mata kuliah disimpan dalam vector<Course*>.

7. Menampilkan detail semua pengguna (User)<br>
    Menggunakan polymorphism: displayInfo() dipanggil dari pointer User*.
    Program menampilkan informasi instruktur dan mahasiswa.

8. Menampilkan detail semua Course<br>
    Program mencetak nama mata kuliah, kode, instruktur pengampu, dan daftar assignment.
    Jika belum ada tugas, ditampilkan pesan "Belum ada tugas."

9. Menampilkan detail semua Submission mahasiswa<br>
    Program mencetak daftar submission tiap mahasiswa (judul tugas, tanggal, nilai).
    Jika mahasiswa belum punya submission, ditampilkan pesan "Belum ada submission."

10. Program selesai<br>
    Semua data sudah ditampilkan sesuai relasi antar kelas.

# 📸 DOCUMENTATION
## BUKTI SEBELUM HARDCODE DATA
<img width="439" height="214" alt="Screenshot 2025-09-29 at 18 39 23" src="https://github.com/user-attachments/assets/144f9fd7-5646-4e9d-a826-bde7d55ed27e" />

## BUKTI PROGRAM CPP BERJALAN 
<img width="715" height="805" alt="Screenshot 2025-09-29 at 00 39 45" src="https://github.com/user-attachments/assets/0d8d5ae5-6c60-45aa-8314-640479e0194a" />

## BUKTI PROGRAM PYTHON BERJALAN 
<img width="624" height="807" alt="Screenshot 2025-09-29 at 00 43 56" src="https://github.com/user-attachments/assets/256f8a91-c473-4f9c-9a0f-8e37d7e7e8f2" />

## BUKTI PROGRAM JAVA BERJALAN 
<img width="662" height="806" alt="Screenshot 2025-09-29 at 00 42 06" src="https://github.com/user-attachments/assets/4e5e65bf-3e9c-4e0c-8bef-8446fd6f8184" />



