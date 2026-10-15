#include <iostream>
using namespace std;

int main()
{
    char menu;

    int tepung = 0, telur = 0, air = 0;

    char pilihan;

    int jumlahMie = 0, butuhTepung = 0, butuhTelur = 0, butuhAir = 0;

    int mieTepung = 0, mieTelur = 0, mieAir = 0, mieMaks = 0;

    int sisaTepung = 0, sisaTelur = 0, sisaAir = 0;

    do
    {
        cout << "<---Menu Utama--->" << endl;
        cout << "A. Input Stock" << endl;
        cout << "B. Hasil Produksi" << endl;
        cout << "C. Sisa Stock" << endl;
        cout << "D. Keluar" << endl;
        cout << "Pilih menu (A/B/C/D):";
        cin >> menu;

        switch (menu)
        {
        case 'A':
        case 'a':
            cout << "<---Input Stock--->" << endl;
            cout << "Tepung Terigu (gram) : ";
            cin >> tepung;
            cout << "Telur (butir) :";
            cin >> telur;
            cout << "Air (liter) :";
            cin >> air;
            cout << "Stock berhasil disimpan" << endl;
            break;

        case 'B':
        case 'b':
            cout << "<---Hasil Produksi--->" << endl;
            cout << "a. Input Sesuai Keinginan" << endl;
            cout << "b. Hasil Produksi Sesuai Dengan Stock" << endl;
            cout << "Pilih (a/b) :";
            cin >> pilihan;

            switch (pilihan)
            {
            case 'A':
            case 'a':
                cout << "Jumlah mie instan yang diinginkan :";
                cin >> jumlahMie;

                butuhTepung = jumlahMie * 1;
                butuhTelur = jumlahMie * 2;
                butuhAir = jumlahMie * 3;

                if (tepung >= butuhTepung && telur >= butuhTelur && air >= butuhAir)
                {
                    cout << "Stock Memenuhi" << endl;
                    sisaTepung = tepung - butuhTepung;
                    sisaTelur = telur - butuhTelur;
                    sisaAir = air - butuhAir;
                }
                else
                {
                    cout << "Stock Tidak Memenuhi" << endl;
                    sisaTepung = tepung;
                    sisaTelur = telur;
                    sisaAir = air;
                }

                cout << "<---Sisa stock setelah produksi--->: " << endl;
                cout << "Tepung Terigu : " << sisaTepung << endl;
                cout << "Telur : " << sisaTelur << endl;
                cout << "Air : " << sisaAir << endl;
                break;

            case 'B':
            case 'b':
                mieTepung = tepung / 1;
                mieTelur = telur / 2;
                mieAir = air / 3;

                mieMaks = mieTepung;
                if (mieTelur < mieMaks)
                {
                    mieMaks = mieTelur;
                }
                if (mieAir < mieMaks)
                {
                    mieMaks = mieAir;
                }

                cout << "Total mie instan yang bisa diproduksi : " << mieMaks << endl;

                sisaTepung = tepung - (mieMaks * 1);
                sisaTelur = telur - (mieMaks * 2);
                sisaAir = air - (mieMaks * 3);

                cout << "<---Sisa stock setelah produksi--->: " << endl;
                cout << "Tepung Terigu : " << sisaTepung << endl;
                cout << "Telur : " << sisaTelur << endl;
                cout << "Air : " << sisaAir << endl;
                break;
            default:
                cout << "Pilihan tidak valid" << endl;
                break;
            }
            break;
            
        case 'C':
        case 'c':
            cout << "<---Sisa Stock--->" << endl;
            cout << "Tepung Terigu : " << sisaTepung << endl;
            cout << "Telur : " << sisaTelur << endl;
            cout << "Air : " << sisaAir << endl;
            break;

        case 'D':
        case 'd':
            cout << "Keluar dari program." << endl;
            break;
        
        default:
            cout << "Pilihan tidak valid, silakan pilih lagi" << endl;
            break;
        }

    } while (menu != 'D' && menu != 'd');
}