// library
#include <iostream>
using namespace std;

// deklarasi global
int p,l;

//implementasi prosedur dan fungsi 
void input(){
    cout << 'masukan lebar =';
    cin >> p;
    cout << "masukan lebar =";
    cin >> l;
}

float jumlah(float a, float b, float c){
    return a+b+c;
}

int luasoersegip(int a, int b){
}


void output(){ //mulai
    input();
    output();
    cout << "hasil penjumlahan =" << jumlah(15,1,24.9,67);
} // selesai