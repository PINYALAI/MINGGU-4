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

string statusnilai(float rata)
{
    if (rata >= 85)
      return "Grade A";
    else if (rata >= 75)
        return "Grade B";
    else if (rata >= 65)
        return "Grade C";
    else if (rata >= 50)
        return "Grade D";
    else
        return "Grade E";
}

int main()

{
    inputnilai();

    float rata = hitungrata(nilai1, nilai2, nilai3);
