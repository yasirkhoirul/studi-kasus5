#include<iostream>
using namespace std;
class Proses{
  public :
 void sks(){
     cout << "Aplikasi pendaftaran SKS\n";
      cout << "NIM : "; cin >> nim;
      cout << "Nama : "; cin >> nama;
      cout << "pilihan matkul setiap matkul 3 sks : \n";
      cout << "1.) Algoritma Pemrograman Rp. 125.000 \n";
      cout << "2.) Matematika Diskret    Rp. 125.000 \n";
      cout << "3.) Pemrograman Web    Rp. 125.000\n";
      cout << "4.) Dasar-dasar pemrograman   Rp. 125.000\n";
      cout << "Mengambil matkul Alpro? => \n";cin >> pilihan1;
      cout << "Mengambil matkul Matdisk? => \n";cin >> pilihan2;
      cout << "Mengambil matkul Pemrograman Web => \n";cin >> pilihan3;
      cout << "Mengambil matkul Dasar-dasar pemrograman => \n";cin >> pilihan4;
      cout<<endl;
    jumlah=0;
    total=pilihan1+pilihan2+pilihan3+pilihan4;
   total1=cetak(total);
 	 harga=(total1*125000)*0.85;
   cout<<"nama = "<<nama<<endl;
   cout<<"nim = "<<nim<<endl;
   cout<<"pilihan matkul : ";
   cout<<"\nalpro   =     "  <<pilihan1;
   cout<<"\nmatdis  =     "<<pilihan2;
   cout<<"\npweb    =     "<<pilihan3;
   cout<<"\nddp     =     "<<pilihan4;
   cout<<"\nsks     =     "<<total1<<endl;
   cout<<"total = "<<total<<endl;
   cout<<"harga = "<<harga<<endl;
    
  }
   int cetak(int n){
  	int i = 1;
  	jumlah+=0;
  	if(i<=n){
  		jumlah+=3;
  		cetak(n-1);
  		return jumlah;
	}
  
	};
	
  private :
	int n;
  int pilihan1,pilihan2,pilihan3,pilihan4,harga;
  int i,total,jumlah,total1;
  string nim,nama;
};
  
int main(){
	Proses x;
	x.sks();
}

