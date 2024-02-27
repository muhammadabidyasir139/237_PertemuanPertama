#include <iostream>
using namespace std;

int main() //jangan pernah dihapus
{
    //Begin
    //numeric nAlas, nTinggi, nLuas
    //display "masukan Alas ="
    //Accept nAlas
    //Display 'Masukan Tinggi = '
    //Accept nTinggi
    //compute nLuas = nAlas*nTinggi/2
    // Display 'Luasnya = ' + nLuas
    // End
   
    float nAlas, nTinggi, nLuas;
    cout << "masukan alas = ";
    cin >> nAlas;
    cout << "masukan Tinggi = ";
    cin >> nTinggi;
    nLuas = nAlas * nTinggi / 2;
    cout << "Luasnya = " << nLuas;

    int panjang, lebar, luas;
    cout << "masukan panjang = ";
    cin >> panjang;
    cout << "masukan lebar = ";
    cin >> lebar;
    luas = panjang * lebar;
    cout << "Luasnya = " << luas;
     
}

