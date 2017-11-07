#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"Program Menentukan Jenis Bilangan"<<endl;
	cout<<""<<endl;
	cout<<"Input Bilangan : ";cin>>x;
	cout<<""<<endl;
	if (x < 0)
	{
			cout<<"Yang Anda Input Adalah Bilangan Negatif"<<endl;
	}
	else if (x>0)
	{
			cout<<"Yang Anda Input Adalah Bilangan Positif"<<endl;
	}
	else
			cout<<"Yang Anda Input Adalah Bilangan Nol"<<endl;
	
	return 0;
}
