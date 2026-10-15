#include <iostream>
using namespace std;

int main() {
    int bilanganBulatUser;
    cout << "Masukkan bilangan bulat: ";
    cin >> bilanganBulatUser;
    

    if(bilanganBulatUser % 2) {
        cout << "genap" << endl;
    } else {
        cout  << "ganjil" << endl;
    }

    int cekKelulusan;
    cout << "Masukkan nilai ujian: ";
    cin >> cekKelulusan;

    if(cekKelulusan >= 70) {
        cout << "Lulus" << endl;
    } else if(cekKelulusan < 70) {
        cout << "Tidak Lulus" << endl;
    } else {
        cout << "Nilai salah" << endl;
    }


    int a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    if(a > b) {
        cout << a << " lebih besar dari " << b << endl;
    } else if(a < b) {
        cout << a << " lebih kecil dari " << b << endl;
    } else {
        cout << a << " sama dengan " << b << endl;
    }

    
    return 0;
}
