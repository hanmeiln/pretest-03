/*
Nama program    : Exercise 01
Nama            : Hana Meilina Fauziyyah
NPM             : 140810180012
Tanggal buat    : 6 Maret 2019
Deskripsi       : Menginput nama, umur, goldar, dan jenis kelamin menggunakan stuct
*************************************************/

#include <iostream>
#include <string.h>
using namespace std;

struct Mahasiswa{
    char npm[14];
    char nama[40];
    float ipk;
};

Mahasiswa mhs[20];

void banyakData(int& n);
void inputMhs(Mahasiswa& mhs, int n);
void cetakMhs(Mahasiswa mhs, int n);
void sortNama(Mahasiswa& mhd, int n);

int main(){
    int n;
        banyakData(n);
        inputMhs(mhs, n);
        cetakMhs(mhs, n);
        sortNama(mhs, n);
}

void banyakData(int& n){
    cout<<"Masukkan Banyak Data : ";
    cin>>n;
}

void inputMhs(Mahasiswa& mhs, int n){
    for (int i=0; i<n; i++){
        cout<<"Masukkan npm : ";
        cin>>mhs[i].npm;
        cout<<"Masukkan nama : ";
        cin>>mhs[i].nama;
        cout<<"Masukkan IPK : ";
        cin>>mhs[i].ipk;
    }
}

void cetakMhs(Mahasiswa mhs, int n){
    for (int i=0; i<n; i++){
        cout<"NPM : "<<mhs[i].npm<<endl;
        cout<"Nama : "<<mhs[i].nama<<endl;
        cout<"IPK : "<<mhs[i].ipk<<endl;
    }
}

void sortNama(Mahasiswa mhs, int n){

}
