#include "perpus.h"

void createRak(rakBuku &L) {
    L.Top = -1;
}

void insertBuku(rakBuku &L, infotype x) {
    if (L.Top < 1000) {
        L.Top++;
        L.info[L.Top] = x;
    } else {
        cout << "Rak buku penuh!" << endl;
    }
}

int SequentialSearchBukuRekursif(rakBuku L, string x, int i) {
    if (i > L.Top) {
        return -1;
    } else if (L.info[i].judul == x) {
        return i;
    }
    return SequentialSearchBukuRekursif(L, x, i + 1);
}

