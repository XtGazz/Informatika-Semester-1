


#include <iostream>
using namespace std;
 
int main()
{
    int menu, pilih;
    float sisi, panjang, lebar, tinggi, alas, miring, jari;
    float pi = 3.14;
    bool keluar = false;
 
    while (keluar == false)
    {
        cout << "MENGHITUNG BANGUN DATAR DAN RUANG" << endl;
        cout << "1. Bangun datar" << endl;
        cout << "2. Bangun ruang" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan (1-3) : ";
        cin >> menu;
 
        // input bukan angka
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Input harus berupa angka!, ulangi memilih!" << endl;
            cout << "Tekan sembarang tombol untuk mengulangi memilih menghitung bangun datar dan ruang";
            cin.get();
            system("cls");
            continue;
        }
        cin.ignore(1000, '\n');
 
        switch (menu)
        {
        case 1:
        {
            bool kembali = false;
            while (kembali == false)
            {
                system("cls");
                cout << "MENGHITUNG BANGUN DATAR" << endl;
                cout << "1. Persegi" << endl;
                cout << "2. Persegi Panjang" << endl;
                cout << "3. Segitiga" << endl;
                cout << "4. Lingkaran" << endl;
                cout << "5. Kembali ke menu awal" << endl;
                cout << "Pilihan (1-5) : ";
                cin >> pilih;
 
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Input harus berupa angka!, ulangi memilih!" << endl;
                    cout << "Tekan sembarang tombol untuk mengulangi memilih menghitung bangun datar";
                    cin.get();
                    continue;
                }
                cin.ignore(1000, '\n');
 
                if (pilih == 1)
                {
                    cout << "Masukkan sisi : ";
                    cin >> sisi;
                    cout << "Keliling = " << 4 * sisi << endl;
                    cout << "Luas = " << sisi * sisi << endl;
                }
                else if (pilih == 2)
                {
                    cout << "Masukkan panjang : ";
                    cin >> panjang;
                    cout << "Masukkan lebar : ";
                    cin >> lebar;
                    cout << "Keliling = " << 2 * (panjang + lebar) << endl;
                    cout << "Luas = " << panjang * lebar << endl;
                }
                else if (pilih == 3)
                {
                    cout << "Masukkan alas : ";
                    cin >> alas;
                    cout << "Masukkan tinggi : ";
                    cin >> tinggi;
                    cout << "Masukkan sisi miring : ";
                    cin >> miring;
                    cout << "Keliling = " << alas + tinggi + miring << endl;
                    cout << "Luas = " << 0.5 * alas * tinggi << endl;
                }
                else if (pilih == 4)
                {
                    cout << "Masukkan jari-jari : ";
                    cin >> jari;
                    cout << "Keliling = " << 2 * pi * jari << endl;
                    cout << "Luas = " << pi * jari * jari << endl;
                }
                else if (pilih == 5)
                {
                    kembali = true;
                    cout << "Tekan sembarang tombol untuk mengulangi memilih menghitung bangun datar dan ruang";
                    cin.get();
                    system("cls");
                    continue;
                }
                else
                {
                    cout << "Pilihan tidak ada di menu!, ulangi memilih!" << endl;
                    cout << "Tekan sembarang tombol untuk mengulangi memilih menghitung bangun datar";
                    cin.get();
                    continue;
                }
 
                cin.ignore(1000, '\n');
                cout << "Tekan sembarang tombol untuk mengulangi memilih menghitung bangun datar";
                cin.get();
            }
            break;
        }
 
        case 2:
        {
            bool kembali = false;
            while (kembali == false)
            {
                system("cls");
                cout << "MENGHITUNG BANGUN RUANG" << endl;
                cout << "1. Kubus" << endl;
                cout << "2. Balok" << endl;
                cout << "3. Tabung" << endl;
                cout << "4. Bola" << endl;
                cout << "5. Kembali ke menu awal" << endl;
                cout << "Pilihan (1-5) : ";
                cin >> pilih;
 
                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Input harus berupa angka!, ulangi memilih!" << endl;
                    cout << "Tekan sembarang tombol untuk mengulangi memilih menghitung bangun ruang";
                    cin.get();
                    continue;
                }
                cin.ignore(1000, '\n');
 
                if (pilih == 1)
                {
                    cout << "Masukkan sisi : ";
                    cin >> sisi;
                    cout << "Luas permukaan = " << 6 * sisi * sisi << endl;
                    cout << "Volume = " << sisi * sisi * sisi << endl;
                }
                else if (pilih == 2)
                {
                    cout << "Masukkan panjang : ";
                    cin >> panjang;
                    cout << "Masukkan lebar : ";
                    cin >> lebar;
                    cout << "Masukkan tinggi : ";
                    cin >> tinggi;
                    cout << "Luas permukaan = " << 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi) << endl;
                    cout << "Volume = " << panjang * lebar * tinggi << endl;
                }
                else if (pilih == 3)
                {
                    cout << "Masukkan jari-jari : ";
                    cin >> jari;
                    cout << "Masukkan tinggi : ";
                    cin >> tinggi;
                    cout << "Luas permukaan = " << 2 * pi * jari * (jari + tinggi) << endl;
                    cout << "Volume = " << pi * jari * jari * tinggi << endl;
                }
                else if (pilih == 4)
                {
                    cout << "Masukkan jari-jari : ";
                    cin >> jari;
                    cout << "Luas permukaan = " << 4 * pi * jari * jari << endl;
                    cout << "Volume = " << 4.0 / 3 * pi * jari * jari * jari << endl;
                }
                else if (pilih == 5)
                {
                    kembali = true;
                    cout << "Tekan sembarang tombol untuk mengulangi memilih menghitung bangun datar dan ruang";
                    cin.get();
                    system("cls");
                    continue;
                }
                else
                {
                    cout << "Pilihan tidak ada di menu!, ulangi memilih!" << endl;
                    cout << "Tekan sembarang tombol untuk mengulangi memilih menghitung bangun ruang";
                    cin.get();
                    continue;
                }
 
                cin.ignore(1000, '\n');
                cout << "Tekan sembarang tombol untuk mengulangi memilih menghitung bangun ruang";
                cin.get();
            }
            break;
        }
 
        case 3:
            cout << "Terima kasih" << endl;
            cout << "Tekan sembarang tombol untuk menutup program";
            cin.get();
            keluar = true;
            break;
 
        default:
            cout << "Pilihan tidak ada di menu!, ulangi memilih!" << endl;
            cout << "Tekan sembarang tombol untuk mengulangi memilih menghitung bangun datar dan ruang";
            cin.get();
            system("cls");
        }
    }
    return 0;
}
 