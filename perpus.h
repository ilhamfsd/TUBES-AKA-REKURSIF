#ifndef PERPUS_H_INCLUDED
#define PERPUS_H_INCLUDED
#include <iostream>

using namespace std;

struct buku{
    string judul, namaPenulis;
    int tahunTerbit, tahunMasuk;
};

typedef struct buku infotype;

struct rakBuku{
    int Top;
    infotype info[1000];
};

void createRak(rakBuku &L);
void insertBuku(rakBuku &L, infotype x);
int SequentialSearchBukuRekursif(rakBuku L, string x, int i);


#endif // PERPUS_H_INCLUDED
