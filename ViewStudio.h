#include <iostream>
#include <string>
#include "ModelStudio.h"
using namespace std;

void inputStudio(){
    string namaStudioinput;
    int jumlahKursiinput;
    cout << "Masukkan nama studio: ";
    cin >> namaStudioinput;
    cout<< "Masukkan jumlah kursi: ";
    cin >> jumlahKursiinput;
    addStudio(namaStudioinput, jumlahKursiinput);
}

void viewAllStudio(){
    viewStudios();
}

void cariStudio(){
    string namaStudioinput;
    cout << "Masukkan nama studio: ";
    cin >> namaStudioinput;
    int index = seachStudio(namaStudioinput);
    if (index != -1) {
        cout << "Nama Studio: " << namaStudio[index] << endl;
        cout << "Jumlah Kursi: " << jumlahKursi[index] << endl;
    } else {
        cout << "Studio tidak ditemukan" << endl;
    }
}