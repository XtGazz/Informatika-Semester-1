// Buatlah program untuk menunjukkan perbedaan  operator ++ yang ditulis awal variabel (++a) dan akhir variabel (a++). Boleh dijadikan satu program, boleh dua program.

#include <iostream>
using namespace std;

int main() {
    int batas = 5;

    cout << "(++a)" << endl;
    cout << "Nilai ditambah dulu, baru dicetak/dieksekusi:" << endl;
    for (int i = 1, a = 1; i <= batas; i++) {
        cout << "Hasil ++a: " << ++a << endl;
    }


    cout << "(a++)" << endl;
    cout << "Nilai dicetak/dieksekusi dulu, baru ditambah:" << endl;
    for (int i = 1, a = 1; i <= batas; i++) {
        cout << "Hasil a++: " << a++ << endl;
    }

    return 0;
}