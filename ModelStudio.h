
#include <iostream>
#include <string>
#include "Database.h"

using namespace std;

void addStudio(string inpnNamaStudio, int inpnJumlahKursi) {
    namaStudio[nStudio] = inpnNamaStudio;
    jumlahKursi[nStudio] = inpnJumlahKursi;
    nStudio++;
}

void viewStudios(){
    cout << "Daftar Studio" << endl;
    for (int i = 0; i < nStudio; i++) {
        cout << "Nama Studio: " << namaStudio[i] << endl;
        cout << "Jumlah Kursi: " << jumlahKursi[i] << endl;
        cout << endl;
    }
}

int seachStudio(string inpnNamaStudio) {
    int index = -1;
    for (int i = 0; i < nStudio; i++) {
        if (namaStudio[i] == inpnNamaStudio) {
            index = i;
            break;
        }
    }
    return index;
}