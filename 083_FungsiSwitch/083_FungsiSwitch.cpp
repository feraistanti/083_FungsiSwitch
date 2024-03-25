#include <iostream>
using namespace std;

int bilSatu, bilDua;

void input()
{
    cout << "Masukan Bilangan Pertama = ";
    cin >> bilSatu;
    cout << "Masukan Bilangan Kedua = ";
    cin >> bilDua;
}

float penjumlahan(float a, float b) 
{
    return a + b;
}

float pembagian(float a, float b)
{
    return a / b;
}

float perkalian(float a, float b)
{
    return a * b;
}

float pengurangan(float a, float b)
{
    return a - b;
}


int main()
{
    int pilihan;

    do 
    {
        cout << "===========================" << endl;
        cout << "MENU" << endl;
        cout << "1, penjumlahan " << endl;
        cout << "2, pembagian " << endl;
        cout << "3, perkalian " << endl;
    }
}