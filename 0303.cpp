#include <iostream>
using namespace std;

int main(){
	float jk, le, gtot, gp, gb,ul, jam,pa;
	cout<<"		Program Gaji Bersih Karyawan"<<endl;
	cout<<""<<endl;
	cout<<"Lama Kerja Karyawan	: "; cin>> jk;
	cout<<"Gaji Perjam Karyawan	: "; cin>>gp;
	
if (jk>40){
		 system("cls");
		 cout<<"	Program Gaji Bersih Karyawan"<<endl;
		 cout<<"	Karyawan Mendapat Lembur"<<endl;
		 cout<<""<<endl;
		 le=jk-40;
		 jam=le*1.5;
		 ul=gp*jam;
		 pa=ul*0.15;
		 gtot=gp-pa;
		 gb=gtot-(jk*40)+((gp-40)*jk*1-.5);
		 
		 			cout<<"Lama Kerja Karyawan Dalam Seminggu			:"<<jk<<" Jam"<<endl;
		 			cout<<"Total Lembur Karyawan						:"<<le<<" (dalam seminggu)"<<endl;
		 			cout<<"Gaji Perjam Yang Karyawan Terima				: Rp	"<<gp<<endl;
		 			cout<<"Upah Lembur Yang Di Terima Karyawan			: Rp	"<<ul<<endl;
		 			cout<<"Pajak Yang Ditanggung Karyawan				: Rp	"<<pa<<endl;
		 			cout<<"Total Gaji Bersih Yang Di Terima Karyawan	: Rp	"<<gb<<endl;
		 			
}
		else {
					system,("cls");
					cout<<""<<endl;
					cout<<"		Program Gaji Bersih Karyawan"<<endl;
					cout<<"		Karyawan Tidak Mendapat Lembur"<<endl;
					cout<<""<<endl;
					gtot=gp*40;
					pa=gtot*0.15;
					gb=gtot-pa;
					
					cout<<"Lama Kerja Karyawan Dalam Seminggu				: "<<jk<<" Jam"<<endl;
					cout<<"Total Lembur Karyawan							: "<<le<<" (dalam seminggu)"<<endl;
					cout<<"Gaji Perjam Yang Karyawan Terima					: Rp	"<<gp<<endl;
					cout<<"Upah Lembur yang Di Terima Karyawan				: Rp	"<<ul<<endl;
					cout<<"Pajak Yang Ditanggung Karyawan					: Rp	"<<pa<<endl;
					cout<<"Total Gaji Berih Yang Di Terima Karyawan			: Rp	"<<gb<<endl;
					
		}
}
