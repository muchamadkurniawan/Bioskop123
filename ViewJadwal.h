#include <iostream>
#include <string>
#include "ModelJadwal.h"

using namespace std;

void inputJadwal(){
    int kodeJadwalinput;
    string judulFilminput;
    string namaStudioinput;
    string jamTayanginput;
    string durasiFilminput;
    int hargaTiketinput;
    cout << "Masukkan kode jadwal: ";
    cin>> kodeJadwalinput;
    cout << "Masukkan judul film: ";
    cin >> judulFilminput;
    cout << "masukkan nama Stuido";
    cin>> namaStudioinput;
    cout << "Masukkan jam tayang: ";
    cin >> jamTayanginput;
    cout<< "Masukkan durasi film: ";
    cin >> durasiFilminput;
    cout<< "Masukkan harga tiket: ";
    cin >> hargaTiketinput;

    addJadwal(kodeJadwalinput, judulFilminput, namaStudioinput, jamTayanginput, durasiFilminput, hargaTiketinput);
}

void cetakJadwal(){
    viewJadwals();
}