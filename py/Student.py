# File: student.py
from datetime import date  
from User import User
from Submission import Submission
from Assignment import Assignment

class Student(User):
    def __init__(self, user_id, name, major):
        super().__init__(user_id, name)
        self._major = major
        self._submissions = []

    def display_info(self):
        return f"{super().display_info()}, Peran: Mahasiswa, Jurusan: {self._major}"

    def submit_assignment(self, assignment: Assignment) -> Submission:
        """Metode aksi untuk mengerjakan tugas."""
        submission = Submission(self, assignment, date.today()) 
        self._submissions.append(submission)
        print(f"[INFO] Mahasiswa {self._name} mengerjakan tugas '{assignment.get_title()}'.")
        return submission

    def view_grades(self):
        """Metode untuk menampilkan laporan nilai dengan format tabel yang dinamis."""
        print(f"\nLaporan Nilai untuk: {self._name} ({self._major})")
        if not self._submissions:
            print("  -> Belum ada tugas yang dikerjakan.")
            return

        # --- PERUBAHAN DIMULAI DI SINI ---

        header_tugas = 'TUGAS'
        
        # 1. Hitung panjang judul tugas terpanjang, beri nilai 0 jika belum ada tugas
        max_title_len = max(len(s.assignment.get_title()) for s in self._submissions) if self._submissions else 0
        
        # 2. Lebar kolom adalah nilai terbesar antara panjang header atau panjang judul terpanjang
        col_width = max(len(header_tugas), max_title_len)

        # --- AKHIR DARI PERUBAHAN ---
        
        # Header Tabel
        print(f"  +{'-' * (col_width + 2)}+{'-' * 14}+")
        print(f"  | {header_tugas:<{col_width}} | {'NILAI':^12} |")
        print(f"  +{'-' * (col_width + 2)}+{'-' * 14}+")
        
        # Isi Tabel
        for sub in self._submissions:
            title = sub.assignment.get_title()
            grade_str = sub.get_grade_str()
            print(f"  | {title:<{col_width}} | {grade_str:^12} |")
        
        # Footer Tabel
        print(f"  +{'-' * (col_width + 2)}+{'-' * 14}+")
