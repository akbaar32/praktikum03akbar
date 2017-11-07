#include <iostream>
using namespace std;

int main(){
	char pilih,A ,B ;
	int al, p, l , t, L ;
	
	cout <<"A : Persegi Panjang"<<endl;
	cout <<"B : Segitiga"<<endl;
	cout << " =>>:Luas Yang Akan Di hitung A atau B : "; cin>>pilih;
  
  		if (pilih=='A'){
  			system("cls");
  			cout<<"		||--Anda Memilih Menghitung Luas Persegi Panjang--||"<<endl;
  			cout<<""<<endl;
  			cout<<"Input Panjang Persegi Panjang = "; cin>>p;
  			cout<<"Input Lebar Persegi Panjang ="; cin>>l;
  			L=p*l;
  			
  			cout << " Jadi Luas Persegi Panjangnya Adalah <<L";
  		}
  		
		else if (pilih=='B'){
				system("cls");
				cout<<"		||--Anda Memilih Menghitung Luas Segitiga--||"<<endl;
				cout<<""<<endl;
				cout<<"Input Alas Segitiga = "; cin>>al;
				cout<<"Input Tinggi Segitiga = "; cin>>t;
				L=0.5*al*l;
				
				cout << " Jadi Luas segitiganya Adalah"<<L;
		}
}
