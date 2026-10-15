#include <iostream>
using namespace std;

int main()
{
    string NIM, Password;
    string NIMBenar = "123260212";
    string PasswordBenar = "60212";
    
    // Deklarasi variabel di luar switch agar bisa diakses oleh semua case
    int T1 = 0, T2 = 0, T3 = 0, T4 = 0;
    int nKuis = 0, nUTS = 0, nUAS = 0;
    double totalKehadiran = 0;
    double nilaiAkhir = 0;
    
    int pilihan;
    bool isLoggedIn = false; // Menandai status login

    do
    {
        cout << "\n=== Menu Utama ===" << endl;
        cout << "1. Login" << endl;
        cout << "2. Input Nilai" << endl;
        cout << "3. Lihat Nilai" << endl;
        cout << "4. Grade Penilaian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
        {
            cout << "--- Menu Login ---" << endl;
            int kesempatan = 3;
            while (kesempatan > 0)
            {
                cout << "Masukkan NIM: ";
                cin >> NIM;
                cout << "Masukkan Password: ";
                cin >> Password;

                if (NIM == NIMBenar && Password == PasswordBenar)
                {
                    cout << "Login Berhasil!" << endl;
                    isLoggedIn = true;
                    break; // Keluar dari loop while login
                }
                else
                {
                    kesempatan--;
                    cout << "NIM atau Password salah. Sisa kesempatan: " << kesempatan << endl;
                }
            }
            break;
        }

        case 2:
            if (!isLoggedIn)
            {
                cout << "Silakan login (Menu 1) terlebih dahulu!" << endl;
                break;
            }

            cout << "--- Input Nilai ---" << endl;
            cout << "Masukkan Nilai Tugas 1: "; cin >> T1;
            cout << "Masukkan Nilai Tugas 2: "; cin >> T2;
            cout << "Masukkan Nilai Tugas 3: "; cin >> T3;
            cout << "Masukkan Nilai Tugas 4: "; cin >> T4;
            cout << "Masukkan Nilai Kuis   : "; cin >> nKuis;
            cout << "Masukkan Nilai UTS    : "; cin >> nUTS;
            cout << "Masukkan Nilai UAS    : "; cin >> nUAS;
            cout << "Masukkan Total Kehadiran (0-16): "; cin >> totalKehadiran;

            {
                double kehadiranLulus = (totalKehadiran / 16.0) * 100;
                cout << "Persentase Kehadiran: " << kehadiranLulus << "%" << endl;

                if (kehadiranLulus >= 80)
                    cout << "Status: Diizinkan mengikuti UAS." << endl;
                else
                    cout << "Status: Tidak diizinkan mengikuti UAS." << endl;
            }
            break;

        case 3:
            if (!isLoggedIn)
            {
                cout << "Silakan login (Menu 1) terlebih dahulu!" << endl;
                break;
            }

            cout << "--- Lihat Nilai ---" << endl;
            cout << "Tugas 1: " << T1 << endl;
            cout << "Tugas 2: " << T2 << endl;
            cout << "Tugas 3: " << T3 << endl;
            cout << "Tugas 4: " << T4 << endl;
            cout << "Kuis   : " << nKuis << endl;
            cout << "UTS    : " << nUTS << endl;
            cout << "UAS    : " << nUAS << endl;

            {
                double rataRataTugas = (T1 + T2 + T3 + T4) / 4.0;
                nilaiAkhir = (rataRataTugas * 0.15) + (nKuis * 0.20) + (nUTS * 0.30) + (nUAS * 0.35);
                cout << "Nilai Akhir: " << nilaiAkhir << endl;
            }
            break;

        case 4:
            if (!isLoggedIn)
            {
                cout << "Silakan login (Menu 1) terlebih dahulu!" << endl;
                break;
            }

            cout << "--- Grade Penilaian ---" << endl;
            cout << "Nilai Akhir Saat Ini: " << nilaiAkhir << endl;
            if (nilaiAkhir >= 85)
                cout << "Grade: A" << endl;
            else if (nilaiAkhir >= 70)
                cout << "Grade: B" << endl;
            else if (nilaiAkhir >= 60)
                cout << "Grade: C" << endl;
            else if (nilaiAkhir >= 45)
                cout << "Grade: D" << endl;
            else
                cout << "Grade: E" << endl;
            break;

        case 5:
            cout << "Terima kasih, program selesai." << endl;
            break;

        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
            break;
        }

    } while (pilihan != 5);

    return 0;
}