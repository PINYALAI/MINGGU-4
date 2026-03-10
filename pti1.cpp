#include <iostream>
using namespace std;

float nilai1, nilai2, nilai3;

void inputnilai()
{
    cout << "\n--- Program Penilaian Mahasiswa ---" << endl;
    cout << "Masukkan Nilai Tugas  : ";
    cin >> nilai1;
    cout << "Masukkan Nilai UTS    : ";
    cin >> nilai2;
    cout << "Masukkan Nilai UAS    : ";
    cin >> nilai3;
}

float hitungrata(float a, float b, float c)
{
    return (a + b + c) / 3;
}
