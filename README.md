# Praktikum04

```
Latihan 1 "Program toko dengan kodisi diskon tertentu"
Alur Algoritma :
1. Mendeklarasikan awal: (yt) untuk rumus perulangan "pilihan di akhir"
    	{cin>>yt;
    	if(yt=='Y' || yt=='y')
    	{goto awal;}
    	if(yt=='T' || yt=='t')
    	{goto selesai;}
    	selesai:}
2. Menggunakan variable awal: (yt) untuk rumus perulangan "kode>4" pilihan menu
	if (kode>'4') {
	cin>>yt;
    	if(yt=='Y' || yt=='y')
    	{goto awal;}
    	if(yt=='T' || yt=='t')
    	{goto selesai;}
    	selesai:}
3. Mendeklarasikan int jumlah, kode sebagai variable input
4. Mendeklarasikan int, diskon,total,GT,harga sebagai variable perhitungan
5. Menentukan rumus diskon dengan kondisi >=1jt(10%), >500k(5%), <500k(0%)
	if (total>=1000000) (diskon=total*0.1);
        else if (total>=501000) (diskon=total*0.05);
        else (diskon=total*0);
6. Menggunakan rumus perhitungan dengan diskon yang telah di tentukan
	"Digunakan di setiap variable input"
	total=jumlah*harga;
        if (total>=1000000) (diskon=total*0.1);
        else if (total>=501000) (diskon=total*0.05);
        else (diskon=total*0);
	GT=total-diskon;
```
Berikut Pseudo_Code :
```
Pseudo-Code :
1. kode :....
2. if kode>4 then goto no 1, else no 7
3. jumlah : ....
4. total=jumlah*harga
5. if (total>=1000000) (diskon=total*0.1)
	else if (total>=501000) (diskon=total*0.05)
        else (diskon=total*0)
6. GT=total-diskon;
7. Pilihan?
8. if (Y) then goto no 1, else (T) goto no 7
9. selesai
```
Berikut Kode Lengkapnya :
```c++
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
```
Berikut hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum04/master/Latihan1/Kode%20pilihan%20tidak%20ada%20(T-selesai).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum04/master/Latihan1/Kode%20pilihan%20tidak%20ada%20(Y-Start).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum04/master/Latihan1/Kondisi%20diskon%2010%25(1).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum04/master/Latihan1/Kondisi%20diskon%2010%25(2).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum04/master/Latihan1/Kondisi%20diskon%205%25(1).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum04/master/Latihan1/Kondisi%20diskon%205%25(2).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum04/master/Latihan1/Kondisi%20tanpa%20diskon(1).png)
![img](https://raw.githubusercontent.com/danangadita91/Praktikum04/master/Latihan1/Kondisi%20tanpa%20diskon(2).png)