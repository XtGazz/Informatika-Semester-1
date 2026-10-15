1. GenapGanjil,CekKelulusan,BilanganTerbesar.cpp

A. Genap / Ganjil
Buat program yang meminta user input bilangan bulat, Program bisa menampilkan "Genap" jika bilangannya Genap atau "Ganjil" jika bilangannya ganjil

B. Cek kelulusan
User melakukan input 0-100
Jika nilai setidaknya mendapat 70, maka akan menampilkan output "Lulus"
Jika nilai kurang dari 70, maka akan menampilkan output "Tidak Lulus"

C. Bilangan Terbesar
User diminta input dua bilangan (a dan b), program menampilkan bilangan mana yang lebih besar
Jika sama besar maka tampilannya "Sama Besar"


2. SPADU - Sistem Penilaian Akademik Terpadu
Program SPADU (Sistem Penilaian Akademik Terpadu) adalah aplikasi berbasis konsol yang dirancang untuk memudahkan mahasiswa dalam mengelola, menghitung, dan melihat rekapitulasi nilai akademik serta grade akhir secara mandiri dan transparan.

📌 Fitur Utama
A. Sistem Login Keamanan
Autentikasi menggunakan NIM dan Password.
Batas maksimal percobaan login hingga 3 kali. Jika gagal 3 kali berturut-turut, sistem akan keluar secara otomatis demi keamanan.

B. Input Data Nilai
    - Presensi / Kehadiran: Total pertemuan acuan adalah 16 kali.
    - Aturan Kehadiran: Jika persentase kehadiran kurang dari 80% (kurang dari 13 pertemuan), mahasiswa tidak diizinkan mengikuti UAS (Nilai  - UAS otomatis dianggap 0).
    - Nilai Tugas: Penginputan nilai Tugas 1 hingga Tugas 4.
    - Nilai Kuis
    - Nilai UTS
    - Nilai UAS

C. Lihat Nilai & Rata-Rata Akhir
Menampilkan rincian seluruh nilai yang telah diinputkan.
Menghitung nilai akhir berdasarkan bobot persentase standar:
    - Rata-rata Tugas (1-4): 15%
    - Kuis: 20%
    - Ujian Tengah Semester (UTS): 30%
    - Ujian Akhir Semester (UAS): 35%
    - Total Bobot: 100%

D. Grade Penilaian
Penentuan Letter Grade berdasarkan total nilai akhir rata-rata:
    - Nilai 85 ke atas: Grade A
    - Nilai 70 – 84: Grade B
    - Nilai 60 – 69: Grade C
    - Nilai 45 – 59: Grade D
    - Nilai kurang dari 45: Grade E

E. Keluar Sistem
Menutup dan mengakhiri sesi program dengan aman.


3. PABRIK SIDOKUMA
Aplikasi berbasis konsol ini dirancang khusus untuk membantu mengelola, memprediksi, dan menghitung penggunaan bahan baku serta hasil produksi mie instan di Perusahaan "SIDOKUMA".

📌 Fitur & Menu Utama
Sistem menyediakan menu navigasi utama (A, B, C, D). Jika pengguna memasukkan pilihan selain A, B, C, atau D, sistem akan menampilkan pesan error handling dan meminta penginputan ulang menu secara otomatis.

A. Input Stock
Digunakan untuk memasukkan jumlah stok bahan baku awal yang tersedia.
Bahan baku yang diinput meliputi:
    - Tepung Terigu
    - Telur
    - Air

B. Hasil Produksi
Menghitung kalkulasi produksi berdasarkan resep standar (1 Mie Instan membutuhkan: 1 gram Tepung Terigu, 2 butir Telur, dan 3 liter Air).
Menyediakan 2 opsi metode produksi:
    - Mode Input Sesuai Keinginan: Memasukkan target jumlah mie instan yang ingin diproduksi. Sistem akan mengevaluasi stok dan menampilkan status "Stock Memenuhi" atau "Stock Tidak Memenuhi".
    - Mode Sesuai Stok Tersedia: Sistem menghitung dan menampilkan jumlah maksimal mie instan yang dapat diproduksi secara otomatis berdasarkan stok bahan baku paling terbatas.
Apapun pilihan metode produksi yang dipilih, sistem akan menampilkan rincian total sisa bahan baku yang masih tersedia setelah proses kalkulasi.

C. Sisa Stock
Menampilkan rekapitulasi sisa bahan baku (Tepung Terigu, Telur, dan Air) secara mendetail setelah produksi dilakukan.

D. Keluar
Mengakhiri sesi dan keluar dari sistem secara langsung.


4. menunjukkan perbedaan  operator ++ yang ditulis awal variabel (++a) dan akhir variabel (a++)


5. Kalkulator Geometri - Bangun Datar dan Bangun Ruang
Aplikasi berbasis konsol (C++) yang dirancang untuk melakukan perhitungan keliling, luas, luas permukaan, dan volume berbagai bentuk geometri (bangun datar dan bangun ruang) secara interaktif.   

📌 Fitur & Menu Utama
A. Menu Utama
    - Pilihan 1: Masuk ke sub-menu Bangun Datar.   
    - Pilihan 2: Masuk ke sub-menu Bangun Ruang.   
    - Pilihan 3: Keluar dari program.   
Dilengkapi Validasi Input: Jika pengguna memasukkan selain angka, sistem akan melempar pesan error dan meminta penginputan ulang.   

B. Sub-Menu Bangun Datar
    - Persegi: Menghitung Keliling dan Luas.   
    - Persegi Panjang: Menghitung Keliling dan Luas.   
    - Segitiga: Menghitung Keliling dan Luas.   
    - Lingkaran: Menghitung Keliling dan Luas.   
    - Opsi untuk kembali ke Menu Utama.   

C. Sub-Menu Bangun Ruang
    - Kubus: Menghitung Luas Permukaan dan Volume.   
    - Balok: Menghitung Luas Permukaan dan Volume.   
    - Tabung: Menghitung Luas Permukaan dan Volume.   
    - Bola: Menghitung Luas Permukaan dan Volume.   
    - Opsi untuk kembali ke Menu Utama.   

D. Keluar Sistem
Menampilkan pesan terima kasih dan menutup aplikasi secara aman.   


