#include <iostream>
#include <cstdlib>

using namespace std;

void header() {
    cout << "::-------------------------------------------------------------::\n";
    cout << "::        ============== Selamat Datang ==============         ::\n";
    cout << "::        =========== HOTEL SUKABUMI INDAH ===========         ::\n";
    cout << "::-------------------------------------------------------------::\n\n";
}
void footer() {
    cout << "\n::-------------------------------------------------------------::\n";
    cout << "::        ======== Terima Kasih Telah Memilih ========         ::\n";
    cout << "::        =========== HOTEL SUKABUMI INDAH ===========         ::\n";
    cout << "::-------------------------------------------------------------::\n";
}

int main() {
    int lama, kamar, total, diskon, akhir, uang, kembali, hasil, harga[3]={200000, 500000, 800000};
    string yakin, nama;
    //long harga[3]={200000, 500000, 800000};
    header();
    pilih_kamar:
    do {
        cout << "Silahkan Memilih Jenis Kamar Yang Tersedia :\n";
        cout << "1. Kamar Regular\n";
        cout << "2. Kamar VIP\n";
        cout << "3. Kamar VVIP\n";
        cout << "4. Cancel\n";
        cout << "Masukan Pilihan Kamar Anda : ";
        cin >> kamar;
        system("CLS");
        header();
        switch (kamar) {
            case 1: {
                cout << "Anda memilih Kamar Regular\n";
                cout << "\tFasilitas     : 2 Single Bed, 1 Kamar Mandi, AC, TV\n";
                cout << "\tHarga Perhari : Rp. 200.000\n\n";
                cout << "Apakah Anda Akan Memesan Kamar ini? (ya/tidak) : ";
                cin >> yakin;
                system("CLS");

                if (yakin == "ya" || yakin == "Ya") {
                    header();
                    cout << "Masukan Nama Anda\t: ";
                    cin >> nama;
                    cout << "Lama Menginap (Hari)\t: ";
                    cin >> lama;
                    total = lama*harga[0];
                    cout << "Total Harga\t\t: Rp. " << total << endl;

                    if (total >= 600000) {
                        cout << "\nSelamat Anda Mendapatkan Diskon 10%" << endl;
                        cout << "\n\tSilahkan Melalukan Pembayaran\n";
                        diskon=0.10*total;
                        hasil=total-diskon;
                        cout << "\nTotal yang harus dibayarkan \t: Rp. " << hasil << endl;
                        cout << "Masukan uang anda \t\t: Rp. ";
                        cin >> uang;
                        kembali=uang-hasil;
                        cout << "Uang Kembalian \t\t\t: Rp. " << kembali << endl;
                        footer();
                    } else {
                        cout << "\n\tSilahkan Melalukan Pembayaran\n";
                        cout << "\nTotal yang harus dibayarkan \t: Rp. " << total << endl;
                        cout << "Masukan uang anda \t\t: Rp. ";
                        cin >> uang;
                        kembali= uang - total;
                        cout << "Uang Kembalian \t\t\t: Rp. " << kembali << endl;
                    }
                } else {
                    system("CLS");
                    header();
                    goto pilih_kamar;
                }
            break; }
            case 2: {
                cout << "Anda memilih Kamar VIP\n";
                cout << "\tFasilitas     : 2 Single Bed, 1 Queen Bed, 1 Kamar Mandi, AC, TV, Kulkas\n";
                cout << "\tHarga Perhari : Rp. 500.000\n\n";
                cout << "Apakah Anda Akan Memesan Kamar ini? (ya/tidak) : ";
                cin >> yakin;
                system("CLS");

                if (yakin == "ya" || yakin == "Ya") {
                    header();
                    cout << "Masukan Nama Anda\t: ";
                    cin >> nama;
                    cout << "Lama Menginap (Hari)\t: ";
                    cin >> lama;
                    total = lama*harga[1];
                    cout << "Total Harga\t\t: Rp. " << total << endl;

                    if (total >= 1500000) {
                        cout << "\nSelamat Anda Mendapatkan Diskon 20%" << endl;
                        cout << "\n\tSilahkan Melalukan Pembayaran\n";
                        diskon=0.20*total;
                        hasil=total-diskon;
                        cout << "\nTotal yang harus dibayarkan \t: Rp. " << hasil << endl;
                        cout << "Masukan uang anda \t\t: Rp. ";
                        cin >> uang;
                        kembali=uang-hasil;
                        cout << "Uang Kembalian \t\t\t: Rp. " << kembali << endl;
                        footer();
                    } else {
                        kembali=uang-total;
                        cout << "\n\tSilahkan Melalukan Pembayaran\n";
                        cout << "\nTotal yang harus dibayarkan \t: Rp. " << total << endl;
                        cout << "Masukan uang anda \t\t: Rp. ";
                        cin >> uang;
                        cout << "Uang Kembalian \t\t\t: Rp. " << kembali << endl;
                    }
                } else {
                    system("CLS");
                    header();
                    goto pilih_kamar;
                }
            break; }
            case 3: {
                cout << "Anda memilih Kamar VVIP\n";
                cout << "\tFasilitas     : 1 King Bed, 1 Queen Bed, 2 Kamar Mandi, AC, TV, Kulkas\n";
                cout << "\tHarga Perhari : Rp. 800.000\n\n";
                cout << "Apakah Anda Akan Memesan Kamar ini? (ya/tidak) : ";
                cin >> yakin;
                system("CLS");

                if (yakin == "ya" || yakin == "Ya") {
                    header();
                    cout << "Masukan Nama Anda\t: ";
                    cin >> nama;
                    cout << "Lama Menginap (Hari)\t: ";
                    cin >> lama;
                    total = lama*harga[2];
                    cout << "Total Harga\t\t: Rp. " << total << endl;

                    if (total >= 2400000) {
                        cout << "\nSelamat Anda Mendapatkan Diskon 30%" << endl;
                        cout << "\n\tSilahkan Melalukan Pembayaran\n";
                        diskon=0.30*total;
                        hasil=total-diskon;
                        cout << "\nTotal yang harus dibayarkan \t: Rp. " << hasil << endl;
                        cout << "Masukan uang anda \t\t: Rp. ";
                        cin >> uang;
                        kembali=uang-hasil;
                        cout << "Uang Kembalian \t\t\t: Rp. " << kembali << endl;
                        footer();
                    } else {
                        kembali=uang-total;
                        cout << "\n\tSilahkan Melalukan Pembayaran\n";
                        cout << "\nTotal yang harus dibayarkan \t: Rp. " << total << endl;
                        cout << "Masukan uang anda \t\t: Rp. ";
                        cin >> uang;
                        cout << "Uang Kembalian \t\t\t: Rp. " << kembali << endl;
                    }
                } else {
                    system("CLS");
                    header();
                    goto pilih_kamar;
                }
            break; }
        }
    } while (kamar =! 4);
    return 0;
}
