#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    int nim;
    string nama;
public:
    Mahasiswa();
    Mahasiswa(int iNim) {
        nim = iNim;
    };
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);
    void cetak();
};

Mahasiswa::Mahasiswa() {
    nim = 0;
    nama = " ";
}

Mahasiswa::Mahasiswa(string iNama) {
    nim = 189;
    nama = iNama;
}

Mahasiswa::Mahasiswa(int iNim, string iNama) {
    nim = iNim;
    nama = iNama;
}

void Mahasiswa::cetak() {
    cout << endl << "Nim = " << nim << endl;
    cout << "Nama = " << nama << endl;
}

int main()
{
    Mahasiswa mhs1;
    Mahasiswa mhs2(189);
    Mahasiswa mhs3("Fajri");
    Mahasiswa mhs4(189, "Fajri");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    system("pause");
    
    return 0;
}
