#include <iostream>
#include <string>
#include "Database.h"
#include "ModelStudio.h"
#include "ModelFilm.h"

using namespace std;

void addJadwal(int inpnKodeTayang, string inpnJamTayang, string inpnTanggalTayang, string inpnNamaStudioTayang, string inpnJudulFilmTayang, int inpnHargaTiket) {

    //search studio
    int indexStudio = seachStudio(inpnNamaStudioTayang);

    // search film
    int indexFilm = searchFilm(inpnJudulFilmTayang);

    // add jadwal
    if ((indexStudio != -1) && (indexFilm != -1)) {
        kodeTayang[nJadwal] = inpnKodeTayang;
        jamTayang[nJadwal] = inpnJamTayang;
        tanggalTayang[nJadwal] = inpnTanggalTayang;
        namaStudioTayang[nJadwal] = inpnNamaStudioTayang;
        judulFilmTayang[nJadwal] = inpnJudulFilmTayang;
        hargaTiket[nJadwal] = inpnHargaTiket;
        nJadwal++;
    } else {
        cout << "Studio atau Film tidak ditemukan" << endl;
    }
}

void viewJadwals() {
    cout << "Daftar Jadwal Tayang" << endl;
    for (int i = 0; i < nJadwal; i++) {
        cout << "Kode Tayang: " << kodeTayang[i] << endl;
        cout << "Jam Tayang: " << jamTayang[i] << endl;
        cout << "Tanggal Tayang: " << tanggalTayang[i] << endl;
        cout << "Nama Studio: " << namaStudioTayang[i] << endl;
        cout << "Judul Film: " << judulFilmTayang[i] << endl;
        cout << "Harga Tiket: " << hargaTiket[i] << endl;
        cout << endl;
    }
}