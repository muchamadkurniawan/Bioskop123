#include <iostream>
#include <string>
#include "ModelFilm.h"

using namespace std;

void inputFilm(){
    string judulFilminput;
    string genreFilminput;
    string durasiFilminput;
    cout << "Masukkan judul film: ";
    cin >> judulFilminput;
    cout<< "Masukkan genre film: ";
    cin >> genreFilminput;
    cout<< "Masukkan durasi film: ";
    cin >> durasiFilminput;
    addFilm(judulFilminput, genreFilminput, durasiFilminput);
}

void cetakFilm(){
    viewFilms();
}

void cariFilm(){
    string judulFilminput;
    cout << "Masukkan judul film: ";
    cin >> judulFilminput;
    int index = searchFilm(judulFilminput);
    if (index != -1) {
        cout << "Judul Film: " << judulFilm[index] << endl;
        cout << "Genre Film: " << genreFilm[index] << endl;
        cout << "Durasi Film: " << durasiFilm[index] << endl;
    } else {
        cout << "Film tidak ditemukan" << endl;
    }
}