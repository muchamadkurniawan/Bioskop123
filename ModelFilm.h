#include <string>
#include <iostream>
#include "Database.h"
using namespace std;

void addFilm(string inpnJudulFilm, string inpnGenreFilm, string inpnDurasiFilm);
void viewFilms();
int seachFilm(string inpnJudulFilm);
void updateFilm(string inpnJudulFilm, string inpnGenreFilm, string inpnDurasiFilm);

void addFilm(string inpnJudulFilm, string inpnGenreFilm, string inpnDurasiFilm) {
    judulFilm[nFilm] = inpnJudulFilm;
    genreFilm[nFilm] = inpnGenreFilm;
    durasiFilm[nFilm] = inpnDurasiFilm;
    nFilm++;
}

void viewFilms(){
    cout << "Daftar Film" << endl;
    for (int i = 0; i < nFilm; i++) {
        cout << "Judul Film: " << judulFilm[i] << endl;
        cout << "Genre Film: " << genreFilm[i] << endl;
        cout << "Durasi Film: " << durasiFilm[i] << endl;
        cout << endl;
    }
}

int searchFilm(string inpnJudulFilm) {
    int index = -1;
    for (int i = 0; i < nFilm; i++) {
        if (judulFilm[i] == inpnJudulFilm) {
            index = i;
            break;
        }
    }
    return index;
}
