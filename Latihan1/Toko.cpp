#include <iostream>
using namespace std;
int main() {
    awal:
    int jumlah;
    char kode,yt;
    cout<<"          DAFTAR HARGA NAPOLEON MEDAN       " << endl;
    cout<<" ================================================= " << endl;
    cout<<"  Kode      Daftar Kue                    Harga    " << endl;
    cout<<" ================================================= " << endl;
    cout<<"    1.   NAPOLEON GREAT CHOCOLATE    :    80000    " << endl;
    cout<<"    2.   NAPOLEON RED VELVET         :    77000    " << endl;
    cout<<"    3.   NAPOLEON EXTRA CHEESE       :    90000    " << endl;
    cout<<"    4.   NAPOLEON CHEESE             :    85000    " << endl;
    cout<<" ==================================================" << endl;
    cout<<endl;
    cout<<"Masukan kode kue : " ;cin>>kode;
    if (kode>'4'){
    cout<<"Menu "<<kode<<" Tidak ada di daftar menu"<<endl;
    cout<<"Apakah anda ingin mengulang ? [Y/T] : ";
    cin>>yt;
    cout<<endl;

    if(yt=='Y' || yt=='y')
    {goto awal;}
    if(yt=='T' || yt=='t')
    {goto selesai;}
    }
    cout<<"Jumlah Kue       : " ;cin>>jumlah;
  if (kode=='1') {
    int diskon,total,GT,harga;
    harga=80000;
    total=jumlah*harga;
        if (total>=1000000) (diskon=total*0.1);
        else if (total>=501000) (diskon=total*0.05);
        else (diskon=total*0);
    GT=total-diskon;
    cout << "Nama Kue         : "<<"NAPOLEON GREAT CHOCOLATE"<< endl;
    cout << "Harga Kue        : Rp." <<harga<< endl;
    cout << "Jumlah Kue       : " <<jumlah<<" kotak"<< endl;
    cout << "Total Harga      : Rp." <<total<<",-"<< endl;
    cout << "------------------------------------------------+" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "-------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<GT<<",-"<< endl;
    }
    else if (kode=='2') {
    int diskon,total,GT,harga;
    harga=77000;
    total=jumlah*harga;
        if (total>=1000000) (diskon=total*0.1);
        else if (total>=501000) (diskon=total*0.05);
        else (diskon=total*0);
    GT=total-diskon;
    cout << "Nama Kue         : "<<"NAPOLEON RED VELVET"<< endl;
    cout << "Harga Kue        : Rp." <<harga<< endl;
    cout << "Jumlah Kue       : " <<jumlah<<" kotak"<< endl;
    cout << "Total Harga      : Rp." <<total<<",-"<< endl;
    cout << "------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<GT<<",-"<< endl;
    }
    else if (kode=='3') {
    int diskon,total,GT,harga;
    harga=90000;
    total=jumlah*harga;
        if (total>=1000000) (diskon=total*0.1);
        else if (total>=501000) (diskon=total*0.05);
        else (diskon=total*0);
    GT=total-diskon;
    cout << "Nama Kue         : "<<"NAPOLEON EXTRA CHEESE"<< endl;
    cout << "Harga Kue        : Rp." <<harga<< endl;
    cout << "Jumlah Kue       : " <<jumlah<<" kotak"<< endl;
    cout << "Total Harga      : Rp." <<total<<",-"<< endl;
    cout << "-----------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "-----------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<GT<<",-"<< endl;
    }
    else if (kode=='4') {
    int diskon,total,GT,harga;
    harga=85000;
    total=jumlah*harga;
        if (total>=1000000) (diskon=total*0.1);
        else if (total>=501000) (diskon=total*0.05);
        else (diskon=total*0);
    GT=total-diskon;
    cout << "Nama Kue         : "<<"NAPOLEON CHEESE"<< endl;
    cout << "Harga Kue        : Rp." <<harga<< endl;
    cout << "Jumlah Kue       : " <<jumlah<<" kotak"<< endl;
    cout << "Total Harga      : Rp." <<total<<",-"<< endl;
    cout << "------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<GT<<",-"<< endl;
    }
    cout<<endl;
    cout<<"Apakah anda ingin mengulang ? [Y/T] : ";
    cin>>yt;
    cout<<endl;
    if(yt=='Y' || yt=='y')
    {goto awal;}
    if(yt=='T' || yt=='t')
    {goto selesai;}
    selesai:
     return 0;
}
