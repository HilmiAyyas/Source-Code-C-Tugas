#include <iostream>
using namespace std;

    int main(){
        int menu, buy, jumlah, total, duit, kembalian, receipt;
        char pilihan;
        char barang;

        awal:
        cout << " | Welcome to Unas Shop \n";
        cout << " | 1. Lihat Pricelist \n";
        cout << " | 2. Cari Harga Barang \n";
        cout << " | 3. Mulai Order \n";
        cout << " | 4. Bayar \n";
        cout << " | 5. Receipt \n";
        cout << " | Silahkan Pilih Menu : ";
        cin >> menu;
        cout << endl;
            if (menu==1){
                cout << " | 1. Baju 3Second - Rp.150.000 \n";
                cout << " | 2. Jaket Arcteryx - Rp.7.900.000 \n";
                cout << " | 3. Celana Tartan - Rp.300.000 \n";
                cout << " | Ingin Memilih Menu Lain (Y/N) ? ";
                cin >> pilihan;
                cout << endl;
                    if (pilihan=='Y' || pilihan=='y'){
                        goto awal;
                    }
                    if (pilihan=='N' || pilihan=='n'){
                        goto akhir;
                    }
            }
            if (menu==2){
                cout << " | Masukan Barang Yang Ingin Dicari : ";
                cin >> barang;
                    if (barang=='Baju' || barang=='baju'){
                        cout << " | Harga Barang Yang Dicari = Rp.150.000";
                    }
                    if (barang=='Jaket' || barang=='jaket'){
                        cout << " | Harga Barang Yang Dicari = Rp.150.000";
                    }
                    if (barang=='Celana' || barang=='celana'){
                        cout << " | Harga Barang Yang Dicari = Rp.300.000";
                    }
            }
            if (menu==3){
                cout << " | Barang Yang Ada Di Unas Shop \n";
                cout << " | 1. Baju 3Second - Rp.150.000 \n";
                cout << " | 2. Jaket Arcteryx - Rp.7.900.000 \n";
                cout << " | 3. Celana Tartan - Rp.300.000 \n";
                cout << " | Masukan Barang Yang Ingin Kamu Beli : ";
                cin >> buy;
                    if (buy==1){
                        cout << " | Masukan Jumlah Barang : ";
                        cin >> jumlah;
                            if (jumlah==0){
                                cout << " | Jumlah Tidak Boleh 0 \n";
                                cout << " | Masukan Jumlah Barang : ";
                                cin >> jumlah;
                            }
                    }
                    if (buy==2){
                        cout << " | Masukan Jumlah Barang : ";
                        cin >> jumlah;
                            if (jumlah==0){
                                cout << " | Jumlah Tidak Boleh 0 \n";
                                cout << " | Masukan Jumlah Barang : ";
                                cin >> jumlah;
                            }
                    }
                    if (buy==3){
                        cout << " | Masukan Jumlah Barang : ";
                        cin >> jumlah;
                            if (jumlah==0){
                                cout << " | Jumlah Tidak Boleh 0 \n";
                                cout << " | Masukan Jumlah Barang : ";
                                cin >> jumlah;
                            }
                    }
                    cout << " | Ingin Memilih Menu Lain (Y/N) ? ";
                    cin >> pilihan;
                    cout << endl;
                    if (pilihan=='Y' || pilihan=='y'){
                        goto awal;
                    }
                    if (pilihan=='N' || pilihan=='n'){
                        goto akhir;
                    }
            }
            if (menu==4){
                if (buy<=0 || buy>3){
                    cout << " | Anda Belum Melakukan Pembelian \n";
                    cout << " | Silahkan Lakukan Pembelian Terlebih Dahulu \n";
                }
                if (buy==1){
                    total=jumlah*150000;
                    cout << " | Jumlah Yang Harus Dibayar : " << total << endl;
                    cukup1:
                    cout << " | Masukan Jumlah Pembayaran : ";
                    cin >> duit;
                        if (duit<total){
                            cout << " | Uang Anda Tidak Cukup \n";
                            goto cukup1;
                        }
                        if (duit>total){
                            kembalian=duit-total;
                            cout << " | Kembalian Yang Tersisa : " << kembalian << endl;
                        }
                }
                if (buy==2){
                    total=jumlah*7900000;
                    cout << " | Jumlah Yang Harus Dibayar : " << total << endl;
                    cukup2:
                    cout << " | Masukan Jumlah Pembayaran : ";
                    cin >> duit;
                        if (duit<total){
                            cout << " | Uang Anda Tidak Cukup \n";
                            goto cukup2;
                        }
                        if (duit>total){
                            kembalian=duit-total;
                            cout << " | Kembalian Yang Tersisa : " << kembalian << endl;
                        }
                }
                if (buy==3){
                    total=jumlah*300000;
                    cout << " | Jumlah Yang Harus Dibayar : " << total << endl;
                    cukup3:
                    cout << " | Masukan Jumlah Pembayaran : ";
                    cin >> duit;
                        if (duit<total){
                            cout << " | Uang Anda Tidak Cukup \n";
                            goto cukup3;
                        }
                        if (duit>total){
                            kembalian=duit-total;
                            cout << " | Kembalian Yang Tersisa : " << kembalian << endl;
                        }
                }
                cout << " | Ingin Memilih Menu Lain (Y/N) ? ";
                cin >> pilihan;
                cout << endl;
                if (pilihan=='Y' || pilihan=='y'){
                    goto awal;
                }
                if (pilihan=='N' || pilihan=='n'){
                    goto akhir;
                }
            }
            if (menu==5){
                if (buy<=0 || buy>3){
                    cout << " | Anda Belum Melakukan Pembelian \n";
                    cout << " | Silahkan Lakukan Pembelian Terlebih Dahulu \n";
                }
                if (buy==1){
                    cout << " | ========== UNAS SHOP ========== | \n";
                    cout << " | Nama Barang : Baju 3Second \n";
                    cout << " | Jumlah Barang : " << jumlah << endl;
                    cout << " | Harga Barang Per Pcs : Rp.150.000 \n";
                    cout << " | Total Yang Harus Dibayar : " << total << endl;
                    cout << " | Duit Pembeli : " << duit << endl;
                    cout << " | Kembalian : " << kembalian << endl;
                    cout << " | Terima Kasih Telah Belanja Disini |";
                }
                if (buy==2){
                    cout << " | ========== UNAS SHOP ========== | \n";
                    cout << " | Nama Barang : Jaket Arcteryx \n";
                    cout << " | Jumlah Barang : " << jumlah << endl;
                    cout << " | Harga Barang Per Pcs : Rp.7.900.000 \n";
                    cout << " | Total Yang Harus Dibayar : " << total << endl;
                    cout << " | Duit Pembeli : " << duit << endl;
                    cout << " | Kembalian : " << kembalian << endl;
                    cout << " | Terima Kasih Telah Belanja Disini |";
                }
                if (buy==3){
                    cout << " | ========== UNAS SHOP ========== | \n";
                    cout << " | Nama Barang : Celana Tartan \n";
                    cout << " | Jumlah Barang : " << jumlah << endl;
                    cout << " | Harga Barang Per Pcs : Rp.300.000 \n";
                    cout << " | Total Yang Harus Dibayar : " << total << endl;
                    cout << " | Duit Pembeli : " << duit << endl;
                    cout << " | Kembalian : " << kembalian << endl;
                    cout << " | Terima Kasih Telah Belanja Disini |";
                }
                cout << " | Ingin Memilih Menu Lain (Y/N) ? ";
                cin >> pilihan;
                cout << endl;
                if (pilihan=='Y' || pilihan=='y'){
                    goto awal;
                }
                if (pilihan=='N' || pilihan=='n'){
                    goto akhir;
                }
            }


    akhir:
    return 0;
    }