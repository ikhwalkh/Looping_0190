#include <iostream>
using namespace std;

int main(){
    float skor;
    char nilai;

    cout << "Masukkan skor yang diperoleh = ";
    cin >> skor;

    if (skor >= 80) nilai = 'A';
    else if (skor >= 65) nilai ='B';
    else if (skor >= 50) nilai ='C';
    else if (skor >= 35) nilai ='D';
    else nilai ='E';

    cout << "Nilai yang diperoleh = "<< nilai<<endl;
}