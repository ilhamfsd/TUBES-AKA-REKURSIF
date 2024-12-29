#include "perpus.h"

int main() {
    rakBuku rak;
    createRak(rak);

    infotype buku[20] = {
        {"Windows dan Linux", "Ilham Darmawan", 2020, 2022},
        {"Algoritma dan Struktur Data", "Budi Santoso", 2019, 2021},
        {"Basis Data", "Sari Dewi", 2018, 2023},
        {"Machine Learning", "Andi Pratama", 2021, 2023},
        {"Artificial Intelligence", "Lina Kusuma", 2020, 2022},
        {"Data Science", "Rina Agustina", 2022, 2023},
        {"Cloud Computing", "Fajar Nugroho", 2019, 2021},
        {"Web Development", "Siti Aminah", 2021, 2023},
        {"Mobile App Development", "Dian Kartika", 2020, 2022},
        {"Cyber Security", "Rahmat Hidayat", 2018, 2021},
        {"Networking Basics", "Ahmad Yusuf", 2019, 2022},
        {"Digital Marketing", "Desi Purnama", 2021, 2023},
        {"Software Engineering", "Eka Saputra", 2020, 2022},
        {"Operating Systems", "Yuni Setiawan", 2018, 2021},
        {"Database Management", "Tono Wijaya", 2019, 2021},
        {"Computer Networks", "Bambang Setyo", 2022, 2023},
        {"UI/UX Design", "Fitri Amelia", 2020, 2022},
        {"Game Development", "Hendra Kusumo", 2019, 2021},
        {"Internet of Things", "Adi Wijaya", 2021, 2023},
        {"Big Data", "Lilis Komariah", 2020, 2022}
    };

    int x = 0, i;
//    for (i = 0; i < 999; i++){
//        insertBuku(rak, buku[x]);
//        x++;
//        if (x == 20){
//            x = 0;
//        }
//    }

    for (i = 0; i < 19; i++){
        insertBuku(rak, buku[x]);
        x++;
        if (x == 20){
            x = 0;
        }
    }

    infotype last = {"Resep Masak", "Firmansyah", 2012, 2015};
    insertBuku(rak, last);

    cout << "\nMencari Buku:" << endl;
//    i = SequentialSearchBukuRekursif(rak, "Windows dan Linux", 0);
//    i = SequentialSearchBukuRekursif(rak, "Resep Masak", 0);
 //   i = SequentialSearchBukuRekursif(rak, "Web Development", 0);
    i = SequentialSearchBukuRekursif(rak, "Max Haavelar", 0);
    if (i != -1){
        cout << "Buku ditemukan: " << endl;
        cout << "Judul: " << rak.info[i].judul << endl;
        cout << "Penulis: " << rak.info[i].namaPenulis << endl;
        cout << "Tahun Terbit: " << rak.info[i].tahunTerbit << endl;
        cout << "Tahun Masuk: " << rak.info[i].tahunMasuk << endl;
    } else {
        cout << "not found" << endl;
    }

    return 0;
}
