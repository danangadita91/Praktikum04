#include <iostream>
using namespace std;
int main() {
    awal:
    int j_kue;
    char kode,yt;
    cout<<"      DAFTAR HARGA NAPOLEON MEDAN       " << endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout<<"| Kode |    Daftar Kue               |    Harga   |" << endl;
    cout<<"|   1  | NAPOLEON GREAT CHOCOLATE    |    80000   |" << endl;
    cout<<"|   2  | NAPOLEON RED VELVET         |    77000   |" << endl;
    cout<<"|   3  | NAPOLEON EXTRA CHEESE       |    90000   |" << endl;
    cout<<"|   4  | NAPOLEON CHEESE             |    85000   |" << endl;
    cout<<"|_ _ _ |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _|_ _ _ _ _ _ |" << endl;
    cout<<endl;
    cout<<"Masukan kode kue : " ;cin>>kode;
    cout<<"Jumlah Kue       : " ;cin>>j_kue;
  if (kode=='1') {
    int diskon,tot,t_bay,h_kue;
    h_kue=80000;
    tot=j_kue*h_kue;
        if (tot>=1000000) (diskon=tot*0.1);
        else if (tot>=501000) (diskon=tot*0.05);
        else (diskon=tot*0);
    t_bay=tot-diskon;
    cout << "Nama Kue         : "<<"NAPOLEON GREAT CHOCOLATE"<< endl;
    cout << "Harga Kue        : Rp." <<h_kue<< endl;
    cout << "Jumlah Kue       : " <<j_kue<< endl;
    cout << "Total Harga      : Rp." <<tot<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<t_bay<<",-"<< endl;
    }
    else if (kode=='2') {
    int diskon,tot,t_bay,h_kue;
    h_kue=77000;
    tot=j_kue*h_kue;
        if (tot>=1000000) (diskon=tot*0.1);
        else if (tot>=501000) (diskon=tot*0.05);
        else (diskon=tot*0);
    t_bay=tot-diskon;
    cout << "Nama Kue         : "<<"NAPOLEON RED VELVET"<< endl;
    cout << "Harga Kue        : Rp." <<h_kue<< endl;
    cout << "Jumlah Kue       : " <<j_kue<< endl;
    cout << "Total Harga      : Rp." <<tot<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<t_bay<<",-"<< endl;
    }
    else if (kode=='3') {
    int diskon,tot,t_bay,h_kue;
    h_kue=90000;
    tot=j_kue*h_kue;
        if (tot>=1000000) (diskon=tot*0.1);
        else if (tot>=501000) (diskon=tot*0.05);
        else (diskon=tot*0);
    t_bay=tot-diskon;
    cout << "Nama Kue         : "<<"NAPOLEON EXTRA CHEESE"<< endl;
    cout << "Harga Kue        : Rp." <<h_kue<< endl;
    cout << "Jumlah Kue       : " <<j_kue<< endl;
    cout << "Total Harga      : Rp." <<tot<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<t_bay<<",-"<< endl;
    }
    else if (kode=='4') {
    int diskon,tot,t_bay,h_kue;
    h_kue=85000;
    tot=j_kue*h_kue;
        if (tot>=1000000) (diskon=tot*0.1);
        else if (tot>=501000) (diskon=tot*0.05);
        else (diskon=tot*0);
    t_bay=tot-diskon;
    cout << "Nama Kue         : "<<"NAPOLEON CHEESE"<< endl;
    cout << "Harga Kue        : Rp." <<h_kue<< endl;
    cout << "Jumlah Kue       : " <<j_kue<< endl;
    cout << "Total Harga      : Rp." <<tot<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Diskon           : Rp." <<diskon<<",-"<< endl;
    cout << "------------------------------------------------------------------" <<endl;
    cout << "Total Bayar      : Rp." <<t_bay<<",-"<< endl;
    }
    else {
    cout<<"Menu "<<kode<<" tidak ada di daftar menu";
    cout<<endl;
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
